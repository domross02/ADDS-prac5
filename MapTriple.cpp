#include "MapTriple.h"
#include <vector>
using namespace std;

 vector<int> MapTriple::map(vector<int> input){
    vector<int> output;
    for(int i=0;i<input.size();i++){
        output.push_back(input.at(i)*3);

    }
return output;

}