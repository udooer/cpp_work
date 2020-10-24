#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
vector<double> randVector(int, int, int);
void printArray(double *first, int size){
    for(int i=0;i<size;i++)
        cout<<*(first+i)<<' ';
    cout<<'\n';
    return;
}
void stoogeSort(vector<double> &v, int start, int end){
    int number = end-start+1;
    if(number==2){
        if(v[start]>v[end])
            swap(v[start], v[end]);
        return;
    }
    else if(number<=1)
        return;
    int step = (int)ceil(number/3.0*2);
    stoogeSort(v, start, start+step-1);
    stoogeSort(v, end-step+1, end);
    stoogeSort(v, start, start+step-1);
}
int main(){
    vector<double> v_unsorted = randVector(20, 0, 100);
    cout<<"before sorted:\n";
    printArray(v_unsorted.data(), v_unsorted.size());
    stoogeSort(v_unsorted, 0, v_unsorted.size()-1);
    cout<<"after sorted:\n";
    printArray(v_unsorted.data(), v_unsorted.size());
}