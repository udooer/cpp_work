#include<iostream>
#include<string>
#include<sstream>
#include<ctime>
using namespace std;
string getTime(){
    time_t now = time(0);
    tm *ts = localtime(&now);
    stringstream ss;
    string date;
    ss<<1900+ts->tm_year<<"-"<<1+ts->tm_mon<<\
    "-"<<ts->tm_mday<<"_"<<ts->tm_hour<<":"<<\
    ts->tm_min<<":"<<ts->tm_sec;
    ss>>date;
    return date;
}
int main(){
    string date = getTime();
    cout<<date<<endl;
    return 0;
}