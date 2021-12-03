#include <stdio.h>
#include<math.h>
int main()
{
int P,T,R;
float SI,CI;
printf ("Enter principle amount ");
scanf ("%d",&P);
printf ("Enter time period ");
scanf ("%d",&T);
printf ("Enter Rate of interest ");
scanf ("%d",&R);
SI=(P*T*R)/100.0;
printf ("Simple interest is ");
printf ("%0.2f",SI);
CI=P*(pow((1+R/100.0),T));
printf ("\nCompound interest is ");
printf ("%0.2f",CI);
return 0;
}
