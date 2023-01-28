/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:13:58 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/27 11:44:59 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	p = s;
	while (n--)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
/*int main(void)
{
    double elapsed;
	struct timespec start, finish;
	char str[] = "42Madrid";
	char str2[] = "42Madrid";
	char *p;
	char *p2;

	printf("String original: %s\n", str);
	clock_gettime(CLOCK_MONOTONIC, &start);
	p = ft_memchr(str, 'M', 8);
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("p with ft_memchr = %s\n", p);
	printf("Tiempo de ejecucion: %f seconds\n\n", elapsed);
	
	printf("String original: %s\n", str2);
	clock_gettime(CLOCK_MONOTONIC, &start);
	p2 = memchr(str2, 'M', 8);
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("p2 with memchr = %s\n", p2);
	printf("Tiempo de ejecucion: %f seconds\n\n", elapsed);
	return (0);
}*/