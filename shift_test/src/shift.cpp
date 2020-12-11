#include<iostream>
using namespace std;
int main(){
	unsigned int test = 0x12345678;
	cout<<"0x12345678 is "<<test<<endl;
	cout<<"data value is "<<8+7*16+6*16*16+5*256*16+4*256*256+3*256*256*16+2*256*256*256+1*256*256*256*16<<endl;
	char buffer[4];
	buffer[0] = test>>24;
	buffer[1] = test>>16;
	buffer[2] = test>>8;
	buffer[3] = test;
	cout<<"char[0] is "<<(int)buffer[0]<<endl;
	cout<<"char[3] is "<<(int)buffer[3]<<endl;
	if(*(unsigned int*)buffer == 0x78563412)
		cout<<"after change is 0x78563412"<<endl;
	int test_shift = test>>20;
	cout<<"test_shift is "<<test_shift<<endl;
	return 0;
}