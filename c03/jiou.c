#include<stdio.h>
int main()
{
	int num;
	printf("请输入一个数:\n");
	scanf("%d",&num);
	if(num%2==0)
	{printf("这个数是偶数！\n");}
	else
	{printf("这个数是奇数！\n");}
	return 0;
}
