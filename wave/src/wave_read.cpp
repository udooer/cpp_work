#include<iostream>
#include<cstdio>
#include<cstdint>
using namespace std;

typedef struct headerFile
{
    char chunk_id[4];
    int chunk_size;
    char format[4];
    char subchunk1_id[4];
    int subchunk1_size;
    short int audio_format;
    short int num_channels;
    int sample_rate;            // sample_rate denotes the sampling rate.
    int byte_rate;
    short int block_align;
    short int bits_per_sample;
    char subchunk2_id[4];
    int subchunk2_size;     
}header;

typedef header* header_p;
int getFileSize(FILE* infile){
    int filesize=0;
    fseek(infile, 0, SEEK_END);
    filesize = ftell(infile);
    return filesize;
}
int main(){
    FILE* infile = fopen("../src/forest.wav", "rb");
    header_p meta;
    if(infile){
        fread(meta, 1, sizeof(header), infile);
        cout<<"size of header file is "<<sizeof(header)<<" bytes"<<endl;
        cout<<"sampling rate is "<<meta->sample_rate<<" Hz"<<endl;
        cout<<"Number of bytes in wave file are "<<meta->subchunk2_size<<" samples"<<endl;
        cout<<"bits per sample is "<<meta->bits_per_sample<<endl;
        cout<<"bytes per second is "<<meta->byte_rate<<endl;
        cout<<"number of channels is "<<meta->num_channels<<endl;
        int sample_byte = meta->bits_per_sample/8;
        int sample_count = meta->subchunk2_size/sample_byte;
        cout<<"sample byte is "<<sample_byte<<endl;
        cout<<"sample count is "<<sample_count<<endl;
        cout<<"number of bytes of file is "<<getFileSize(infile)<<endl;
    }

    return 0;
}