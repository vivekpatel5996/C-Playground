#include<stdio.h>
int minindex(int *a,int,int);
void swap(int *a,int,int);

main()
{
     	int i,temp;
     	int array[7]={9,25,21,4,15,29,7};
     	int startindex,endindex;
     	
     	printf("\narray before sorted\n");
	    
	    for(i=0;i<(sizeof(array)/sizeof(int));i++)
	    {
	    	printf(" %d ",array[i]);
		}
     	
     	endindex=7;
       	
		for(i=0;i<(sizeof(array)/sizeof(int));i++)
     	{
	       temp=minindex(array,i,endindex);
	       //printf("\n%d %d\n",temp,i);
	       swap(array,i,temp);
	    }
	    
	    printf("\narray after sorted\n");
	    
	    for(i=0;i<(sizeof(array)/sizeof(int));i++)
	    {
	    	printf(" %d ",array[i]);
		}
}


int minindex(int *a,int s_ind,int e_ind)
{
	int min_ind=s_ind,min_value=a[s_ind];
	int k;
	//printf("\n%d init min\n",min_value);
	for(k=min_ind+1;k<e_ind;k++)
	{
		
		//For ascending <  and descending it's just >.
		if(a[k]<min_value)
		{
			min_ind=k;
			min_value=a[k];
		}
		
	}
	//printf("\n%d final min\n",min_value);
	return min_ind;
}

void swap(int *a,int b1,int b2)
{
	int t;
	t=a[b1];
	a[b1]=a[b2];
	a[b2]=t;
}
