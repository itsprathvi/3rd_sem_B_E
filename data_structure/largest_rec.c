#include<stdio.h> 
#include<stdlib.h>

int large(int arr[], int s, int l)
{
    int mid = (l + s)/2; 
    if((l-s) == 1 || (l-s) == 0)
    {
        if(arr[l] > arr[s])
        {
            return arr[l];
        }
        else
        {
            return arr[s];
        }
    }
    if(large(arr, s, mid) >= large(arr, mid, l))
    {
        return large(arr, s, mid);
    }
    else
    {
        return large(arr, mid, l);
    }    
}

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
}

int main()
{
   int arr[] = {10,300,2000, 2500, 4000}; 
   int n = 5;
   int x = 4000; 
   int result = large(arr, 0, n-1);
   printf("LARGE: %d\n", result);
   
   printf("POS: %d\n", bs(arr, 0, n-1, x) + 1 );
}
