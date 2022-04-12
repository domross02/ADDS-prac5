#include "FilterNonPositive.h"
using namespace std;
vector<int> FilterNonPositive::filter(vector<int> input){
vector<int> output;
for(int i=0;i<input.size();i++){
if(input.at(i)<0){
    output.push_back(input.at(i));
}
}
return output;
}