#include<iostream>
#include<conio.h>
using namespace std;

int pow(int n,int p)
{   int num=1;
    for(int i=0;i<p;i++)
    { num*=n; }
    return num;
}

long int no_of_digits(long int binarynum){
    int i=0, n=0;
    while(true){
        if(binarynum%pow(10,i)==binarynum){
            n=i; break;
        }
        i++;
    }
    return n;
}

long int ones_complement(long int binarynum)
{
    long int complement=0;
    int i=0, n=no_of_digits(binarynum);

    int A[n];
    for(i=1;i<=n;i++){
        A[i-1]=binarynum/pow(10,n-i);
        binarynum%=pow(10,n-i);
    }

    for(i=0;i<n;i++){
        if(A[i]==1){A[i]=0;}
        else if(A[i]==0){A[i]=1;}
    }

    for(i=0;i<n;i++){complement+=A[i]*pow(10,n-i-1);}
    return complement;
    
}