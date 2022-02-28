#include<stdio.h>
void display(int arr[],int n){
// code for traversal
for (int i = 0; i < n; i++)
{
    printf("%d ",arr[i]);
}
printf("\n");
}
int indInsertion(int arr[],int size,int element,int capacity,int index){
    // code for insertion
    if(size>=capacity){
        return -1;
    }
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
 arr[index]=element;
 return 1;
}


int main(){
  int arr[100]={23,45,12,56,23};
  int element=20,index=2,size=5,capacity=100;
  display(arr,size);
  indInsertion(arr,size,element,capacity,index);
  size++;
  display(arr,size);

return 0;
}