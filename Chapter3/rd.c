#include<stdio.h>
main()
{
	int duplicate,i,j,n,k=0;
	int temp[n],a[n];
	
	printf("enter how many digits you want enter:  ");
	scanf("%d",&n);
	printf("enter %d elemnts\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
/*printf("reading of elements completed\n");
for(i=0;i<n;i++)
	{
	printf("a[%d] is %d\n",i,a[i]);
	}*/

	//temp[0]=a[0];
	//printf("temp[0] value is   %d",a[0]);
	//printf("n value is %d=",n);
	for(i=0;i<n;i++)
	{
		//printf("a[%d] is now %d\n",i,a[i]);
		duplicate=1;
		for(j=0;j<k;j++)
		{
			
			if(a[i]==temp[j])
			{
				duplicate=0;
				printf("now i will fail bcoz %d is alrady there in temp\n",a[i]);
			}
		}
	if(duplicate==1)
	{
		
		temp[k]=a[i];
		printf("temp[%d] is now %d\n",k,temp[k]);
		k++;
	}	
	
	}
	//printf("no of elemnts after duplicates elimination::  %d",k);
	//printf("%d %d",temp[1],temp[2]);
	for(j=0;j<k;j++)
	{
	printf("%d\n",temp[j]);
	}
}
