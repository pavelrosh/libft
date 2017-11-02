#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *new_dst = (unsigned char *)dest;
	unsigned char *new_src = (unsigned char *)src;
	unsigned char tmp[n];
	int tmp_n = n;
	int i = 0;

	while(n > 0)
	{
		tmp[i] = *new_src;
		i++;
		new_src++;
		n--;
	}
	i = 0;
	while(tmp_n > 0)
	{
		*new_dst = tmp[i];
		new_dst++;
		i++;
		tmp_n--;
	}
	return (dest);
}


int	main()
{
	unsigned char srcs[15] = "1234567890";
//	ft_memmove(&srcs[3],&srcs[4],3);
//	memmove(&srcs[3],&srcs[4],3);
//	printf("memmove :%s\n",memmove(&srcs[3],&srcs[4],3));
//	printf("%s\n",srcs);
	printf("ft_memove :%s\n",ft_memmove(&srcs[3],&srcs[4],3));
	printf("%s\n",srcs);
	return (0);
}
