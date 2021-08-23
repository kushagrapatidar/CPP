//Experiment-1
#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int largest=0,n,a,b;
    cout<<"Enter the number of elements in the first array: ";
    cin>>n;
    if(n<2)
    {
        cout<<"NO PAIRS EXISTS!!";
    }
    else
    {
        int A[n];
        cout<<"Enter the integer elements of first array:\n";
        for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
        for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[i]!=A[j])
            {
                int product=A[i]*A[j];
                if(largest<product){largest=product; a=A[i]; b=A[j];}
            }
        }
    }
        
        if(a>b)
        {
            int temp=a;
            a=b;
            b=temp;
        }
        cout<<largest<<" ("<<a<<","<<b<<")";
    }
}