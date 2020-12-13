#include<iostream>
#include<cstdio>
#include<cmath>
#define PI 3.14159265
using namespace std;

struct header{
    char chunk_id[4]={'R', 'I', 'F', 'F'};
    int chunk_size=200000*4*2+44;
    char format[4]={'W', 'A', 'V', 'E'};
    char subchunk1_id[4] = {'f', 'm', 't', ' '};
    int subchunk1_size = 16;
    short int audio_format = 1;
    short int num_channels = 2;
    int sample_rate = 96000;
    int byte_rate = 96000*4*2;
    short int block_align = 4*2;
    short int bits_per_sample = 4*8;
    char subchunk2_id[4] = {'d', 'a', 't', 'a'};
    int subchunk2_size = 200000*4*2;    
}header_file;

int main(){
    //design the file length(s)
    int file_length = 10;
    char file_full_path[] = "sine_do.wav";

    int fs = 96000;
    //assign the spec into the wave header file
    header_file.chunk_size = file_length*fs*4+44;
    header_file.subchunk2_size = file_length*fs*4;
    header_file.block_align = 4;
    header_file.bits_per_sample = 4*8;
    header_file.num_channels = 1;
    header_file.sample_rate = 96000;
    header_file.byte_rate = 96000*4;

    float fre = 261.6;
    float sin_data;
    int data;

    FILE* ofile = fopen(file_full_path, "wb");
    fwrite(&header_file, 44, 1, ofile);
    for(int i=0;i<10;i++)
        for(int j=0;j<fs;j++){
            sin_data = sin(2*PI*fre*j/fs);
            // cout<<"sin data :"<<sin_data<<endl;
            sin_data *= pow(2,31);
            data = (int)sin_data;
            // cout<<"sin_data :"<<sin_data<<endl;
            // cout<<endl;
            fwrite(&data, 4, 1, ofile);
        }
    fclose(ofile);
    return 0;
}