#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[] ={1,2,3,4,5};
    int x=sizeof(arr)/sizeof(arr[0]);
    printf("original array: ");
    for ( int i=0; i<x ;i++)
    {
        printf("%d ",arr[i]);
    }
    for ( int i=0 ;i<x/2;i++)
    {
        int temp= arr[i];
        arr[i]=arr[x-i-1];
        arr[x-i-1]=temp;
    }
    printf("\nReverse of array: ");
    for ( int i=0; i<x;i++)
    {
        printf("%d ",arr[i]);
    }
   return 0;
}
