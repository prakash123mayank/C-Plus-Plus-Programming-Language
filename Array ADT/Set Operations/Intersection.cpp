#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int A[]={2,5,6};
    int B[]={2,7,8,12};
    int C[10];
    int i,j,k,d;
    i=j=k=0;
    while(i<3 && j<4)
    {
        if(A[i]<B[j])
            i++;
        else if(A[i]>B[j])
            j++;
        else if (A[i]==B[j])
        {
            C[k++]=A[i++];
            j++;
        }
    }
    
    cout<<"Array A's elements are:"<<endl;
    for(i=0;i<3;i++)
        cout<<A[i]<<" ";
    cout<<"\nArray B's elements are:"<<endl;
    for(i=0;i<4;i++)
        cout<<B[i]<<" ";
    cout<<"\nIntersection"<<endl;
    for(d=0;d<k;d++)
    {
        cout<<C[d]<<" ";
    }
    
    return 0;
}
