#include <stdio.h>

int main() {
	int n,l=0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= l; j++)
		{
			if (i == n-1)
			{
				printf("*");
			}
			else if (j == 0 || j == l)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		l++;
		printf("\n");
		
	}
}