#include<stdio.h>
int main()
{
	int a=0;
    printf("请输入一个数:\n");
	scanf("%d",&a);
	getchar();
	if(0==a%3&&0==a%5)
			printf("既能被三整除又能被五整除:\n");
	else if(0==a%3)
	{printf("能被三整除\n");}
	else if(0==a%5)
	{printf("能被五整除\n");}
	
	else
	{printf("不能被整除:\n");}
    return 0;
}
