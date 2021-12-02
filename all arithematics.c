#include <stdio.h>
int main()
{
   int a,b,c;
   char operator;
    printf("Enter value of a ");
    scanf("%d",&a);
    printf("Enter value of b ");
    scanf("%d",&b);
    printf("Enter an operator (+,-,%,*,/): ");
    scanf("%c",&operator);
    switch(operator)
    {
    case '+':
    c = a+b;
    printf("a+b = %d \n",c);
    break;
    case '-':
    c = a-b;
    printf("a-b = %d \n",c);
    break;
    case '*':
    c = a*b;
    printf("a*b = %d \n",c);
    break;
    case '/':
    c = a/b;
    printf("a/b = %d \n",c);
    break;
    case '%':
    c = a%b;
    printf("Remainder when a divided by b = %d \n",c);
    break;
    default:
    printf("Enter correct choice");
}
    return 0;
}

