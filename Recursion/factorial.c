#include <stdio.h>

int factorial(int a);
int main()
{
 int b;
  printf("enter the value for factorial\n");
  scanf(" %d",&b);
  printf("The factorial of %d is %d \n",b,factorial(b));
  return 0;
}
int factorial(int a){
  if(a<=1){
    return 1;
  }
  else{
    return a*factorial(a-1);
  }
}