#include<stdio.h>
main()
{
	int duplicate,i,j,n,k=0,count=0,m;
	int temp[20],a[20],c[20],index[20];
	
	printf("enter how many digits you want enter:  ");
	scanf("%d",&n);
	printf("enter %d elemnts\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
/*printf("elemnts of a is %d\n",n);
for(i=0;i<n;i++)
	{
	printf("a[%d] is %d\n",i,a[i]);
	}*/

	//temp[0]=a[0];
	//printf("temp[0] value is   %d",a[0]);
	
	for(i=0;i<n;i++)
	{
		//printf("a[%d] is now %d\n",i,a[i]);
		duplicate=0;
		for(j=0;j<k;j++)
		{
			
			if(a[i]==temp[j])
			{
				duplicate=1;
				
			}
		}
	if(duplicate==0)
	{
		
		temp[k]=a[i];
		//printf("temp[%d] is now %d\n",k,temp[k]);
		k++;
	}	
	
	}
	//printf("no of elemnts after duplicates elimination::  %d",k);
	//printf("%d %d",temp[1],temp[2]);
	/*for(j=0;j<k;j++)
	{
	printf("%d\t",temp[j]);
	}*/
	for(i=0;i<k;i++)
	{
		count=0;
		for (j=0;j<n;j++)
		{
			if(a[j]==temp[i])
			{
				count++;
			}
		}
		c[i]=count;
		index[i]=count;
	}
	//index[]=c[];
	printf("\n");
	for(j=0;j<k;j++)
	{
	
	printf("%d---------->%d\n",temp[j],c[j]);
	}
	
	m=max(index,k);
	printf("maximum nuber is %d\n",m);
	
	printf("\n");
	for(i=0;i<k;i++)
	{
		if(m==c[i])
		{
			printf("the %d repeated %d times\n",temp[i],c[i]);
		}
	}
	
	
	
	
	/*for(i=0;i<k-1;i++)
	{
		if(c[i>c[i+1]])
		{
			var=c[i+1];
			c[i+1]=c[i];
			c[i]=var;
		}
	}
	printf("maximum nuber is %d",c[k-1]);

	for(j=0;j<k;j++)
	{
		if()
	printf("---------->%d\n",c[j]);
	}*/
	
}
int max(int c[],int k)
{
	int i,var;
	for(i=0;i<k-1;i++)
	{
		if(c[i>c[i+1]])
		{
			var=c[i+1];
			c[i+1]=c[i];
			c[i]=var;
		}
	}
	return c[k-1];
}
