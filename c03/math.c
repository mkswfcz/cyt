#include<stdio.h>
int main()
{
	int flag=1;
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
			{
			 if(0!=B)
				{sum=A/B;}
			else
			{
			 flag=0;
			 printf("表达式不合法！\n");}
			}
			else
			{
				flag=0;
				printf("表达式不合法！\n");
			}

			if(flag)
			printf("sum:%0.2f\n",sum);
        	return 0;
}
