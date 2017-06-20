#include<stdio.h>
main()
{
	
	int n=5;
	int *pointer_to_n=&n;
	printf("value of n is %d\n",*pointer_to_n);
	
    /*	*pointer_to_n++; //It first add 1 then apply for pointer.so value will not be incremented here.
	     printf("value of ptn is %d",*pointer_to_n);
	*/
	
	*pointer_to_n=*pointer_to_n+1;//Here it increment in value not an address.
	 printf("value of ptn is %d and n is %d",*pointer_to_n,n);
	
}
