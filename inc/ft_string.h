#ifndef FT_STRING_H
# define FT_STRING_H

#include <stddef.h>
#include "ft_array.h"

size_t	ft_strlen(char *);

int		ft_strcmp(char* s1, char* s2);
int		ft_strncmp(char* s1, char* s2, size_t n);

char	*ft_strcpy(char* dest, char* src);
char	*ft_strncpy(char* dest, char* src, size_t n);

char	*ft_strcat(char* dest, char* src);
char	*ft_strncat(char* dest, char* src, size_t n);

char    *ft_join(char **strs, char *sep);
int     ft_word_count(char* str, char* delim);
char    *ft_strdecrease(char *str);
char    *ft_strcapitalize(char *str);

char    *ft_strstr (char * haystack, char * needle);
char    *ft_strchr (char * str, int sym);
char    *ft_strdup(char *str);
char	*ft_random_word(char* alph, range_t len);

#endif
