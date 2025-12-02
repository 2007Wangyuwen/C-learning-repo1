//给你一个非负整数n，请你返回它变成0所需要的步数。如果当前数字是偶数，你需要把它除以2；如果是奇数，你需要把它减去1。
#include<stdio.h>
int Steps(long long num) 
{
	int steps = 0;
	while (num > 0) 
	{
		if (num % 2 == 0) 
		{
			num /= 2;
		} 
		else 
		{
			num -= 1;
		}
		steps++;
	}
	return steps;
}

int main()
{
	long long n;
	scanf("%lld", &n);
	printf("%lld", Steps(n));
	return 0;
}