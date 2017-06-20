//Iterative way to check string is palindrome or not.
#include<stdio.h>
#include<string.h>
#include<math.h>
void isPalindrome(char *s);
main()
{
	char str[100];
	printf("enter a string\n");
	scanf("%s",str);
	isPalindrome(str);
}


void isPalindrome(char *s)
{
	int i,end,flag=0;
	int length=strlen(s);
	end=length-1;
    for(i=0;i<=floor((length-1)/2);i++)
    {
    	if(s[end]==s[i])
    	{
    		end--;
    		flag=0;
    		continue;
		}
		else
		{
			flag=1;
			printf("String is not palindrome");
			break;
		}
	}
	
	if(flag==0)
	{
		printf("\nstring is palindrome");
	}
    
}
