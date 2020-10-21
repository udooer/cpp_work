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
    vector<int> cpp_array(6,15);
    int *ptr = cpp_array.data();
    vector<int> cpp_assign;
    cpp_assign.assign(cpp_array.begin(), cpp_array.begin()+2);
    cout<<"size of cpp_assign: "<<cpp_assign.size()<<'\n';
    cout<<"capacity of cpp_assign: "<<cpp_assign.capacity()<<'\n';
    print_array(cpp_assign.data(), cpp_assign.size());
    return 0;
}