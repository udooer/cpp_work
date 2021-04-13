#include<cstring>
#include<iostream>
using namespace std;
int main(){
    char c[80] = "test";
    // cout<<"input the word:"<<endl;
    // cin>>c;
    cout<<"array of char length: strlen() is "<<strlen(c)<<endl;
    cout<<"array of char length: sizeof() is "<<sizeof(c)<<endl;
    int length = 0;
    while(*(c+length)!='\0')
        length++;
    cout<<"array of char length: length is "<<length<<endl;
    return 0;
}