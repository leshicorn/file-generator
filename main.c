#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#include "ft_generators.h"
#include "ft_stdlib.h"
#include "ft_string.h"

#define DEFAULT_LEN 1024
#define DEFAULT_ALPHA "abcdefghijklmnopqrstuvwxyz"
#define DEFAULT_SPEC_ALPH "\"#$@%^&*()_+=-}{|\/\\/><"
#define SYM_ALPHA ",.?!"
#define NUM_ALPHA "0123456789"
#define DEFAULT_FILE_NAME "gen_file" 


int main(int argc, char **argv)
{

	int opt = 0;
	int len = DEFAULT_LEN;
	char *filename = NULL;
	char *alpha = NULL;

    alpha = DEFAULT_ALPHA;
    
	srand(time(NULL));	
    /* 
    srand - в функцию - в конце вернуть начальное значение6
    char* join(char *s1, char *s2)
    d - маленькие
    u - большие
    n - numbers
    p - punctuation
    s - special symbols
	e - allow empty lines
    */
	while ((opt = getopt(argc, argv, "edunspa:f:l:")) != -1)
	{
		switch (opt)
		{
            case 'd':
                alpha = ft_strdecrease(DEFAULT_ALPHA);
                break;
            case 'u':
                alpha = ft_strcapitalize(DEFAULT_ALPHA);
                break;
            case 'n':
                alpha = join(DEFAULT_ALPHA, NUM_ALPHA);
                break;
            case 'p':
                alpha = join(DEFAULT_ALPHA, SYM_ALPHA);
                break;
            case 's':
                alpha = join(DEFAULT_ALPHA, DEFAULT_SPEC_ALPH);
                break;
            case 'e':
                
                break;
			case 'a':
				printf("a - %s\n", optarg);
				alpha = ft_strdup(optarg);
				break;
			case 'f':
				printf("f - %s\n", optarg);
				filename = ft_strdup(optarg);
				break;
			case 'l':
                printf("l - %s\n", optarg);
				len = ft_atoi(optarg);
				break;
			default:
				printf("%c\n", opt);
				break;
		}
	}
	
	if (ft_rand_file(filename, len, alpha) < 0)
		printf("Error generate file\n");

	if (filename)
		free(filename);
	if (alpha)
		free(alpha);
	return 0;
}