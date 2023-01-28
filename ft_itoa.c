/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:10:33 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/22 13:45:05 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_itoa
{
	char	*result;
	int		len;
	int		tmp;
}			t_itoa;

int	ft_itoa_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	len = ft_itoa_len(n);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
	{
		return (NULL);
	}
	result[len] = '\0';
	if (n == 0)
		result[0] = '0';
	else if (n < 0)
		result[0] = '-';
	while (n)
	{
		if (n > 0)
			result[--len] = (n % 10) + '0';
		else
			result[--len] = -(n % 10) + '0';
		n /= 10;
	}
	return (result);
}
/*int	main(void)
{
	double elapsed;
	struct timespec start, finish;
	int n = -2147483648;
	char *result;
	char *result2;

	printf("n: %d\n", n);
    printf("bytes of n: %lu\n", sizeof(n));
	clock_gettime(CLOCK_MONOTONIC, &start);
	result = ft_itoa(n);
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("result with ft_itoa: %s\n", result);
    printf("bytes of result: %lu\n", sizeof(result));
	printf("Elapsed time with ft_itoa: %f seconds\n", elapsed);
	free(result);
	return (0);
}*/