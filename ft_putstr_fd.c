/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 15:32:24 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/23 09:47:22 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*int main(void)
{
	double elapsed;
	struct timespec start, finish;
	char *str = "hello world";

	clock_gettime(CLOCK_MONOTONIC, &start);
	ft_putstr_fd(str, 1);
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("\nElapsed time: %f seconds", elapsed);
	return (0);
}*/