#include<stdio.h>
int main()
{
	float A,B, sum;
    unsigned char a;
	printf("请输入算式:\n");
	scanf("%f%c%f",&A,&a,&B);
	getchar();
			if('+'==a)
			{sum=A+B;}
			else if('-'==a)
			{sum=A-B;}
			else if('*'==a)
			{sum=A*B;}
			else if('/'==a)
			{sum=A/B;}
			else
			{printf("对不起！本程序只能进行简单的四则运算!\n");}
			printf("sum:%0.2f\n",sum);
	return 0;
}
