#include<stdio.h>
int main()
{
	int a[10],i,avg;
	int n=10,sum=0,t=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	avg=s/n;
	for(i=0;i<n;i++)
	{
			if (a[i]>avg)	
				t++;
	}
	printf("%d",t);
	return 0;
}

