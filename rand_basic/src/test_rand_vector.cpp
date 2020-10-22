//description:	test the rand_vector function
//date: 		2020/10/22
//author: 		Shane hung
#include<iostream>
#include<vector>
using namespace std;
vector<double> randVector(int, int, int);
void print_array(double *first, int size){
    for(int i=0;i<size;i++)
        cout<<*(first+i)<<' ';
    cout<<'\n';
    return;
}
int main(){
	vector<double> v;
	v = randVector(100, 0, 1);
	print_array(v.data(), v.size());
	return 0;
}