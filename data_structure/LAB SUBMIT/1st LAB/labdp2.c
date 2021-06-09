#include<stdio.h>
#include<stdlib.h>
int search(int *arr,int x,int z)
{
	int p;
	for(int i=0;i<x;i++,*arr++)
	{
		if(z == *arr)
		 p = i+1;
	} 
	return(p);
}

int main()
{
	int arr[100],i,n,y,result;
	printf("Enter the size of the Array\n");
	scanf("%d",&n);
	printf("Enter the elements in the array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",arr+i);
	}
	printf("The elements in the Array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d \t",*(arr+i));
	}
	printf("\n");
	printf("Enter the Element to search : \n");
	scanf("%d",&y);
	result=search(arr,n,y);
	printf("The Location of the Element in the array is: %d \n ",result);
	return 0;
}
