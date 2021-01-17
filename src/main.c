#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#include "ft_generators.h"
#include "ft_stdlib.h"
#include "ft_string.h"

#define DEFAULT_LEN 1024
#define DEFAULT_ALPHA "abcdefghijklmnopqrstuvwxyz0123456789"
#define DEFAULT_FILE_NAME "gen_file" 

int main(int argc, char **argv)
{
	int opt = 0;
	int len = DEFAULT_LEN;
	char *filename = NULL;
	char *alpha = NULL;

	srand(time(NULL));	
    /* 
    join(char *s1, char *s2)
    d - маленькие
    u - большие
    n - numbers
    p - punctuation
    s - special symbols
    */
	while ((opt = getopt(argc, argv, "dunspa:f:l:")) != -1)
	{
		switch (opt)
		{
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