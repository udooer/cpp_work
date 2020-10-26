#include<iostream>
#include<vector>
using namespace std;
vector<int> randIntVector(int, int, int);
void printArray(int *first, int size){
    for(int i=0;i<size;i++)
        cout<<*(first+i)<<' ';
    cout<<'\n';
    return;
}
void merge(vector<int> &v, int start, int mid, int end){
    int a = mid-start+1;
    int b = end-mid;
    int i=0, j=0;
    vector<int> A(v.begin()+start, v.begin()+mid+1);
    vector<int> B(v.begin()+mid+1, v.begin()+end+1);
    while( (i+j)<(a+b) ){
        if(i<a && j<b){
            if(A[i]<=B[j]){
                v[i+j+start] = A[i];
                i++;
            }
            else{
                v[i+j+start] = B[j];
                j++;
            }
        }
        else if(i==a && j<b){
            for(;j<b;j++)
                v[i+j+start] = B[j];
        }
        else if(i<a && j==b){
            for(;i<a;i++)
                v[i+j+start] = A[i];
        }
    }
    // cout<<"finishing MERGING!!!\n\n";
}
void mergeSort(vector<int>& v, int start, int end){
    int number = end-start+1;
    if(number==2){
        if(v[start]>v[end]){
            swap(v[start], v[end]);
        }
        return;
    }
    else if(number==1){
        return;
    }
    // cout<<"number is "<<number<<", end is "<<end<<", start is "<<start<<'\n';
    int step = number/2;
    mergeSort(v, start, start+step-1);
    // cout<<"finish A & print A is :";
    // printArray(A.data(), A.size());
    mergeSort(v, start+step, end);
    // cout<<"finish B & print B is :";
    // printArray(B.data(), B.size());
    merge(v, start, start+step-1, end);
    // printArray(ans.data(), ans.size());
}
int main(){
    vector<int> v_unsorted = randIntVector(20, 0, 100);
    cout<<"before sorted:\n";
    printArray(v_unsorted.data(), v_unsorted.size());
    mergeSort(v_unsorted, 0, v_unsorted.size()-1);
    cout<<"after sorted:\n";
    printArray(v_unsorted.data(), v_unsorted.size());
    return 0;
}