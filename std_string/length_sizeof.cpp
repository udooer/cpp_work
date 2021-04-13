#include<iostream>
using namespace std;
int main(){
	string s1 = "shane is tall.";
	int size = sizeof(s1);
	int length = s1.length();
	cout<<"sizeof() is : "<<size<<endl;
	cout<<"length() is : "<<length<<endl;
	return 0;
}