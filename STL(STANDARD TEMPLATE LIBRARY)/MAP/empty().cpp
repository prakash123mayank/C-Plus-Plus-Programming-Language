#include<iostream>
#include<map>
using namespace std;

int main()
{
    
    map<string,int>map1;
    map1["a"]=1000;   // inserts key = "a" with value = 1000
    map1["b"]=2000;   // inserts key = "b" with value = 2000
    map1["c"]=3000;   // inserts key = "c" with value = 3000
    map1["d"]=4000;   // inserts key = "d" with value = 4000
    map1["e"]=5000;   // inserts key = "e" with value = 5000
    
    // empty(): returns boolean true if the map is empty, else it returns Boolean false. 
    cout<<map1.empty();
    
    
    
}
