#include<stdio.h>
int main()
{
	int arr[5]={5,4,3,2,1};
	int i=0,j=0,temp;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
			temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] =temp;
			}
		}
	}
	for(i=0;i<5;i++)
	{
	printf("%d\n",arr[i]);}
	printf("huanglei\n");
return 0;
}
