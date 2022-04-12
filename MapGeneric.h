#ifndef MAPGENERIC
#define MAPGENERIC
#include <vector>
class MapGeneric{
    public:
    virtual std::vector<int> map(std::vector<int>)=0;
};
#endif