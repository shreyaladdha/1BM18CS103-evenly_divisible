#include<stdio.h>
#include<conio.h>
#include<process.h>
#define size 5

void enqueue(long q[],int *r,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		(*r)++;
		scanf("%ld",&q[*r]);
	}
}


void even_divi(long q[],int *f,int n)
{
	int count,i;
	while(*f<n)
	{

			if(q[*f]%1==0&&q[*f]%2==0&&q[*f]%3==0&&q[*f]%4==0&&q[*f]%5==0&&q[*f]%6==0&&q[*f]%7==0&&q[*f]%8==0&&q[*f]%9==0&&q[*f]%10==0)
			count=10;
			else
			count=0;


		if(count==10)
	       printf("evenly divisible %ld\n",q[*f]);
	       else

		printf("not divisible %d\n",q[*f]);

		(*f)++;
	}

}
void main()
{
	long q[20];
	int r,f,n;
	clrscr();
	r=-1;
	f=0;
	printf("Enter the number of elements in queue\n");
	scanf("%d",&n);
	printf("enter %d whole numbers\n",n);
	enqueue(q,&r,n);
	even_divi(q,&f,n);

	getch();
}