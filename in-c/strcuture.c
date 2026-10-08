
#include<stdio.h>
#include<conio.h>
#define SIZE 30
int a[SIZE];
int n=0;
void insertion();
void deletion();
void insertatfirst();
void insertatlast();
void insertatmiddle();
void deleteatfirst();
void deleteatmiddle();
void deleteatlast();
void update();
void search();
void traverse();
void main()
{
	int ch,f=1;

	while(f)
	{
		printf("\n1.Insertion\n2.Deletion\n3.Update\n4.Search\n5.Traverse\n6.Exit\nEnter the Choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				insertion();
				break;
			case 2:
				deletion();
				break;
			case 3:
				update();
				traverse();
				break;
			case 4:
				search();
				traverse();
				break;
			case 5:
				traverse();
				break;
			case 6:
				f=0;
				break;
			default:
				printf("Invalid Choice!!! Try Again");
				break;
		}
	}
	getch();
}
void insertion()
{
	int ch;
	printf("1. Insert at First\n2.Insert at Last\n3.Insert in Middle\nEnter the Choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			insertatfirst();
			traverse();
			break;
		case 2:
			insertatlast();
			traverse();
			break;
		case 3:
			insertatmiddle();
			traverse();
			break;
		default:
			printf("Invalid Choice!!! Try Again...\n");
	}
}
void deletion()
{
	int ch;
	printf("1. Delete at First\n2.Delete at Last\n3.Delete in Middle\nEnter the Choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			deleteatfirst();
			traverse();
			break;
		case 2:
			deleteatlast();
			traverse();
			break;
		case 3:
			deleteatmiddle();
			traverse();
			break;
		default:
			printf("Invalid Choice!!! Try Again...\n");
	}
}
void insertatfirst()
{
	int ele,i;

	if(n>=(SIZE))
	{
		printf("Insertion Not Possible...\n");
	}
	else
	{
		printf("Enter the Element:");
		scanf("%d",&ele);
		for(i=n-1;i>=0;i--)
		{
			a[i+1]=a[i];
		}
		a[0]=ele;
		n++;
		printf("Element Inserted Successfully");
	}
}
void insertatmiddle()
{
	int ele,i,pos;
	if(n>=(SIZE)&&(pos<n))
	{
		printf("Insertion Not Possible...\n");
	}
	else
	{
		printf("Enter the Element:");
		scanf("%d",&ele);
		printf("Enter the position where element to be inserted:");
		scanf("%d",&pos);
		for(i=n-1;i>=pos;i--)
		{
			a[i+1]=a[i];
		}
		a[pos]=ele;
		n++;
		printf("Element Inserted Successfully");
	}
}
void insertatlast()
{
	int ele;
	if(n>=SIZE)
	{
		printf("Insertion Not Possible...\n");
	}
	else
	{
		printf("Enter the Element:");
		scanf("%d",&ele);
		a[n]=ele;
		n++;
		printf("Element Inserted Successfully");
	}
}
void deleteatfirst()
{
	int i;
	if(n<=0)
	{
		printf("Deletion not Possible");
	}
	else
	{
		for(i=1;i<n;i++)
		{
			a[i-1]=a[i];
		}
		n--;
		printf("Element Deleted Successfully");
	}
}
void deleteatlast()
{
	if(n<=0)
	{
		printf("Deletion not Possible");
	}
	else
	{
		n--;
		printf("Element Deleted Successfully");
	}
}
void deleteatmiddle()
{
	int i,pos;
	if(n<=0)
	{
		printf("Deletion not Possible");
	}
	else
	{
		printf("Enter the position of the element:");
		scanf("%d",&pos);
		for(i=pos;i<n;i++)
		{
			a[i-1]=a[i];
		}
		n--;
		printf("Element Deleted Successfully");
	}
}
void search()
{
	int i,s,t=-1;
	if(n<=0)
	{
		printf("No Elements Exists!!! Try Again");
	}
	else
	{
		printf("Enter the element to Search:");
		scanf("%d",&s);
		for(i=0;i<n;i++)
		{
			if(a[i]==s)
				t=(i+1);
		}
		if(t>-1)
			printf("Element Found in the Position:%d",t);
		else
			printf("Element Not Found:");
	}
}
void update()
{
	int i,s,ele,t=0;
	if(n<=0)
	{
		printf("No Elements Exists!!! Try Again");
	}
	else
	{
		printf("Enter the element to Search:");
		scanf("%d",&s);
		fflush(stdin);
		printf("Enter the new element:");
		scanf("%d",&ele);
		for(i=0;i<n;i++)
		{
			if(a[i]==s)
			{
				a[i]=ele;
				t=1;
			}
		}
		if(t==0)
			printf("Element Not Found:");
	}
}
void traverse()
{
	int i;
	printf("\nCurrent Elements are:");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
};
