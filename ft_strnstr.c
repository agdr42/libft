/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:32:05 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/27 11:55:34 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *src, const char *find, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	find_len;

	find_len = ft_strlen(find);
	i = 0;
	if (find[0] == '\0')
		return ((char *)src);
	while (src[i] != '\0' && i < len)
	{
		j = 0;
		while (src[i + j] == find[j] && i + j < len)
		{
			if (j == find_len - 1)
				return ((char *)&src[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*int	main(void)
{
	double elapsed;
	struct timespec start, finish;
	char str1[] = "este hello world es un ejemplo";
	char str2[] = "hello world";
	char str3[] = "este hola mundo es un ejemplo";
	char str4[] = "hola mundo";
	size_t n = 20;

	clock_gettime(CLOCK_MONOTONIC, &start);
	char *result1 = ft_strnstr(str1, str2, n);
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("ft_strnstr: %s\n", result1);
	printf("Time elapsed: %f seconds\n\n", elapsed);

	clock_gettime(CLOCK_MONOTONIC, &start);
	char *result2 = strnstr(str3, str4, n);
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("strnstr: %s", result2);
	printf("Time elapsed: %f seconds", elapsed);
	return (0);
}*/