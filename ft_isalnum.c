/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:26:02 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/23 11:15:17 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_isalnum
{
	int	c;
	int	result;
}		t_isalnum;

int	ft_isalnum(int c)
{
	t_isalnum	data;

	data.c = c;
	if ((data.c >= 'a' && data.c <= 'z') || (data.c >= 'A' && data.c <= 'Z')
		|| (data.c >= '0' && data.c <= '9'))
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
	ft_isalnum(c);
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("Elapsed time with ft_isalnum: %f seconds", elapsed);
	return (0);
}*/