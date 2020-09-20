#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int x,y;
	scanf("%d" ,&x);
	for (int i = 1;i <= x;i++)
	{
		if (x%i==0)
		{
			y = x / i;
			if (i < x)
			{
				printf("%d ,", y);

			}
			else
			{
				printf("%d",y );
			}
		}
	}
	return 0;
}