#include "FilterForTwoDigitPositive.h"

using namespace std;
vector<int> FilterForTwoDigitPositive::filter(vector<int> input){
vector<int> output;
for(int i=0;i<input.size();i++){
if(input.at(i)>9&&input.at(i)<100){
    output.push_back(input.at(i));
}
}
return output;
}