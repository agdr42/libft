/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 13:39:59 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/21 16:17:56 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_strlcat
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;
}			t_strlcat;

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	t_strlcat	data;

	data.dest_len = 0;
	data.src_len = 0;
	data.i = 0;
	while (dest[data.dest_len] != '\0')
		data.dest_len++;
	while (src[data.src_len] != '\0')
		data.src_len++;
	if (size <= data.dest_len)
		return (data.src_len + size);
	while (src[data.i] != '\0' && data.dest_len + data.i < size - 1)
	{
		dest[data.dest_len + data.i] = src[data.i];
		data.i++;
	}
	dest[data.dest_len + data.i] = '\0';
	return (data.dest_len + data.src_len);
}
/*
	Medir el tiempo de ejecucion de una funcion en C
	double	elapsed;
	struct timespec start, finish;

	clock_gettime(CLOCK_MONOTONIC, &start);
	codigo a medir
	clock_gettime(CLOCK_MONOTONIC, &finish);

	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf el resultado de la funcion
	printf("Tiempo de ejecucion: %f\n", elapsed); ?
*/
/*int	main(void)
{
	double elapsed;
	struct timespec start, finish;

	char dst[20] = "Hello";
	char src[] = ", World!";

	clock_gettime(CLOCK_MONOTONIC, &start);
	size_t result = ft_strlcat(dst, src, sizeof(dst));
	clock_gettime(CLOCK_MONOTONIC, &finish);

	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("ft_strlcat result: %s\n", dst);
	printf("ft_strlcat len: %ld\n", result);
	printf("Execution time: %f seconds\n", elapsed);

	return (0);
}*/