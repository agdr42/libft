/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:14:29 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/23 11:32:32 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct is_print
{
	int	c;
	int	result;
}		t_isprint;

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*int   main(void)
{
    double  elapsed;
    struct timespec start, finish;
    char c = 'a';

    clock_gettime(CLOCK_MONOTONIC, &start);
    ft_isprint(c);
    clock_gettime(CLOCK_MONOTONIC, &finish);
    elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
        / 1000000000.0;
    printf("Elapsed time with ft_isprint: %f seconds", elapsed);
    return (0);
}*/