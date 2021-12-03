#include <stdio.h>
int main()
{
int a1,a2,a3;
printf("Enter an angle ");
scanf("%d",&a1);
printf("Enter second angle ");
scanf("%d",&a2);
a3=180-(a1+a2);
printf ("The third angle is ");
printf ("%d°",a3);
return 0;
}