#include"stdio.h"
int main()
{
	int m ,n,a[100]={0},k=0,j=0;
	printf("����m��n���Կո����");
	scanf("%d %d",&m,&n);
	for(int i=1;i<m;i++)
	{
	for(j=j+1,k=1;k<=n;j++,k++)
	{
		if(a[(j-1)%m+1]==0)
		continue;
		else
		k--;
		
	}
	a[((--j)-1)%m+1]=1;
	}
	int l=1;
	while(a[l]==1)
	{
		l++;
	}
	printf("%d",l);
	
 } 
//Сë
//������