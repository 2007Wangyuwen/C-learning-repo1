//给定一个正整数，计算其所有正整数因子之和。
#include<stdio.h>
#include <math.h>

long long Factors_sum(long long num)
{
    long long sum = 0;
    long long r = (long long)sqrt((double)num);//转换为long long类型避免浮点误差
    for (long long i = 1; i <= r; i++)//循环范围为1~sqrt（num），时间复杂度为O(sqrt（n））
    {
        if (num % i == 0)
        {
            long long j = num / i;//计算i对应的另一个因子j
            sum += i;
            if (j != i) sum += j;//避免重复累加，把另一个因子也加到sum中
        }
    }
    return sum;
}

/*int main()
{
	long long n;
	scanf("%lld", &n);
	printf("%lld", Factors_sum(n));
	return 0;
}*/





/*与原来代码进行对比
#include<stdio.h>

long long Factors_sum(long long num)
{
	long long sum = 0;
	for (int i = 1; i <= num; i++)这里要改成long long i,否则当n远远大于i时，i会溢出
	{
		if (num % i == 0)
		{
			sum += i;
		}
	}
	return sum;
}

int main()
{
	long long n;
	scanf("%lld", &n);
	printf("%lld", Factors_sum(n));
	return 0;
}*/
