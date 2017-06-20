#include<stdio.h>
void printArray(int*);
main()
{
	int arr[5]={10,11,12,13,14};
    int *arr_ptr=arr; //OR &arr[0];
	
	printArray(arr);
	printArray(arr_ptr);  //Both function give the same output.arr_ptr also hold the address. 
	
	printf("\n\n%d %d %d\n\n",arr[3],*(arr+3),*(arr_ptr+3)); //All  3 have same value.
	
	printf("%d %d %d\n\n",&arr[3],arr+3,arr_ptr+3); //All 3 have same address.
}

void printArray(int *a)
{
	 int i;
	 for(i=0;i<5;i++)
	 {
	 	printf(" %d ",a[i]);
	 }
	 
	
}
