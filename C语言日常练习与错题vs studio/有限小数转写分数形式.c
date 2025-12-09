/*输入一个有限小数，将其转换成最简分数形式输出，
有限小数的小数部分不超过8位。*/

#include<stdio.h>
#include<string.h>

long long GCD(long long a, long long b)//找最大公约数，方便后续约分成最简分数
{
	while (b != 0)
	{
		long long t = b;
		b = a % b;
		a = t;
	}
	return a;
}

int main()
{
	char s[20];
	scanf("%s", s);
	char *dot = strchr(s, '.');
	char* num_str = dot + 1;
	int len = strlen(num_str);
	long long son = 0;
	for (int i = 0; i < len; i++)
	{
		son = son * 10 + (num_str[i] - '0');
	}
	long long mom = 1;
	for (int i = 0; i < len; i++)
	{
		mom *= 10;
	}
	long long g = GCD(son, mom);
	son /= g;
	mom /= g;
	printf("%lld/%lld\n", son, mom);
	return 0;
}
