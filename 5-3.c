#include<stdio.h>
int main()
{
	int a[10],i,j,e;
	int n=10,s=0,t=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		s=s+a[i];
	}
	e=s/10;
	for(i=0;i<n;i++)
	{
			if (a[i]>e)	
				t++;
	}
	printf("%d",t);
	return 0;
}
