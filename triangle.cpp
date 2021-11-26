#include <stdio.h>
int main()
{
	int a,b,c;
	printf("enter side a ");
	scanf("%d",&a);
	printf("enter side b ");
	scanf("%d",&b);
	printf("enter side c ");
	scanf("%d",&c);
	if(a==b && b==c)
	{
	printf("eqilateral");
	}
	else if(a==b && b!=c)
	{
	printf("isosceles");
	}
	else if(a!=b && b!=c)
	{
	printf("scalene");
	}
	return 0;
}
