#include<stdio.h>
#include<stdlib.h>
main()
{
   //Initially malloc function return void pointer. we have to cast it in our format.
   
   int arraySize=5;
   int *arr_ptr=(int*)malloc(5*sizeof(int));
   
   printf("Enter the values\n");
   for(int i=0;i<8;i++)
   {
   	 scanf("%d",arr_ptr+i);
   	 //printf("you enterd %d\n",*(arr_ptr+i));
   }
   
   for(int i=0;i<8;i++)
   {
   	 //scanf("%d",arr_ptr+i);
   	 printf(" enterd %d\n",*(arr_ptr+i));
   }
   
   free(arr_ptr);
   
   printf("%d",*(arr_ptr+6));
}
