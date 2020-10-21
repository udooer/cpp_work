#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> cpp_array;
    int *ptr = cpp_array.data();
    cout<<"my data pointer: "<<cpp_array.data()<<'\n';
    cout<<"size of cpp_array: "<<cpp_array.size()<<'\n';
    cout<<"capacity of cpp_array: "<<cpp_array.capacity()<<'\n';
    for(int i=0;i<100;i++){
        cpp_array.push_back(i);
        if(ptr!=cpp_array.data()){
            cout<<"\n\n\n";
            cout<<"my data pointer: "<<cpp_array.data()<<'\n';
            cout<<"size of cpp_array: "<<cpp_array.size()<<'\n';
            cout<<"capacity of cpp_array: "<<cpp_array.capacity()<<'\n';
            ptr=cpp_array.data();
        }
    }
    return 0;
}