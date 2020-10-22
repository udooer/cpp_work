#include<iostream>
#include<random>
#include<vector>
#include<ctime>
using namespace std;
void print_array(int *first, int size){
    for(int i=0;i<size;i++)
        cout<<*(first+i)<<' ';
    cout<<'\n';
    return;
}
int main(){
    // default_random_engine eng = default_random_engine(rd());
    mt19937 eng((unsigned)time(0));
    //default_random_engine eng((unsigned)time(0));
    uniform_int_distribution<int> dis(0,10);
    vector<int> vector_rand(100);
    for(int i=0;i<100;i++){
        vector_rand[i]=dis(eng);
    }
    print_array(vector_rand.data(), vector_rand.size());
    return 0;
}