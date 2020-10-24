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
vector<int> merge(vector<int> A, vector<int> B){
    int a = A.size();
    int b = B.size();
    vector<int> output(a+b);
    int i=0, j=0;
    while( (i+j)<=(a+b) ){
        if(i<=a && j<=b){
            if(A[i]<=B[j]){
                output[i+j] = A[i];
                i++;
            }
            else{
                output[i+j] = B[j];
                j++;
            }
        }
        else if(i==a && j<=b){
            for(int k=j;k<b;k++)
                output[i+k] = B[k];
        }
        else if(i<=a && j==b){
            for(int k=i;k<a;k++)
                output[k+j] = A[k];
        }
    }
    return output;
}
vector<int> mergeSort(vector<int>& v, int start, int end){
    int number = end-start+1;
    if(number==2){
        if(v[start]>v[end])
            swap(v[start], v[end]);
        return;
    }
    else if(number<=1)
        return;
    int step = number/2
    vector<int> A = mergeSort(v, start, start+step-1);
    vector<int> B = mergeSort(v, start+step, end);
    return merge(A, B);
}
int main(){
    vector<int> v_unsorted = randIntVector(8, 0, 100);
    cout<<"before sorted:\n";
    printArray(v_unsorted.data(), v_unsorted.size());
    mergeSort(v_unsorted, 0, v_unsorted.size()-1);
    cout<<"after sorted:\n";
    printArray(v_unsorted.data(), v_unsorted.size());
    return 0;
}