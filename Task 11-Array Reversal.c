
#include<stdio.h>
int main()
{
int arr[5];
printf("Enter array elements:");
for(int i=0;i<=4;i++)
{
scanf("%d",&arr[i]);
}
for(int i=4;i>=0;i--)
{
printf("%d\n",arr[i]);
}
return 0;
}
