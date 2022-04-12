#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterNonPositive.h"
#include "FilterForTwoDigitPositive.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec{3,6,9};
    MapTriple maple;
    MapSquare mapsque;
    MapAbsoluteValue mabs;
    FilterOdd filOdd;
    FilterNonPositive filNeg;
    FilterForTwoDigitPositive filTDP;
    ReduceMinimum redGen;
    ReduceGCD redGCD;
    vector<int> tripVec = maple.map(vec);
    vector<int> sqVec = mapsque.map(vec);
    vector<int> absVec = mabs.map(vec);
    vector<int> oddVec = filOdd.filter(vec);
    vector<int> negVec = filNeg.filter(vec);
    vector<int> TDPVec = filTDP.filter(vec);
    int redGenRes = redGen.reduce(vec);
    int redGCDRes = redGCD.reduce(vec);

    for(int x:vec){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x:tripVec){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x:sqVec){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x:absVec){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x:oddVec){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x:oddVec){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x:negVec){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int x:TDPVec){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<redGenRes<<endl;
    cout<<redGCDRes<<endl;
}
