#include<stdio.h>
int fact(int);
main()
{
	int number,answer;
	printf("e,enter a number\n");
	scanf("%d",&number);
	answer=fact(number);
	printf("answer is %d",answer);
	
}

int fact(int n)
{
    int i,ans=1;
    if(n==0 || n==1)
    {
    	return ans;
	}
	else
	{
	
    	for(i=2;i<=n;i++)
    	{
            ans=ans*i;	
		}
		return ans;
    }
}
