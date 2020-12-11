#include<iostream>
using namespace std;
int main(){
	unsigned int i = 1;
	if(*(char *)&i)
		cout<<"little endian";
	else 
		cout<<"big endian";
	return 0; 
}