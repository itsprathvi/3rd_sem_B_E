#include <stdio.h>6
#include <stdlib.h>
struct student_details
{
	char Name[100];
	int usn;
	char email[100];
};

int main()
{
	struct student_details s;
	printf("ENTER THE STUDENT DETAIL\n");
	printf("Enter the Name : ");
	scanf("%s",s.Name);
	printf("Enter the USN : ");
	scanf("%d",&s.usn);
	printf("Enter the Email  : ");
	scanf("%s",s.email);
	
	printf("STUDENT DETAILS\n");
	printf("NAME : %s\n",s.Name);
	printf("USN : %d\n",s.usn);
	printf("E-MAIL : %s\n",s.email);
	return 0;	
}
