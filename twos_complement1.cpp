#include"D:\VSCode\CPP\ones_compliment.h"
 int main(void){
     long int binarynum;
     cin>>binarynum;
     long int onescomplement= ones_complement(binarynum);
     cout<<onescomplement<<"\n";
     int i=0,n=no_of_digits(binarynum);
     int A[n];
     for(i=1;i<=n;i++){
        A[i-1]=onescomplement/pow(10,n-i);
        onescomplement%=pow(10,n-i);
    }
    
    int carry=0;
    for(i=n-1;i>=0;i--)
    {
        
    }
 }