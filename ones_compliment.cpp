#include<iostream>
#include<conio.h>
using namespace std;

int pow(int n,int p)
{   int num=1;
    for(int i=0;i<p;i++)
    { num*=n; }
    return num;
}

int main(void)
{
    long int binarynum,complement=0;
    cin>>binarynum;
    int i=0, n=0;
    while(true){
        if(binarynum%pow(10,i)==binarynum){
            n=i; i=0; break;
        }
        i++;
    }

    int A[n];
    for(i=1;i<=n;i++){
        A[i-1]=binarynum/pow(10,n-i);
        binarynum%=pow(10,n-i);
    }

    for(i=0;i<n;i++){cout<<A[i];}
    int carry=0;

    for(i=0;i<n;i++){
        if(A[i]==1){A[i]=0;}
        else if(A[i]==0){A[i]=1;}
    }

    cout<<"\n";
    for(i=0;i<n;i++){cout<<A[i];}
    
}