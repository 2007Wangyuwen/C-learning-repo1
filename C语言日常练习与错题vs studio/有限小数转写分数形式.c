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

/*int main()
{
	char s[20];//存输入的小字符串
	scanf("%s", s);
	char* dot = strchr(s, '.');
	//用指针找到字符串中'.'的位置；
	//strchr函数的作用：strchr(s,'字符’)
	//在字符串s里找到指定字符，找到就返回这个字符的地址，没找到就返回NULL
	char* num_str = dot + 1;
	//dot是'.'的地址，
	//地址 + 1指向'.'后面的第一个字符。即截取小数点后的部分
	int len = strlen(num_str);//算小数点后部分的长度
	long long son = 0;//初始化分子的值为0；
	for (int i = 0; i < len; i++)
	{
		son = son * 10 + (num_str[i] - '0');//每读一个字符，就把之前的数*10，再加上新数字
		//把字符转成数字，累积成整数。
		//比如num_str[i]是'5'，它的ASCII码是53；'0'的ASCII码是48，
		//53-48=5，则字符'5'就转换成了数字5。
	}
	long long mom = 1;//初始化分母的值为1
	for (int i = 0; i < len; i++)
	{
		mom *= 10;//分母是10的len次方，1位小数是10，两位小数是100
	}
	long long g = GCD(son, mom);
	son /= g;
	mom /= g;
	printf("%lld/%lld\n", son, mom);
	return 0;
}*/
