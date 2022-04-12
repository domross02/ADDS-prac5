#include "ReduceGCD.h"

using namespace std;
int ReduceGCD::reduce(vector<int> input){
    if(input.size()==1){
      return input.at(0);
    }

    for(int i = input.at(0); i>=0;i--){
        if(input.at(0)%i==0 && input.at(1)%i==0){
            input.at(0)=i;
            input.erase(input.begin()+1);
            break;
        }
    }





    int output = reduce(input);
    return output;
}