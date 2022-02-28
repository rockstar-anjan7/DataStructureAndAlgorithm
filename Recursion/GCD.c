// greatest common divisior
#include<stdio.h>
   int gcd(int a,int b){
       if(a==b)
       return a;
       if(a%b==0)
       return b;
       if(b%a==0) 
       return a;
       if(a>b)
       return (gcd(a%b,b));
       else
       return (gcd(a,b%a));
   }         
int main(){
    int n1,n2;
      printf("enter the two value if you want to calculate the gcd\n");
      scanf("%d %d",&n1,&n2);
      printf("GCD of %d and %d is %d",n1,n2,gcd(n1,n2));
return 0;
}