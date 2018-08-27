#include "libft.h"
#include <stdio.h>
#include <time.h>
#include <sys/mman.h>

int main(void)
{
	char dst[16];
	char dst_orig[16];
	// char	dst1[30];
	// char	dst2[30];
	// char *src = "Hello world!";
	char	*src = "œð˛ʼˇ,´˛ˀ-ºª•¶ªˆ§´";
	char	dst1[80];
	char	dst2[80];
	size_t	max = 16;
	int i;
	clock_t start_t, end_t, total_t;

	printf("====== ft__strcpy ======\n");
	ft_bzero(dst, 16);
	ft_bzero(dst_orig, 16);
	// i = 10000;
	// size_t max = 12;

	// memset(dst1, 'B', sizeof(dst1));
	// memset(dst2, 'B', sizeof(dst2));

	// strncpy(dst1, src, max);
	// ft_strncpy(dst2, src, max);

	// printf("dst1: %s, strlen: %d\n", dst1, strlen(dst1));
	// printf("dst2: %s, strlen: %d\n", dst2, strlen(dst2));
	memset(dst, 's', 13);
	if (dst != ft_strncpy(dst, "lorem ipsum", 0))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dst, 15);
	memset(dst_orig, 's', 13);
	if (dst_orig != strncpy(dst_orig, "lorem ipsum", 0))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dst_orig, 15);
	// start_t = clock();
	// while (--i > 0)
	// 	ft_strncpy(dst, src, 0);
	// end_t = clock();
	// total_t = (double)(end_t - start_t);
	// printf("my: %s - %d\n", dst, strlen(dst));
	// printf("time: %lu\n", total_t);

	// i = 10000;
	// start_t = clock();
	// while (--i > 0)
	// 	strncpy(dst_orig, src, 0);
	// end_t = clock();
	// total_t = (double)(end_t - start_t);
	// printf("orig: %s - %d\n", dst_orig, strlen(dst_orig));
	// printf("time: %lu\n\n\n", total_t);

	// printf("====== ft__strlen ======\n");
	// char buffer[10000];
	// ft_memset(buffer, '1', 10000);

	// // mprotect(&buffer[5000], 5000, PROT_NONE);
	// start_t = clock();
	// int c = ft_strlen(buffer);
	// end_t = clock();
	// total_t = (double)(end_t - start_t);
	// printf("my: %d\n", c);
	// printf("time: %lu\n", total_t);

	// start_t = clock();
	// int n = strlen(buffer);
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