#include<stdio.h>
int main()
{   int grade1,grade2,grade3,sum;
		float ave;
	printf("请输入三名同学的成绩:\n");
	scanf("%d%d%d",&grade1,&grade2,&grade3);
	sum=grade1+grade2+grade3;
	printf("grade1:%d,grade2:%d,grade3:%d\n",grade1,grade2,grade3);
	printf("sum:%d\n",sum);
	ave=sum/3;
	printf("ave:%f\n",ave);

	return 0;
}
