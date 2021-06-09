/*#include<stdio.h> 
#include<stdlib.h>

int gcd(int a, int b)
{
    int g;
    int large = a;
    if(a<b)
        large = b;
    for(int i=1; i<=large/2; i++)
    {
        if(a%i==0 && b%i==0)
        {
            g=i;
        }
    }
    return g;
}

int main()
{
    int a,b;
    printf("Enter 2 no: ");
    scanf("%d %d", &a, &b);
    printf("\nGCD: %d\n",gcd(a,b));
}*/

#include<stdio.h> 
#include<stdlib.h>

int gcd(int a,int b)
{
    if(a==0 || b==0)
     return 0;
    else if(a==b)
        return a;
    else if(a>b)
        return gcd(a-b, b);
    else
        return gcd(a, b-a);
}
int main()
{
    int a,b;
    printf("Enter 2 no: ");
    scanf("%d %d", &a, &b);
    printf("\nGCD: %d\n",gcd(a,b));
    return 0;
}
