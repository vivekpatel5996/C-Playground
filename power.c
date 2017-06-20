//Enter base and power.Get your answer. 
#include<stdio.h>
int power(int b,int p);
main()
{
	int base,pwr;
	printf("enter base and power\n");
	scanf("%d %d",&base,&pwr);
	int answer;
	answer=power(base,pwr);
	printf("answer is %d",answer);
	
}

int power(int b,int p)
{
	int i,ans;
	ans=1;
	for(i=0;i<p;i++)
	{
		ans=ans*b;
	}
	return ans;
}

