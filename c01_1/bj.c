#include<stdio.h>
int main()
{
int a,b,max;
printf("please input the first num:\n");
scanf("%d",&a);
printf("please input the second num:\n");
scanf("%d",&b);
if(a>b)
max=a;
else
max=b;
printf("max:\n");
printf("%d\n",max);
return 0;
}
