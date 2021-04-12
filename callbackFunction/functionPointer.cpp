#include<iostream>

typedef void (*funcPointer) ();

void printEnglish(){
    std::cout<<"My name is Shane."<<std::endl;
}
void printChinese(){
    std::cout<<"我的名字是徐永"<<std::endl;
} 
funcPointer fp[] = {printEnglish, printChinese};

int main(){
    while(1){
        int option = 0;
        std::cout<<"option: (1)English (2)Chinese"<<std::endl;
        std::cin>>option;
        if(option==1 || option==2){
            fp[option-1]();
        }
        else{
            std::cout<<"Wrong input. Please input number 1 or 2"<<std::endl;
            continue;
        }
    }
}