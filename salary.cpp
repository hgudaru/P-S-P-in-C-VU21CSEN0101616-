#include<stdio.h>
int main()
{  int  basic,da,hra,pf,lic,s;
   printf("enter the value of basic");
   scanf("%d",&basic);
   printf("enter the value of da");
   scanf("%d",&da);
   printf("enter the value of hra");
   scanf("%d",&hra);
   printf("enter the value of pf");
   scanf("%d",&pf);
   printf("enter the value of lic");
   scanf("%d",&lic);
   s = basic+da+hra-pf-lic;
   printf("the value of s is %d",s);
   return 0;
}
