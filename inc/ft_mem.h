#ifndef FT_MEM_H
# define FT_MEM_H

# include <stddef.h>

void			*ft_memset (char *dest, int c, size_t n);
void			*ft_memcpy( char * dest, char * src, size_t num);
int				ft_memcmp( char * s2, char * s1, size_t num);
const void		*ft_memchr(char * str, int n, size_t m);
void 			*ft_memmove(void * dest, void * src, size_t num);
void			*ft_print_memory(void *addr, size_t size);
void            *ft_print_address(void *addr);
void            ft_print_hex_byte(unsigned char addr);
void            *ft_print_hex_line(void *addr, size_t width, size_t group);
void            ft_print_hex_num(unsigned char num);
void            *ft_print_text_line(void *addr, size_t width);

#endif