#include<cstring>
#include<iostream>
using namespace std;
int main(){
	char c1[] = "test one";
	char c2[] = "test two";
	cout<<*(c1+2)<<endl;
	strcpy(c1,c2);
	cout<<"after strcpy(): c1 becomes "<<c1<<endl;
	return 0;
}