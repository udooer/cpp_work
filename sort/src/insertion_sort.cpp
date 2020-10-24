#include<iostream>
#include<vector>
using namespace std;
vector<double> randDoubleVector(int, int, int);
void printArray(double *first, int size){
    for(int i=0;i<size;i++)
        cout<<*(first+i)<<' ';
    cout<<'\n';
    return;
}
void insertionSort(vector<double> &v){
    for(int i=1;i<v.size();i++)
        for(int j=i;j>0;j--){
            if(v[j]>v[j-1])
                break;
            else
                swap(v[j], v[j-1]);
        }
    return; 
}
int main(){
    vector<double> v_unsorted;
    v_unsorted = randDoubleVector(20, 0, 100);
    cout<<"before sorted: \n";
    printArray(v_unsorted.data(), v_unsorted.size());
    insertionSort(v_unsorted);
    cout<<"after sorted: \n";
    printArray(v_unsorted.data(), v_unsorted.size());
    return 0;
}