#include<stdio.h>
int fact(int);
main()
{
	int number,answer;
	printf("enter a number\n");
	scanf("%d",&number);
	answer=fact(number);
	printf("answer is %d",answer);
	
}


int fact(int n)
{
	if(n==0 || n==1)
	{
		return 1;
    
	}
	else
	{
	 return	n*fact(n-1);
		
	}
}
