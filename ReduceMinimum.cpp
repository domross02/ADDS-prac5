#include "ReduceMinimum.h"

using namespace std;
int ReduceMinimum::reduce(vector<int> input){
    if(input.size()==1){
      return input.at(0);
    }
    if(input.at(0)>input.at(1)){
        input.erase(input.begin());
    }
    else{
        input.erase(input.begin()+1);
    }
    int output = reduce(input);
    return output;
}