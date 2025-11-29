//二进制找相同位数
#include<stdio.h>
int samebit(int a, int b)
{
	int x = a ^ b;
	int same = 0;
	int bit_num = 32;
	while (bit_num--)
	{
		if ((x & 1) == 0)
		{
			same++;
		}
		x >>= 1;
	}
	return same;
}

int main()
{
	int a, b;
	if (scanf("%d %d", &a, &b) != 2)
	{
		printf("输入错误，请输入两个整数。\n");
		return 1;
	}
	printf("二进制相同的位数:%d\n", samebit(a, b));
	return 0;
}