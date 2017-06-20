#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* next;
};
node *create(int data,node *next);
node *prepend(int data,node *head);
node *append(int data,node *head);
node *traverse(node *head);
node *insert_after(int data_to_insert,node *head,int prev_data);
node *insert_before(int data_to_insert,node *head,int next_data);
node *remove_front(node *head);
node *remove_end(node *head);
node *remove_after(node *head,int prev_data);
node *remove_before(node *head,int next_data);
main()
{
	node *head,*temp;
	head=prepend(5,head);
	head=append(10,head);
	head=append(15,head);
	head=append(20,head);
	head=append(25,head);
	head=append(30,head);
	head=append(35,head);
	
	head=traverse(head);
	
	temp=insert_after(17,head,15);
	head=traverse(head);
	
	temp=insert_before(23,head,25);
	head=traverse(head);
	
	//If node is not in list.
	temp=insert_after(17,head,16);
	if(temp==NULL)
	   printf("\nnode is not found\n");
	
	//If node is not in list.
	temp=insert_before(23,head,19);
	if(temp==NULL)
	   printf("\nnode is not found\n");   
	
	//remove front node.
	head=remove_front(head);
	head=traverse(head);
	
	//remove end node.
	head=remove_end(head);
	head=traverse(head);
	
	//remove after some particukar node.
	temp=remove_after(head,20);
    head=traverse(head);
	
	//remove before particular node.
	temp=remove_before(head,20);
	head=traverse(head);
}

node *create(int data,node *next)
{
	node *new_node=(node*)malloc(sizeof(node));
	if(new_node==NULL)
	{
		printf("Sorry! memory is not available");
		exit(0);
	}
	new_node->data=data;
	new_node->next=next;
	
	return new_node;
	
}

//Add the node at beganing.
node *prepend(int data,node *head)
{
	node *new_node=create(data,NULL);
	head=new_node;
	
	return head;
}

//Add the next node
node *append(int data,node *head)
{
	
	
	//traverse to last node.
	node *temp=head;
	while(temp->next!=NULL)
	{		
	    temp=temp->next;
	
	}

	//append the new node at the end.
	node *new_node=create(data,NULL);
	temp->next=new_node;
	return head;
}

//Traverse all the node
node *traverse(node *head)
{
	int total_node=0;
	node *temp;
    temp=head;
	while(temp->next!=NULL)
	{
		total_node++;
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
	printf("\nTotal nodes are:%d\n",total_node+1);
	return head;
}

//Insert after particular node
node *insert_after(int data,node *head,int prev_data)
{
	node *temp,*next_node;
	temp=head;
	while(temp!=NULL)
	{
		if(temp->data==prev_data)
		{
			break;
		}
		temp=temp->next;
	}
	if(temp!=NULL)
	{
	
		next_node=temp->next;//next node of previous node.
    	node *new_node=create(data,next_node);
    	temp->next=new_node;
    	return head;
 	}
 	else
 	{
 	    return NULL;	
	}
}

node *insert_before(int data,node *head,int next_data)
{
	node *temp,*prev;
	temp=head;
	while(temp!=NULL)
	{
		
		
		if(temp->data==next_data)
		{
			break;
		}
		prev=temp;
		temp=temp->next;
		
	}
	
	if(temp!=NULL)
	{
     node *new_node=create(data,temp);
	 prev->next=new_node;
	 new_node->next=temp;
	 return head;
    }
    else
    {
    	return NULL;
	}
		
}

node *remove_front(node *head)
{
   if(head==NULL)
	  return NULL;
	
	node *front;
	front=head;
	head=head->next;
	
	free(front);
    	
	return head;
}

node *remove_end(node *head)
{
	node *temp=head;
	node *prev;
	while(temp->next!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
	free(temp);
	prev->next=NULL;
	return head;
}

node *remove_after(node *head,int prev_data)
{
	
	node *temp=head;
	node *next_node;//node after we want delete.
	node *remove;
	while(temp!=NULL)
	{
		if(temp->data==prev_data)
		{
			break;
		}
		temp=temp->next;
	}
	if(temp!=NULL)
	{
	
		next_node=temp->next->next;
		remove=temp->next;
		free(remove);
		temp->next=next_node;
		return head;
    }
    else
    {
    	return NULL;
	}
}


node *remove_before(node *head,int next_data)
{
	node *temp=head;
	node *prev;
	node *remove,*next_node;
	while(temp!=NULL)
	{
		if(temp->next->data==next_data)
		{
 			break;
		}
		prev=temp;
		temp=temp->next;
    }
    
    if(temp!=NULL)
    {
	
		remove=temp;
		next_node=temp->next;
		free(remove);
		prev->next=next_node;
		return head;
	}
	else
	{
		return NULL;
	}
}
