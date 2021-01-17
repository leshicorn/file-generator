#ifndef FT_STDLIB_H
# define FT_STDLIB_H

#include <stdlib.h>

#include "ft_array.h"
/*
typedef struct
{
    int quot;
	int rem;
} div_t;*/

int         ft_abs(int n);
int         ft_numlen(int n);
char*       ft_itoa(int n);
div_t       ft_div(int delim, int delit);
int         ft_atoi(char* buf);
void        ft_swap(tab_t *a, tab_t *b);

#endif