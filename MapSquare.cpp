#include "MapSquare.h"
#include <vector>
using namespace std;

 vector<int> MapSquare::map(vector<int> input){
    vector<int> output;
    for(int i=0;i<input.size();i++){
        output.push_back(input.at(i)*input.at(i));

    }
return output;

}