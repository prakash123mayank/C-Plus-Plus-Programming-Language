#include<iostream>
#include<map>

using namespace std;

int main()
{
    // MAP container in STL
    //Maps are used to replicate associative arrays. Maps contain sorted key-value pair, in which each key is unique and cannot be changed, and it can be inserted or deleted but cannot be altered. Value associated with keys can be altered. We can search, remove and insert in a map within O(n) time complexity.
    
    // Creating a Map in C++ STL
    // Syntax: map<key_type,value_type>
    
    map<int ,int> m{ {1,2},{2,3},{3,4}};
    // creates a map m with keys 1,2,3 and their corresponding values 2,3,4 
    
    map<string,int>map1;
    map1["a"]=1000;   // inserts key = "a" with value = 1000
    map1["b"]=2000;   // inserts key = "b" with value = 2000
    map1["c"]=3000;   // inserts key = "c" with value = 3000
    map1["d"]=4000;   // inserts key = "d" with value = 4000
    map1["e"]=5000;   // inserts key = "e" with value = 5000
    
    map<char,int> map2(map1.begin(), map1.end());
    //creates a map map2 which have entries copied from map1.begin() to map1.end()
    
    map<char,int> map3(m);  // creates a map map3 which is a copy of map m 
}
