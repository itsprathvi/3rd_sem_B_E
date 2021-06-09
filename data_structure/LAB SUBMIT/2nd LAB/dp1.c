#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct employee
{
	char name[100];
	int id;
	int service;
};
struct address
{
	char addre[100];
	struct employee e;
};

int main()
{
	struct address a,*p;
	p = &a;
	printf("Details of an Employee\n");
	printf("Enter the name of the Employee\n");
	fgets(p->e.name, 100, stdin);
	printf("Enter the Address of Employee\n");
	fgets(p->addre, 100, stdin);
	//scanf("%s",p->e.name);
	printf("Enter the Id of the Employee\n");
	scanf("%d",&p->e.id);
	printf("Enter the year of experience\n");
	scanf("%d",&p->e.service);
	
	//scanf("%s",p->addre);
	//p->e.name[strlen(p->e.name)-1] = '\0';
	
	printf("THE EMPLOYEE DETAILS\n");
	printf("Name : %s\n",p->e.name);
	printf("ADRESS : %s\n",p->addre);
	printf("ID : %d\n",p->e.id);
	printf("YEAR OF EXPERIENCE : %d\n",p->e.service);
	
	return 0;
}
