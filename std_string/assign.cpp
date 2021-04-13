#include<iostream>
using namespace std;
int main(){
    string s1 = "shane is tall.";
    string s2 = "harworking student.";
    cout<<"before swapping s1: "<<s1<<"\nbefore swapping s2: "<<s2<<endl;
    s1.swap(s2);
    cout<<"after swapping s1: "<<s1<<"\nafter swapping s2: "<<s2<<endl;
    
    cout<<"before assigned s1: "<<s1<<endl;
    s1.assign(s2, 4, 4);
    cout<<"after assigned s1: "<<s1<<endl;
    
    return 0;
}