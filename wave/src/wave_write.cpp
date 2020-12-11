#include<iostream>
#include<cstdio>
using namespace std;
struct header{
    char chunk_id[4]={(char)0x52, (char)0x49, (char)0x46, (char)0x46};
    int chunk_size=20*4*2+44;
    char format[4]={(char)0x57, (char)0x41, (char)0x56, (char)0x45};
    char subchunk1_id[4] = {(char)0x66, (char)0x6d, (char)0x74, (char)0x20};
    int subchunk1_size = 16;
    short int audio_format = 1;
    short int num_channels = 2;
    int sample_rate = 96000;
    int byte_rate = 96000*4*2;
    short int block_align = 4*2;
    short int bits_per_sample = 4*8;
    char subchunk2_id[4] = {(char)0x64, (char)0x61, (char)0x74, (char)0x61};
    int subchunk2_size = 20*4*2;    
}header_file;
int main(){
    FILE* ofile;
    ofile = fopen("write.txt", "wb");
    // fwrite(&header_file, 44, 1, ofile);
    int* pointer;
    int count;
    for(int i=0; i<20;i++){
        cout<<"value is "<<i<<endl;
        *pointer = i;
        count = fwrite(pointer, 1, 4, ofile);
        // *pointer = -i;
        // count = fwrite(pointer, 4, 1, ofile);
    }
    fclose(ofile);
    return 0;
}