//description:  define a function that can generate a vector of random number in a range with uniform distribution
//date:         2020/10/22
//author:       Shane hung
#include<vector>
#include<random>
#include<ctime>
using namespace std;
int randInt(int min, int max){
    mt19937 eng((unsigned)time(0));
    uniform_int_distribution<int> dis(min, max);
    return dis(eng);
}
double randDouble(int min, int max){
    mt19937 eng((unsigned)time(0));
    uniform_real_distribution<> dis(min, max);
    return dis(eng);
}
vector<int> randIntVector(int size, int min, int max){
    // random_device rd;
    // default_random_engine eng = default_random_engine(rd());
    mt19937 eng((unsigned)time(0));
    uniform_int_distribution<int> dis(min, max);
    vector<int> output(size);
    for(int i=0;i<size;i++){
        output[i] = dis(eng);
    }
    return output;
}
vector<double> randDoubleVector(int size, int min, int max){
    // random_device rd;
    // default_random_engine eng = default_random_engine(rd());
    mt19937 eng((unsigned)time(0));
    uniform_real_distribution<> dis(min, max);
    vector<double> output(size);
    for(int i=0;i<size;i++){
        output[i] = dis(eng);
    }
    return output;
}
