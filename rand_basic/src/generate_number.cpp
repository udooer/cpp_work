#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    // #ifdef RAND_MAX
    //     cout<<"origin RAND_MAX is "<<RAND_MAX<<'\n';
    //     #define RAND_MAX 99999999
    //     cout<<"re define RAND_MAX to "<<RAND_MAX<<'\n';
    // #else
    //     cout<<"test the contional compiling\n";
    // #endif

    cout<<"rand() generate number in range 0-"<<RAND_MAX<<'\n';
    srand((unsigned)time(0));
    double rand_num;
    int count=0;
    for(int i=0;i<100;i++){
        rand_num = rand()%10/10.0;
        if(rand_num==0.9){
            cout<<"my rand_num is "<<rand_num<<", it is equal to 0.9"<<'\n';
            count++;
        }
    }
    cout<<"\ntotal success "<<count<<" times out of 100 times\n";
    return 0;
}