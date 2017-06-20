#include<stdio.h>
void insert(int *a,int,int);
main()
{
   int i,j;
   int array[7]={25,9,21,4,15,2,7};
  
  for(i=0;i<7;i++)
  {
   insert(array,i,array[i+1]);
   
  }
   
   printf("Sorted array\n");
    for(i=0;i<7;i++)
   {
   	printf(" %d ",array[i]);
   }
   
   
}

void insert(int *a,int rightindex,int value)
{
	int k;
	for(k=rightindex;k>=-1 && a[k]>value;k--)
	{
		a[k+1]=a[k];
	}
	a[k+1]=value;
	int j;
	 for(j=0;j<7;j++)
   {
   	printf(" %d ",a[j]);
   }
   printf("\n");
}
