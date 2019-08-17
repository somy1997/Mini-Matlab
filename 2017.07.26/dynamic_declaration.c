#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int f[n];
	for(int i = 0; i<n; i++)
	{
		f[i]=i;
		printf("%d\t",f[i]);
	}
}
