#include<iostream>
#include<map>
using namespace std;

int main()
{
    
    map<int ,int> m{ {1,2},{2,3},{3,4},{4,5},{5,6}};
    // creates a map m with keys 1,2,3 and their corresponding values 2,3,4 
    
    //clear():it clears the map and sets its size to 0.
    cout<<"Size of Map m before applying clear() function:"<<m.size();
    m.clear();
    cout<<"\n Size of Map m after applying clear() function:"<<m.size();
    
    
    
}
