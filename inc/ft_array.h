#ifndef FT_ARRAY_H
# define FT_ARRAY_H

#include <stddef.h>

typedef int tab_t;

typedef struct
{
    int from;
    int to;
    int step;
} range_t;

void        ft_rev_a (tab_t* mas, size_t size);
void        ft_fill_a(tab_t* mas, size_t size, range_t r);
void        ft_fill_m(tab_t** mas, size_t n, size_t m,  range_t r);
tab_t       ft_max_a (tab_t* mas, size_t size);
tab_t       ft_max_m (tab_t** mas, size_t n, size_t m);
tab_t       ft_min_a (tab_t* mas, size_t size);
tab_t       ft_min_m (tab_t** mas, size_t n, size_t m);
tab_t*      ft_mka(size_t n);
tab_t**     ft_mkm(size_t m, size_t n);
void        ft_rev_a (tab_t* mas, size_t size);

#endif

// string
// сортировка бубл, генерация случайной строки, массивы