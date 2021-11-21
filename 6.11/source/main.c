#include<stdio.h>
#include<stdlib.h>
void bubblesort(int *p, int len)
{
	int i = 0;
	int j = 0;
	int flag;
	for (i = 0; i < len - 1; i++)
	{
		for (int x = 0; x < 10; x++)
		{
			printf("%d ", p[x]);
		}
		printf("\n");
		flag = 0;
		for (j = 0; j < len - 1 - i; j++)
		{

			if (p[j] > p[j + 1])
			{
				int tmp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = tmp;

				flag = 1;
			}
		}

		if (flag == 0)
		{
			break;
		}
	}
}
int main()
{
	int num[10] = { 9,2,3,1,5,4,8,7,10,6 };
	int i = 0;
	bubblesort(num, 10);
	
	return 0;
}

