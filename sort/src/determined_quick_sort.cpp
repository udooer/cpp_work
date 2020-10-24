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
//小的丟到前面，用一個flag紀錄有幾個小於等於pivot的partition
int  partition(vector<int> &v, int start, int end){
    int pivot = v[end];
    int flag = start;
    int i;
    for(i=start;i<end;i++){
        if(v[i]<=pivot){
            swap(v[flag], v[i]);
            flag++;
        }
    }
    swap(v[flag], v[i]);
    return flag;
}
void quickSort(vector<int> &v, int start, int end){
    int number = end-start+1;
    if(number==2){
        if(v[start]>v[end])
            swap(v[start], v[end]);
        return;
    }
    else if(number<=1)
        return;
    int mid = partition(v, start, end);
    cout<<"number is "<<number<<", start is "<<start<<", end is "<<end<<", mid is "<<mid<<'\n';
    printArray(v.data(), v.size());
    cout<<'\n';
    quickSort(v, start, mid-1);
    quickSort(v, mid+1, end);
}
int main(){
    vector<int> v_unsorted = randIntVector(8, 0, 100);
    cout<<"before sorted:\n";
    printArray(v_unsorted.data(), v_unsorted.size());
    quickSort(v_unsorted, 0, v_unsorted.size()-1);
    cout<<"after sorted:\n";
    printArray(v_unsorted.data(), v_unsorted.size());
    return 0;
}