#include<iostream>
using namespace std;
int main(){
    string s1 = "shane is tall";
    string s2 = "shane is tall.";
    int flag = s1.compare(s2);
    if(flag==0)
        cout<<"string s1 is same as string s2."<<endl;
    else
        cout<<"string s1 is not same as string s2."<<"\nflag value is : "<<flag<<endl;
    return 0;
}
