#include<iostream>
#include<cstdio>
#include<cstdint>
#include<vector>
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
void printWaveInfo(FILE* infile, header_p meta){        
    cout<<"RIFF header id is "<<meta->chunk_id[0]<<meta->chunk_id[1]<<meta->chunk_id[2]<<meta->chunk_id[3]<<endl;
    cout<<"file size is "<<meta->chunk_size<<endl;
    cout<<"file format is "<<meta->format[0]<<meta->format[1]<<meta->format[2]<<meta->format[3]<<endl;
    cout<<"subchunk1 id is "<<meta->subchunk1_id[0]<<meta->subchunk1_id[1]<<meta->subchunk1_id[2]<<meta->subchunk1_id[3]<<endl;
    cout<<"subchunk1 size is "<<meta->subchunk1_size<<" bytes"<<endl;
    if(meta->audio_format==1)
        cout<<"audio format is PCM"<<endl;
    else
        cout<<"audio format is something else"<<endl;
    cout<<"number of channels are "<<meta->num_channels<<endl;
    cout<<"sample rate is "<<meta->sample_rate<<endl;
    cout<<"bytes per second are "<<meta->byte_rate<<endl;
    cout<<"bytes per sample are "<<meta->block_align<<endl;
    cout<<"bits per sample are "<<meta->bits_per_sample<<endl;
    cout<<"subchunk2 id is "<<meta->subchunk2_id[0]<<meta->subchunk2_id[1]<<meta->subchunk2_id[2]<<meta->subchunk2_id[3]<<endl;
    cout<<"bytes of data are "<<meta->subchunk2_size<<endl;
}
int main(){
    FILE* infile = fopen("../src/10MG.wav", "rb");
    header_p meta;
    int count;
    if(infile){
        count = fread(meta, 1, 44, infile);
        printWaveInfo(infile, meta);
    }
    else
        cout<<"CANNOT READ FILE!!!"<<endl;
    short int data;
    count = fread(&data, 2, 1, infile);
    cout<<"next data ch1 is "<<data<<endl;
    // vector<pair<short, short> > data(10);
    // for (int i = 0; i < 10; i++) {
    //     fread(&data[i].first, sizeof(short), 1, infile);
    //     fread(&data[i].second, sizeof(short), 1, infile);
    //     // cout<<"ch1 data value is "<<data[i].first<<"\nch2 data value is "<<data[i].second<<endl;
    // }
    // for (int i = 0; i < 10; i++) {
    //     cout<<data[i].first<<", "<<data[i].second<<endl;
    // }
    // fclose(infile);
    return 0;
}