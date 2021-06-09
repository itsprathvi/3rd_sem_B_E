#include <stdio.h>
#include <stdlib.h>
struct student_details
{
	char Name[100];
	int usn;
	char email[100];
};
struct information
{
	char adress[100];
	struct student_details d;
};
int main()
{
	struct information s,*p;
	p = &s;
	printf("ENTER THE STUDENT DETAIL\n");
	printf("Enter the Name : ");
	scanf("%s",p->d.Name);
	printf("Enter the USN : ");
	scanf("%d",&p->d.usn);
	printf("Enter the Email  : ");
	scanf("%s",p->d.email);
	printf("Enter the Adress  : ");
	scanf("%s",p->adress);
	
	printf("STUDENT DETAILS\n");
	printf("NAME : %s\n",p->d.Name);
	printf("USN : %d\n",p->d.usn);
	printf("E-MAIL : %s\n",p->d.email);
	printf("ADRESS : %s\n",p->adress);
	return 0;	
}
