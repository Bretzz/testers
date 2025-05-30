/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: topiana- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:25:38 by topiana-          #+#    #+#             */
/*   Updated: 2024/12/11 10:43:04 by topiana-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	void	*ptr;

	printf("   PTR TESTS\n");
	printf("================\n");
	printf("----[ULONG_MAX]----\n");
	printf("|=%i\n", printf("orig=|%p", (void *)ULONG_MAX));
	printf("\n");
	printf("|=%i\n", ft_printf("fake=|%p", (void *)ULONG_MAX));
	printf("\n");
	printf("----[LONG_MIN]----\n");
	printf("|=%i\n", printf("orig=|%p", (void *)LONG_MIN));
	printf("\n");
	printf("|=%i\n", ft_printf("fake=|%p", (void *)LONG_MIN));
	printf("\n");
	printf("-------[-1]-------\n");
	printf("|=%i\n", printf("orig=|%p", (void *)(-1)));
	printf("\n");
	printf("|=%i\n", ft_printf("fake=|%p", (void *)(-1)));
	printf("\n");
	printf("-------[ptr]-------\n");
	printf("|=%i\n", printf("orig=|%p", ptr));
	printf("\n");
	printf("|=%i\n", ft_printf("fake=|%p", ptr));
	printf("-------[NULL]-------\n");
	printf("|=%i\n", printf("orig=|%p", NULL));
	printf("\n");
	printf("|=%i\n", ft_printf("fake=|%p", NULL));
	printf("\n\n");

	printf("   EXA TESTS\n");
	printf("================\n");
	printf("|=%i", printf("orig=|%x", 42));
	printf("\n");
	printf("|=%i", ft_printf("fake=|%x", 42));
	printf("\n");
	printf("|=%i", printf("orig=|%x", 0));
	printf("\n");
	printf("|=%i", ft_printf("fake=|%x", 0));
	printf("\n");
	printf("|=%i", printf("orig=|%X", -1));
	printf("\n");
	printf("|=%i", ft_printf("fake=|%X", -1));
	printf("\n\n");

	printf("   UNS TESTS\n");
	printf("================\n");
	printf("|=%i", printf("orig=|%u", -1));
	printf("\n");
	printf("|=%i", ft_printf("fake=|%u", -1));
	printf("\n");
	printf("|=%i", printf("orig=|%u", 2147483647));
	printf("\n");
	printf("|=%i", ft_printf("fake=|%u", 2147483647));
	printf("\n");
	printf("|=%i", printf("orig=|%u", 0));
	printf("\n");
	printf("|=%i", ft_printf("fake=|%u", 0));
	printf("\n\n");

	printf("   INT TESTS\n");
	printf("================\n");
	printf("|=%i", printf("orig=|%i", -1));
	printf("\n");
	printf("|=%i", ft_printf("fake=|%i", -1));
	printf("\n");
	printf("|=%i", printf("orig=|%i", 2147483647));
	printf("\n");
	printf("|=%i", ft_printf("fake=|%i", 2147483647));
	printf("\n");
	printf("|=%i", printf("orig=|%i", (int)2147483648));
	printf("\n");
	printf("|=%i", ft_printf("fake=|%i", (int)2147483648));
	printf("\n");
	printf("|=%i", printf("orig=|%i", (int)-2147483650));
	printf("\n");
	printf("|=%i", ft_printf("fake=|%i", (int)-2147483650));
	printf("\n");
	printf("|=%i", printf("orig=|%i", 0));
	printf("\n");
	printf("|=%i", ft_printf("fake=|%i", 0));
	printf("\n\n");

	printf("   STR TESTS\n");
	printf("================\n");
	printf("|=%i", printf("orig=|%s", "stringaaaaaa\v\0:D"));
	printf("\n");
	printf("|=%i", ft_printf("fake=|%s", "stringaaaaaa\v\0:D"));
	printf("\n");
	printf("|=%i", printf("orig=|%s", (char *)0));
	printf("\n");
	printf("|=%i", ft_printf("fake=|%s", (char *)0));
	printf("\n");
	printf("|=%i", printf("orig=|%s", ""));
	printf("\n");
	printf("|=%i", ft_printf("fake=|%s", ""));
	printf("\n\n");

	printf("   PUT TEST\n");
	printf("================\n");
	printf("|=%i", printf("orig=|robetto qua '%%'"));
	printf("\n");
	printf("|=%i", ft_printf("fake=|robetto qua '%%'"));
	printf("\n\n");

	printf("   MULTI TESTS\n");
	printf("================\n");
	printf("|=%i", printf("orig=|%% stringa pazza :D\v%s\r\t\t\t%s%p%X", "ooooooooo....", "eeeeehhh!!!", ptr, -1));
	printf("\n");
	printf("|=%i", ft_printf("fake=|%% stringa pazza :D\v%s\r\t\t\t%s%p%X", "ooooooooo....", "eeeeehhh!!!", ptr, -1));
	printf("\n");
	/*printf("|=%i", printf(NULL));
	printf("\n");
	printf("|=%i", ft_printf(NULL));
	printf("\n\n");*/

	printf("   WIERD TESTS\n");
	printf("================\n");
	printf("----[NULL]----\n");
	printf("|=%i", printf(NULL));
	printf("\n");
	printf("|=%i", ft_printf(NULL));
	printf("\n");
	printf("|=%i", printf("orig=|giovanni rana%"));
	printf("\n");
	printf("|=%i", ft_printf("fake=|giovanni rana%", 0));
	printf("\n");
	printf("|=%i", printf("orig=|%s", "9128736120847615%%%%1298371238"));
	printf("\n");
	printf("|=%i", ft_printf("fake=|%s", "9128736120847615%%%%1298371238"));
	printf("\n");
	/* printf("|=%i", printf("orig=|%       i", 0));
	printf("\n");
	printf("|=%i", ft_printf("fake=|%       i", 0));
	printf("\n");
	printf("|=%i", printf("orig=|% w i", 0));
	printf("\n");
	printf("|=%i", ft_printf("fake=|% w      i", 0));
	printf("\n\n"); */

	char	*str;
	char	*orig = ft_strdup("orig=|\0         ");
	char	*fake = ft_strdup("fake=|\0         ");
	int		orig_out;
	int		fake_out;
	char	c;
	int		i;

	str = (char *)malloc(10 * sizeof(char));
	if(!str)
		return (1);
	ft_bzero(str, 10);
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '%';
	i = 4;
	c = ' ';
	while (c <= '~')
	{
		
		//printf("");
		if (c == 'n')
		{
			printf("-----[%c]-----\n", c);
			printf("skipping '%%n'\nfor some\nweird reason...\n");
			c++;

		}
		str[i] = c;
		printf("-----[%c]-----\n", c);
		ft_strlcat(orig, str, 12);
		printf("|=%i", printf(orig));
		printf("\n");
		ft_strlcat(fake, str, 12);
		printf("|=%i", ft_printf(fake));
		printf("\n");
		ft_bzero(orig + 6, 6);
		ft_bzero(fake + 6, 6);
		c++;
	}
	free(orig); free(fake); free(str);

	/* ft_printf("abc% ms\n");
	printf("abc %  ms\n");
	free(NULL); */
	//printf("LEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\nLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\vLEGGI WHATSAPP\v\n");
	return (0);
}
