#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s = "this - is the sentence-needed to be splitted.";
    char *c_s = new char[s.length()+1];
    strcpy(c_s, s.c_str());
    cout<<"sentence: "<<c_s<<endl;
    char * token = strtok(c_s, " ");
    cout<<"\ntoken: "<<token<<endl;
    cout<<"after strtok() c_string: "<<c_s<<endl;

    token = strtok(NULL, " ");
    cout<<"\ntoken: "<<token<<endl;
    cout<<"after strtok() c_string: "<<c_s<<endl;
    
    return 0;
}