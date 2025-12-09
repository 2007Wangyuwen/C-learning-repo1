#include<stdio.h>
#include<string.h>
int strReverseIndex(char s[], char t[])
{
    int len_s = strlen(s);
    int len_t = strlen(t);
    if (len_t == 0 || len_t > len_s)
    {
        return -1;
    }
    for (int i = len_s - len_t; i >= 0; i--)
    {
        match = 1;
        for (int j = 0; j < len_t; j++)
        {
            if (s[i + j] != t[j])
            {
                match = 0;
                break;
            }
        }
        if (match)
        {
            return i;
        }
    }
    return -1;
}
#define N 80
int main()
{
    char s[N + 1], t[N + 1];
    scanf("%s%s", s, t);
    printf("%d\n", strReverseIndex(s, t));
    return 0;
}