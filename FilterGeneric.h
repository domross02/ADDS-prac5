#ifndef FILTERGENERIC
#define FILTERGENERIC
#include <vector>
class FilterGeneric{
    public:
    virtual std::vector<int> filter(std::vector<int>)=0;



};


#endif