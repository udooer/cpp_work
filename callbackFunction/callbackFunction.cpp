/*  keys of callback function  
 *      1. There is a function pointer. 
        2. Callback the function by using the function pointer when certain event happens. 
 */
#include<iostream>
#include<cstdint>
#include<ctime>
using namespace std;

typedef struct{
    uint8_t time;
    void (*callbackF) (); 
}obj;

void showHelloWorld(){
    cout<<"Hello World"<<endl;
}

void delaySecond(uint8_t time){
    clock_t now = clock();
    while((clock()-now)/CLOCKS_PER_SEC < time){}
}

obj obj_A;
void callbackShow(uint8_t time, void (*callbackF) ()){
    obj_A.time = time;
    obj_A.callbackF = callbackF;
    while(obj_A.time){
        obj_A.time--;
        if(obj_A.time==0){
            if(obj_A.callbackF)
                obj_A.callbackF();            
        }
        delaySecond(1);
    }
}

int main(){
    callbackShow(10, showHelloWorld);
}
