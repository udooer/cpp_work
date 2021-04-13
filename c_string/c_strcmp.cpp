#include<cstring>
#include<iostream>
using namespace std;
int main(){
    char c1[] = "a";
    char c2[] = "a";
    int flag;
    flag = strcmp(c1, c2);
    cout<<"strcmp() return: "<<flag<<endl;
    return 0;
}