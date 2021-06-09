#include<stdio.h>
#include<stdlib.h>
void read(int n)
{
	int *new;
	int i;
	new=(int*)malloc(1000*sizeof(int));
	if(new==NULL)
	{
		printf("Space is not allocated\n");
		exit(0);
	}
	else
	{
		printf("Space is successfully Allocated\n");
		printf("Enter the Elements to the array : \n");
		for(i=0;i<n;i++)
		{
			scanf("%d",(new+i));
		}
		printf("The elements in the Array : \n");
		for(i=0;i<n;i++)
		{
			printf("%d",*(new+i));
		}
	}
}

int main()
{
	int n;
	printf("Enter the Size of the Array = ");
	scanf("%d",&n);
	read(n);
	return 0;
}
