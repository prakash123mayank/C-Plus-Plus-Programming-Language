#include<iostream>
#include<tuple>
using namespace std;

int main()
{
    array<int,10> array1={1,2,3,4,5,6,7,8,9};
    //at():This method returns value in the array at the given range. If the given range is greater than the array size, out_of_range exception is thrown.
    
    cout<<array1.at(5)<<endl;
    
    //Another way using [] operator
    cout<<array1[5]<<endl;
    
    
    return 0;
}
