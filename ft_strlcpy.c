/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 14:12:58 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/21 22:13:16 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*int main()
{
	double elapsed;
	struct timespec start, finish;
    char str1[] = "abcdefghijklmnopqrstuvwxyz";
    char str2[] = "cadena de prueba";

    printf("str1 antes de ft_strlcpy: %s\n", str1);
	clock_gettime(CLOCK_MONOTONIC, &start);
    ft_strlcpy(str1, str2, 5);
    clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
    printf("str1 despues de ft_strlcpy: %s\n", str1);
    printf("Tiempo de ejecucion: %f seconds", elapsed);
    
   printf("str1 antes de strlcpy: %s\n", str1);
    clock_gettime(CLOCK_MONOTONIC, &start);
    strlcpy(str1, str2, 5);
    clock_gettime(CLOCK_MONOTONIC, &finish);
    printf("str1 despues de strlcpy: %s\n", str1);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
    printf("Tiempo de ejecucion: %f seconds", elapsed);
    return (0);
}*/