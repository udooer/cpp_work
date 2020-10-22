#include<iostream>
using namespace std;
int main(){
    double test_number;
    for(int i=0;i<100;i++){
        test_number = (i%10)/10.0;
        if(test_number==0.9){
            cout<<"my test_number is "<<test_number<<",\t it is equal to 0.9\n";
        }
        else if(test_number>0.9){
            cout<<"my test_number is "<<test_number<<",\t it is greater than 0.9\n";
        }
        else if(test_number<0.9){
            cout<<"my test_number is "<<test_number<<",\t it is smaller than 0.9\n";
        }
    }
    return 0;
}
