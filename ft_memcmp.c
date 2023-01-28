/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:40:21 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/27 11:49:36 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	size_t			i;
	unsigned char	c1;
	unsigned char	c2;

	i = 0;
	while (i < n)
	{
		c1 = ((unsigned char *)ptr1)[i];
		c2 = ((unsigned char *)ptr2)[i];
		if (c1 != c2)
			return (c1 - c2);
		i++;
	}
	return (0);
}
/*int	main(void)
{
	double elapsed;
	struct timespec start, finish;
    char str1[] = "hello mundo";
    char str2[] = "hello world";
    size_t n = 7;

    clock_gettime(CLOCK_MONOTONIC, &start);
    int result1 = ft_memcmp(str1, str2, n);
    clock_gettime(CLOCK_MONOTONIC, &finish);
    elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
	/ 1000000000.0;
    printf("Result of ft_memcmp: %d\n", result1);
    printf("Execution time ft_memcmp: %f seconds\n", elapsed);

    clock_gettime(CLOCK_MONOTONIC, &start);
    int result2 = memcmp(str1, str2, n);
    clock_gettime(CLOCK_MONOTONIC, &finish);
    elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
	/ 1000000000.0;
    printf("Result of memcmp: %d\n", result2);
    printf("Execution time memcmp: %f seconds\n", elapsed);
    return (0);
}*/