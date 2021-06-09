#include <stdio.h>
#include<stdlib.h>

int main()
{
    char *s = malloc(1000*sizeof(char)); 
    if(s == NULL)
    {
    	printf("Memory is Not allocated\n");
    	exit(0);
    }
    else
    {
    	    printf("Memory is succesfully Allocated using malloc\n");
	    printf("ENTER A PARAGRAPH : \n[NOTE : Press tab to stop and Press Enter to Exicute]\n");
	    scanf("%[^\t]",s);
	    int words = 0;
	    int letters = 0;
	    int lines = 0;
	    for (int i = 0; *(s+i)!='\0'; i++)
	    {
			letters++;
			if(letters ==1)
			{
			    lines = 1;
			    words = 1;
			}
			if(*(s+i) == ' ' || *(s+i) == '\n')
			    words++;
			if(*(s+i) == '\n')
			    lines++;
	    }
	    printf("\nThe Paragraph is: \n");
	    for (int i = 0; *(s+i)!='\0'; i++)
	    {
		printf("%c", *(s+i));
	    }
	    printf("\nNumber of letters: %d\nNumber of Words: %d\nNumber of lines: %d\n",letters, words, lines);
	    free(s);
}
    return 0;
}
