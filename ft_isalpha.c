/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:04:55 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/23 11:20:38 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct is_alpha // Struct para almacenar los datos de la función
{
	int	c;
	int	result;
}	t_isalpha;

int	ft_isalpha(int c)
{
	t_isalpha	data;

	data.c = c;
	if ((data.c >= 'a' && data.c <= 'z')
		|| (data.c >= 'A' && data.c <= 'Z'))
		data.result = 1;
	else
		data.result = 0;
	return (data.result);
}
/*int   main(void)
{
	double elapsed;
	struct timespec start, finish;
	char	c;

	c = 'a';
	clock_gettime(CLOCK_MONOTONIC, &start);
	ft_isalpha(c);
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("Elapsed time with ft_isalpha: %f seconds", elapsed);
	
	return (0);
}*/