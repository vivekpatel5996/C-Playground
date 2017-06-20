
#include<stdio.h>
#include<math.h>
#include<time.h>
main()
{
	int num;
	int i;
	
	printf("Enter number to check for prime\n");
	scanf("%d",&num);
	i=2;

   clock_t CPU_time_1 = clock();
    printf("CPU start time is : %d \n", CPU_time_1);
   while(i<num)
	{
	   if(num%i==0)
	   {
	        printf("number is not prime\n");
			break;	
	   }	
	   i++;
	}
     clock_t CPU_time_2 = clock();
    printf("CPU end time is : %d", CPU_time_2);
	
	i=2;
	while(i<sqrt(num))
	{
	       if(num%i==0)
	   {
	        printf("number is not prime\n");
			break;	
	   }	
	   i++;
	}
	
	  clock_t CPU_time_3 = clock();
    printf("CPU end time is : %d", CPU_time_3);
}

