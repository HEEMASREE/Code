#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node* next;
} *rare=NULL,*front=NULL,*nn,*temp;

int create();
int delete2();
int display();
int main()
{
	int ch;
	printf("Queue operations:");
	while(1)
	{
		printf("1.create,2.delete,3.display,4.exit:");
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				create();
				break;
			case 2:
		        delete2();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
		}	
	}
}

int create()
{
	int x;
	nn=(struct node*)malloc(sizeof(struct node));
	printf("Enter data:");
	scanf("%d",&x);
	nn->data=x;
	nn->next=NULL;
	if(nn==NULL)
	{
		front=nn;
		rare=nn;
	}
	else
	{
		rare->next=nn;
		rare=nn;
	}
}


int delete2()
{
	
	if(rare==NULL)
	printf("Queue is empty");
	else
	{
		temp->next=front;
		free(temp);
	}
}

int display()
{
	if ((front == NULL) && (rare == NULL)) 
	{
        printf("\nQueue is Empty\n");
    } 
	else
	 {
        printf("The queue is \n");
        temp = front;
        while (temp) 
		{
            printf("%d", temp->data);
            temp = temp->next;
        }
        printf("NULL\n\n");
    }
}

	



