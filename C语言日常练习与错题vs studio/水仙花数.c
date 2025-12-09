/*水仙花数是指一个n位正整数（n>=3),它的每个位上的数字的n次幂之和等于它本身。*/
#include <stdio.h>

/*int main()
{
    int n;//位数
    if (scanf("%d", &n) != 1) return 0; // 读取位数
    if (n < 3) return 0; // 要求 n>=3

    int first = 1;
    for (int i = 1; i < n; i++)
        first *= 10; // first = 10^(n-1)

    int last = first * 10 - 1; // 最大的 n 位数

    for (int i = first; i <= last; i++)
    {
        int t = i;//i一开始等于100
        int sum = 0;
        while (t > 0)
        {
            int d = t % 10;//d=0
            t /= 10;//t=10
            int p = 1;
            for (int j = 0; j < n; j++)
                p *= d; // p = d^n
            sum += p; // 累加每个位的 n 次幂
        }
        if (sum == i)
            printf("%d\n", i);
    }
    return 0;
}*/