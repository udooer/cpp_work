#include<iostream>
#include<cstdlib>
#include<iomanip>
using namespace std;
int main(){
    float test_number;
    float error;
    cout<<setprecision(10);
    for(int i=0;i<100;i++){
        test_number = (i%10)/10.0;
        error = abs(test_number-0.9);
        // cout<<"error is "<<error<<" , ";
        if(error<1e-7){
            cout<<"my test_number is "<<test_number<<",\t\t it is equal to 0.9\n";
        }
        else if(test_number>0.9){
            cout<<"my test_number is "<<test_number<<",\t\t it is greater than 0.9\n";
        }
        else if(test_number<0.9){
            cout<<"my test_number is "<<test_number<<",\t\t it is smaller than 0.9\n";
        }
    }
    return 0;
}
