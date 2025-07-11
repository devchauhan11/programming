#include<stdio.h>
 main()


	
	{
		int i,n;
		printf("enter number :");
		scanf("%d",&n);
		for(i=1;i<10;i++)
		{
			if(i==3)
			{
				continue;
			}
			else if(i==5)
			{
				break;
			}
			else 
			{
				printf("%d\n",i);
			}
		}
	}
	

