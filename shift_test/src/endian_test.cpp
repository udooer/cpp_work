#include<cstdio>
#include<iostream>
using namespace std;
void showMem(char *start, int n)  
{ 
    int i; 
    for (i = 0; i < n; i++) 
         printf(" %.2x", start[i]); 
    printf("\n"); 
} 
int main() 
{ 
   int i = 0x01234567; 
   cout<<"sizeof(int) is "<<sizeof(i)<<endl;
   showMem((char *)&i, sizeof(i)); 
   return 0; 
} 