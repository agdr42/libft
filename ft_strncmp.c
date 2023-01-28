/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:13:32 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/27 11:37:41 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count && str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	if (i == count)
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
/*int	main(void)
{
	double elapsed;
	struct timespec start, finish;
	char str1[] = "hello world";
	char str2[] = "hela mundo";
	size_t count = 4;

	printf("String 1: %s\n", str1);
	printf("String 2: %s\n\n", str2);
	clock_gettime(CLOCK_MONOTONIC, &start);
	int result1 = ft_strncmp(str1, str2, count);
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("Result of ft_strncmp: %d\n", result1);
	printf("Execution time ft_strncmp: %f seconds\n\n", elapsed);

	clock_gettime(CLOCK_MONOTONIC, &start);
	int result2 = strncmp(str1, str2, count);
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("Result of strncmp: %d\n", result2);
	printf("Execution time strncmp: %f seconds\n", elapsed);
	return (0);
}*/