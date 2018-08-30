#include<stdio.h>
main()
{
	int iArray[5]={1,3,6,2,4},x,y,z,i;
	for(i=0;i<5;i++)
	{
		printf("%d ",iArray[i]);
	}
	for(x=0;x<5;x++)
	{
		for(y=0;y<5-x;y++)
		{
			if (iArray[y]<iArray[y+1])
			{
				z=iArray[y];
				iArray[y]=iArray[y+1];
				iArray[y+1]=z;
			}
		}
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",iArray[i]);
	}
}
