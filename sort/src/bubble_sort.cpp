#include<iostream>
#include<vector>
using namespace std;
vector<double> randVector(int, int, int);
void printArray(double *first, int size){
    for(int i=0;i<size;i++)
        cout<<*(first+i)<<' ';
    cout<<'\n';
    return;
}
void bubbleSort(vector<double> &v){
    for(int i=v.size();i>0;i--)
        for(int j=1;j<=i;j++)
            if(v[j-1]>v[j]){
                swap(v[j-1], v[j]);
            }
}
int main(){
    vector<double> v_unsorted = randVector(20, 0, 100);
    cout<<"before sorted:\n";
    printArray(v_unsorted.data(), v_unsorted.size());
    bubbleSort(v_unsorted);
    cout<<"after sorted:\n";
    printArray(v_unsorted.data(), v_unsorted.size());
}