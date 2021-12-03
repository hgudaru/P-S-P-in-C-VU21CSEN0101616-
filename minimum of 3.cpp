#include <stdio.h>
int main()
{
	int a,b,c;
	printf ("Enter a number a ");
    scanf ("%d",&a);
    printf ("Enter a number b ");
    scanf ("%d",&b);
    printf ("Enter a number c ");
    scanf ("%d",&c);
	if(a<b && a<c)
	{printf("a is the smallest number");}
	else if(b<a && b<c)
	{printf("b is the smallest number");}
	else
	{printf("c is the smallest number");}
	return 0;
}
