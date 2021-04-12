#include<iostream>
#include<string>
using namespace std;
class Example{
public:
	Example(){
		cout<<"create Example class with nothing\n";
	}
	Example(int a){
		cout<<"create Example class with parameter\n";
	}
};
class Marker{
private:
	int a;
	float c;
	string name;
	const float pi;
	Example m_example;
public:
	Marker():
		m_example(6), pi(3.14159)
	{
		// pi = 3.14;
		// m_example = Example(8);
	};
	void printOut(){
		cout<<"a is "<<a<<"\nc is "<<c<<"\nname is "<<name<<"\npi is "<<pi<<'\n';
	}

};
int main(){
	Marker m;
	m.printOut();
	return 0;
}