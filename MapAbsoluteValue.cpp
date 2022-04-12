#include "MapAbsoluteValue.h"
#include <vector>
using namespace std;

 vector<int> MapAbsoluteValue::map(vector<int> input){
    vector<int> output;
    for(int i=0;i<input.size();i++){
        if(input.at(i)<0){
            output.push_back(input.at(i)*(-1));
        }
    else{
        output.push_back(input.at(i));
    }

    }
return output;

}