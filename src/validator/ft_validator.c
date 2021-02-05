#include <stdio.h>

int ft_validator(char *num)
{
    int len = 0;
    int sum_odd = 0;
    int sum_odd1 = 0;
	int sum_even = 0;
    int sum_even1 = 0;
	int checker = 0;

// 1234 4567 7890 1234

	while (*num)
	{
		++len;
		checker = (*num - '0') * 2;
		printf("%c - %d - %d\n", *num, len, checker);
		if (len % 2)
        {
			sum_odd += (checker > 9) ? checker - 9 : checker;
            sum_even1 += checker / 2;
        }
        else
		{
			sum_even += (checker > 9) ? checker - 9 : checker;
			sum_odd1 += checker / 2;
		}
		++num;
	}
	printf("%d %d\n", sum_odd + sum_even1, sum_even + sum_odd1);
    return (((len % 2) ?
			sum_odd + sum_even1 :
			sum_even + sum_odd1) % 10) == 0;
}