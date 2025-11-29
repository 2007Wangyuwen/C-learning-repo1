
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
long long factorial(int num)//定义阶乘函数
{
	long long result = 1;//存储阶乘结果
	for (int i = 1; i <= num; i++)//从1到num循环
	{
		result *= i;
	}
	return result;//得到阶乘结果
}

int main()
{
	int n;
	scanf("%d", &n);
	for (int x = 1; x < n; x++)//枚举所有小于n的整数x；
	{
		long long x_fact = factorial(x);//计算x!
		long long product = 1;//初始化变量，product用来存储x*(x+1)*...*n
		for (int i = x; i <= n; i++)//循环从x到n
		{
			product *= i;
		}
		if (x_fact == product)
		{
			printf("%d\n", x);
			return 0;
		}
	}
	printf("没有找到这样的中枢整数x\n");
	return 0;
}