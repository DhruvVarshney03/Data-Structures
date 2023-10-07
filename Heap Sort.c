#include<stdio.h>
#define SIZE 10
void insheap(int[],int,int);
int delheap(int[],int);
void heapsort(int[],int);
int main()
{
	int a[SIZE],i,n;
	printf("enter how many elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter element%d:",i+1);
		scanf("%d",&a[i]);
	}
	heapsort(a,n);
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	return 0;
}
void insheap(int tree[],int n,int item)
{
	int ptr,par;
	n++;
	ptr=n;
	while(ptr>0)
	{
		par=(ptr-1)/2;
		if(item<=tree[par])
		{
			tree[ptr]=item;
			return;
		}
		tree[ptr]=tree[par];
		ptr=par;
	}
	tree[0]=item;
}
int delheap(int tree[],int n)
{
	int item,ptr,last,left,right;
	item=tree[0];
	last=tree[n];
	ptr=0;
	left=1;
	right=2;
	while(right<=n)
	{
		if(last>=tree[left]&&last>=tree[right])
		{
			tree[ptr]=last;
			return(item);
		}
		if(tree[right]<=tree[left])
		{
			tree[ptr]=tree[left];
			ptr=left;
		}
		else
		{
			tree[ptr]=tree[right];
			ptr=right;	
		}
		left=2*ptr+1;
		right=left+1;
	}
	if(left==n-1&&last<tree[left])
	{
		tree[ptr]=tree[left];
		ptr=left;
	}
	tree[ptr]=last;
	return(item);
}
void heapsort(int a[],int n)
{
	int item,j;
	for(j=0;j<n-1;j++)
		insheap(a,j,a[j+1]);
	while(n>0)
	{
		item=delheap(a,n-1);
		a[n-1]=item;
		n--;
	}	
}