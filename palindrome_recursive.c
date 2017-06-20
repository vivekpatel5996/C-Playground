#include<stdio.h>
#include<string.h>
int isPalindrome(char *s,int,int);
main()
{
	char str[100];
	int str_start,str_end;
	printf("enter a string\n");
	scanf("%s",str);
	str_start=0;
	str_end=strlen(str)-1;
	int rtn=isPalindrome(str,str_start,str_end);
	if(rtn==1)
	   printf("string is palindrome\n");
	else
	   printf("string is not palindrome\n");
}

int isPalindrome(char *s,int start,int end)
{
	
	if(start>end || start==end)
	{
		printf("\nin yes\n");
		return 1;
	}
	if(s[start]==s[end])
	{
		printf("\nstart %d  end %d\n",start,end);
	     start++;
		 end--;
	
         isPalindrome(s,start,end);		 	
	}
	else
	{
		printf("\nin no\n");
		return 0;
	}
		

}
