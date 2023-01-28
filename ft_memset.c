/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  alejgome@student.42madrid.com < alejgo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:37:59 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/19 23:15:51 by  alejgome@s      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <string.h>
#include <time.h>*/
#include "libft.h"

void	*ft_memset(void *dst, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)dst;
	while (n--)
	{
		*p++ = (unsigned char)c;
	}
	return (dst);
}
/*int	main(void)
{
	//char str[50] = "GeeksForGeeks is for programming geeks.";
	char str2[50] = "Este es otro ejemplo para probar";
	printf("\nBefore memset(): %s\n", str2);
	//printf("\nBefore ft_memset(): %s\n", str2);

	// Fill 8 characters starting from str[13] with '.'
	//ft_memset(str + 13, '.', 8 * sizeof(char));
	//printf("Tiempo de ejecucion 
	ft_memset: %f\n", (double)clock() / CLOCKS_PER_SEC);
	
	memset(str2 + 13, '.', 8 * sizeof(char));
	printf("Tiempo de ejecucion memset: %f\n", (double)clock() / CLOCKS_PER_SEC);

	//printf("After ft_memset():  %s\n", str);
	printf("After memset():  %s\n", str2);
	return (0);
}*/