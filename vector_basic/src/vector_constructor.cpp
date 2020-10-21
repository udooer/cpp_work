#include<iostream>
#include<vector>
using namespace std;
void print_array(int *first, int size){
    for(int i=0;i<size;i++)
        cout<<*(first+i)<<' ';
    cout<<'\n';
    return;
}
int main(){
    vector<int> cpp_array(4,100);
    vector<int> cpp_array_copy(cpp_array);
    vector<int> cpp_array_partial_copy(cpp_array.begin(), cpp_array.begin()+2);
    int c_array[10]={1,2,3,4};
    vector<int> cpp_array_copy_c_array(c_array, c_array+2);
    
    cout<<"\ncpp_array:\n";
    print_array(cpp_array.data(), cpp_array.size());
    cout<<"\ncpp_array_copy:\n";
    print_array(cpp_array_copy.data(), cpp_array_copy.size());
    cout<<"\ncpp_array_partial_copy:\n";
    print_array(cpp_array_partial_copy.data(), cpp_array_partial_copy.size());
    cout<<"\nc_array:\n";
    print_array(c_array, sizeof(c_array)/sizeof(int));
    cout<<"\ncpp_array_copy_c_array:\n";
    print_array(cpp_array_copy_c_array.data(), cpp_array_copy_c_array.size());
    return 0;
}