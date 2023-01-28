/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:08:40 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/23 11:30:31 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct is_digit
{
	int	c;
	int	result;
}		t_isdigit;

int	ft_isdigit(int c)
{
	t_isdigit	data;

	data.c = c;
	if (data.c >= '0' && data.c <= '9')
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
	ft_isdigit(c);
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("Elapsed time with ft_isdigit: %f seconds", elapsed);
	return (0);
}*/