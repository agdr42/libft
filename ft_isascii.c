/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:09:20 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/23 11:23:17 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct is_ascii
{
	int	c;
	int	result;
}		t_isascii;

int	ft_isascii(int c)
{
	t_isascii	data;

	data.c = c;
	if (data.c >= 0 && data.c <= 127)
		data.result = 1;
	else
		data.result = 0;
	return (data.result);
}
/*int	main(void)
{
	double elapsed;
	struct timespec start, finish;
	char c = 'a';

	clock_gettime(CLOCK_MONOTONIC, &start);
	ft_isascii(c);
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("Elapsed time with ft_isascii: %f seconds", elapsed);
	return (0);
}*/