#include <stdio.h>
int main()
{ int m,s,sst,h,e,t;
float avg,P;
printf("Enter maths marks ");
scanf(" %d",&m);
printf("Enter science marks ");
scanf(" %d",&s);
printf("Enter hindi marks ");
scanf(" %d",&h);
printf("Enter english marks ");
scanf(" %d",&e);
printf("Enter social studies marks ");
scanf(" %d",&sst);
t=m+s+sst+h+e;
printf("Total marks are ");
printf ("%d M",t);
avg=t/5;
printf("\nAverage marks are ");
printf(" %0.2f M",avg);
P=(t/500.0)*100;
printf("\nPercentage =");
printf("%0.2f %",P);
return 0;
}
