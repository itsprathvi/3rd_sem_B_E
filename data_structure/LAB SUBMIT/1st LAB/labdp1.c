#include<stdio.h>
#include<stdlib.h>
struct patient
{
	char name[100];
	int age;
	char bg[100];
};
struct symptoms
{
	char sy[100];
	struct patient p;
};
int main()
{
	struct symptoms d,*ptr;
	ptr=&d;
	printf("ENTER THE DETAILS OF COVID PATIENT\n");
	printf("Enter Name of the Patient\n");
	scanf("%s",ptr->p.name); 
	printf("Enter Age of the Patient\n");
	scanf("%d",&ptr->p.age);
	printf("Enter Blood group of the Patient\n");
	scanf("%s",ptr->p.bg);
	printf("Which of the following Symptoms that Patient suffering[use coma after one symptom]:\n");
	printf("Fever \t Cold \t Headache \t cough \t Body pain\n");
	scanf("%s",ptr->sy);
	
	printf("DETAILS OF COVID PATIENT\n");
	printf("Name : %s\n",ptr->p.name);
	printf("AGE : %d\n",ptr->p.age);
	printf("BLOOD GROUP : %s\n",ptr->p.bg);
	printf("Symptoms : %s\n",ptr->sy);
	printf("\n");
	printf("NOTE:If patient has more than two symptoms,Go nearby Doctor for consultency\n");
}
