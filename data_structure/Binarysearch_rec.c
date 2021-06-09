#include<stdio.h> 
#include<stdlib.h>

int bs(int arr[], int s, int l, int x)
{
    int mid = (s+l)/2;
    if(s > l)
    {
        return -1;
    }
    if(arr[mid] == x)
    {
        return mid;
    }
    else if(x >= arr[mid])
    {
        return bs(arr, mid, l, x);
    }
    else if(x < arr[mid])
    {
        return bs(arr, s, mid, x);
    }  
    return 0;
}

int main()
{
    //enter the elements in the Increasing order//
   int arr[] = {1,2,3,4,5}; 
   int n = 5;
   int x = 4; 
   printf("POS: %d\n", bs(arr, 0, n-1, x) + 1 );
}
