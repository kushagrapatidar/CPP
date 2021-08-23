#include"D:\VSCode\CPP\ones_compliment.h"
 int main(void){
     long int binarynum;
     cin>>binarynum;
     int i=0,n=no_of_digits(binarynum);
     int A[n];
     for(i=1;i<=n;i++){
        A[i-1]=binarynum/pow(10,n-i);
        binarynum%=pow(10,n-i);
     }

     int temp=0;
     for(i=0;i<n;i++){if(A[i]==1){temp=i;}}

     for(i=0;i<temp;i++){
        if(A[i]==1){A[i]=0;}
        else if(A[i]==0){A[i]=1;}
     }

     for(i=0;i<n;i++){cout<<A[i];}
}