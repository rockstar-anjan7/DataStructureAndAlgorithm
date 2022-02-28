#include<stdio.h>
int fib(int);
int main(){
   int n,i;
   printf("enter the number at which you want to print the fibonacci series\n");
   scanf("%d",&n);
   for (int i =0; i < n; i++)
   {
       printf(" %d ", fib(i) );
   }
   
return 0;
}
int fib(int n){
    
    if (n==1||n==0){
        return 1;
    }
   else
     return (fib(n-1)+fib(n-2));
    
}