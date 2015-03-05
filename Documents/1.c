#include<stdio.h>
int main()
{
    int a[10],i,n,b[10],c[10],k=0,l=0;
    printf("enter the size of the aray");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	printf("a[%d]:",i);
	scanf("%d",&a[i]);

	
    }
    for(i=0;i<n;i++)
    {
	if(a[i]%2==0)
	{
	    b[k]=a[i];
	    k++;
	  
	    
	}
	else
	{   c[l]=a[i];
	   l++;
	    
	}
	
    }
    for(i=0;i<k;i++)
    {
	printf("%d",b[i]);
	
    }
    printf("\n");
	
    
    for(i=0;i<l;i++)
    {
	printf("%d",c[i]);
    }
    return 0;

    
}