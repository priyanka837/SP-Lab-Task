#include<stdio.h>
int main()
{
char _operator;
printf("Enter the Operator(+,-,*,/):");
scanf("%c",&_operator);
double a,b;
printf("Enter two Numbers:");
scanf("%lf%lf",&a,&b);
switch(_operator)
{
case '+':
printf("%lf+%lf=%lf",a,b,a+b);
break;
case'-':
printf("%lf-%lf=%lf",a,b,a-b);
break;
case '*':
printf("%lf*%lf=%lf",a,b,a*b);
break;
case '/':
if(b!=0)
printf("%lf/%lf=%lf",a,b,a/b);
else
printf("Error.\n");
break;
default:
printf("Invalid Operation.\n");
break;
}
return 0;
}

