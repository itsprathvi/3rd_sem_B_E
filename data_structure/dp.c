#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n;
	int *ptr;
	int l=*ptr;
	ptr = (int*)malloc(100*sizeof(int));
	
	if(ptr == NULL)
	{
		printf("memory is not allocated\n");
		exit(0);
	}
	else
	{
	printf("Memory is successfully Allocated \n");
	printf("Enter size of the elements\n");
	scanf("%d",&n);
	printf("Enter the Elements \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",ptr+i);
	}
	}
	for(i=0;i<n;i++,*ptr++)
	{
		if(l>*ptr)
		{
			l=*ptr;
		}
	}
	printf("The Largest element in the Given Array is %d\n",l);
	return 0;
}
