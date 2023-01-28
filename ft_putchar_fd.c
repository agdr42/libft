/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:26:32 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/23 09:54:06 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int	main(void)
{
	double elapsed;
	struct timespec start, finish;
    char c = 'a';

    clock_gettime(CLOCK_MONOTONIC, &start);
    ft_putchar_fd(c, 1);
    clock_gettime(CLOCK_MONOTONIC, &finish);
    elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
        / 1000000000.0;
    printf("\nElapsed time: %f seconds", elapsed);
    return (0);
}*/