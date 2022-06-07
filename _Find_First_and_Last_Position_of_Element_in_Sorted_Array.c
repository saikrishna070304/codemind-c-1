#include<stdio.h>
void bubble_sort(int*a,int n)
{
	int temp,k,i,j,sc=0;
	k=n;
	while(k!=0)
	{
		//printf("%d ",k);
	sc=0;
		for(i=0;i<n-1;i++)
		{
		
			for(j=i+1;j<n;j++)
			{
				if(a[i]>a[j])
				{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				sc++;	
				}
			}
			//printf("%d
",sc);
	    }
	    //printf("hai ");
		if(sc==0)
		{
			break;
		}
		k=k-1;
			
   }
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int k,f=0,m;
	scanf("%d",&k);
	bubble_sort(a,n);
	for(i=0;i<n;i++)
	{
	   if(a[i]==k)
	   {
	   m=i;
	   printf("%d ",i);
	   f++;
	   }
	}
	if(f==1)
	{
	    printf("%d",m);
	}
	if (f==0)
	{
	    printf("-1 -1");
	}
	return 0;
}