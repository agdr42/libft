/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:39:03 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/27 20:58:24 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_ptr;
	unsigned char	*src_ptr;

	if (dst == NULL && src == NULL)
		return (NULL);
	dst_ptr = (unsigned char *)dst;
	src_ptr = (unsigned char *)src;
	if (src_ptr < dst_ptr)
	{
		src_ptr = src_ptr + len - 1;
		dst_ptr = dst_ptr + len - 1;
		while (len-- > 0)
			*(dst_ptr--) = *(src_ptr--);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
/*int     main(void)
{
	double elapsed;
	struct timespec start, finish;
    char str1[] = "abcdefghijklmnopqrstuvwxyz";
    char str2[] = "abcdefghijklmnopqrstuvwxyz";

    printf("str1: %s\n", str1);
    printf("str2: %s\n\n", str2);

    printf("str1 before ft_memmove: %s\n", str1);
    clock_gettime(CLOCK_MONOTONIC, &start);
    ft_memmove(str1 + 5, str1, 10);
    clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
    printf("str1 after ft_memmove: %s\n", str1);
    printf("elapsed time: %f seconds\n\n", elapsed);

    
    printf("str2 before memmove: %s\n", str2);
    clock_gettime(CLOCK_MONOTONIC, &start);
    memmove(str2 + 5, str2, 10);
    clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
    printf("str2 after memmove: %s\n", str2);
    printf("elapsed time: %f seconds", elapsed);
    return (0);
}*/