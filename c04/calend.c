#include<stdio.h>
int main()
{		
		int year=1900,mon=1,week=0,t,day=0,sum=0;
		while(1){
		printf("请输入年份，月份:");
		scanf("%d %d",&year,&mon);
		if(year<1900||mon<1||mon>12)
		{
				printf("error\n");
		}else
		{
				break;
		}
		}
		for(t=1900;t<year;t++)
		{
		  if((t%4==0&&t%100!=0)||(t%400==0))
		  {sum+=366;
		  }
		  else{
		  sum+=365;
		  }
		}
		for(t=1;t<=mon;t++)
		{
		switch(t){
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:{  
								sum+=31;
								day=31;
						}
						break;
				case 2:{
		                  if((year%4==0&&year%100!=0)||(year%400==0))
						  {
								  sum+=29;
								  day=29;
						  }
						  else {
								  sum+=28;
								  day=28;
						  }	  
					   }
					   break;
				default:{
								sum+=30;
								day=30;
						}
		}
		}
         sum-=day;
		 week=sum%7+1;
		// printf("%d",week);
		printf("su\tmo\ttu\twe\tsu\tfr\tsa\n");
	if(week!=7)
	{  	for(t=0;t<week;t++)
		{
				printf(" \t");
		}
	}
		for(t=1;t<=day;t++)
		{
          printf("%d\t",t);
		  if((t+week)%7==0)
		  {
				  printf("\n");
			}
		}
		printf("\n");
		return 0;
}
