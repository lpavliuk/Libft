#include "libft.h"
#include <stdio.h>
#include <time.h>

int main(void)
{
	char dst[50];
	char dst_orig[50];
	char *src = "Hello world!";
	int i;
	clock_t start_t, end_t, total_t;

	printf("====== ft__strcpy ======\n");
	ft_bzero(dst, 50);
	ft_bzero(dst_orig, 50);
	i = 10000;

	start_t = clock();
	while (--i > 0)
		ft_strncpy(dst, src, 10);
	end_t = clock();
	total_t = (double)(end_t - start_t);
	printf("my: %s\n", dst);
	printf("time: %lu\n", total_t);

	i = 10000;
	start_t = clock();
	while (--i > 0)
		strncpy(dst_orig, src, 10);
	end_t = clock();
	total_t = (double)(end_t - start_t);
	printf("orig: %s\n", dst_orig);
	printf("time: %lu\n\n\n", total_t);

	// printf("====== ft__strlen ======\n");
	// char buffer[10000];
	// ft_bzero(buffer, 10000);
	// ft_memset(buffer, '1', 10000);

	// start_t = clock();
	// int c = ft_strlen(src);
	// end_t = clock();
	// total_t = (double)(end_t - start_t);
	// printf("my: %d\n", c);
	// printf("time: %lu\n", total_t);

	// start_t = clock();
	// int n = strlen(src);
	// end_t = clock();
	// total_t = (double)(end_t - start_t);
	// printf("orig: %d\n", n);
	// printf("time: %lu\n\n\n", total_t);


	// unsigned long int himagic = 0x80808080L;
 //  	unsigned long int lomagic = 0x01010101L;
 //  	printf("himagic: %lu\n", himagic);
 //  	printf("lomagic: %lu\n", lomagic);
 //  	unsigned long int *ptr;
 //  	ptr = (unsigned long int *)src;

 //  	unsigned long int *begin;
 //  	unsigned long int coop;
 //  	const char *str;
 //  	begin = ptr;
 //  	// while (*ptr)
 //  	// {
 //  	// 	printf("ptr: %lu ", *ptr);
 //  	// 	ptr++;
 //  	// }
 //  	// printf("\n--------------------------------------\n");
 //  	int k;
 //  	k = 0;
 //  	himagic = ((himagic << 16) << 16) | himagic;
 //    lomagic = ((lomagic << 16) << 16) | lomagic;
 //    printf("himagic: %lu\n", himagic);
 //  	printf("lomagic: %lu\n", lomagic);
 //  	while (1)
 //  	{
 //  		printf("k: %d\n", k);
 //  		coop = *begin++;
 //  		printf("begin: %lu\n", coop);
 //  		printf("~begin: %lu - (", ~coop);
 //  		printf("1&: %lu, ", (coop - lomagic) & ~coop);
 //  		printf("2&: %lu)\n", ((coop - lomagic) & ~coop & himagic));
 //  		if (((coop - lomagic) & ~coop & himagic) != 0)
 //  		{
 //  			printf("OK!\n");
	//   		str = (const char *)(begin - 1);
	//   		ft_printf("%u\n", *(begin - 1));
	//   		if (str[0] == 0)
	//   		{
	//   			printf("%ld\n", str - src);
	//   			break ;
	//   		}
	//   		if (str[1] == 0)
	//   		{
	//   			printf("%ld\n", str - src + 1);
	//   			break ;
	//   		}
	//   		if (str[2] == 0)
	//   		{
	//   			printf("%ld\n", str - src + 2);
	//   			break ;
	//   		}
	//   		if (str[3] == 0)
	//   		{
	//   			printf("%ld\n", str - src + 3);
	//   			break ;
	//   		}
	//   		if (str[4] == 0)
	//   		{
	//   			printf("%ld\n", str - src + 4);
	//   			break ;
	//   		}
	//   		if (str[5] == 0)
	//   		{
	//   			printf("%ld\n", str - src + 5);
	//   			break ;
	//   		}
	//   		if (str[6] == 0)
	//   		{
	//   			printf("%ld\n", str - src + 6);
	//   			break ;
	//   		}
	//   		if (str[7] == 0)
	//   		{
	//   			printf("%ld\n", str - src + 7);
	//   			break ;
	//   		}
 //  		}
 //  		k++;
 //  	}
 //  	printf("\n=======================================\n");
	return (0);
}