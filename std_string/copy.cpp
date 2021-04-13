#include<iostream>
using namespace std;
int main(){
    string s("hello, my name is Shane.");
    char c[20];
    int length = s.copy(c, 10, 5);
    c[length] = '\0';
    cout<<"after copy() c is : "<<c<<endl;
    return 0;
}