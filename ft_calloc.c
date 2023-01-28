/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:39:25 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/27 20:44:40 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, 0, count * size);
	return (ptr);
}
//	ft_bzero(ptr, count * size);
/*int	main(void)
{
	double elapsed;
	struct timespec start, finish;
	int i = 0;
	int	j = 0;
	int *ptr;
	int *ptr2;

	clock_gettime(CLOCK_MONOTONIC, &start);
	while (i < 10)
	{
		ptr = ft_calloc(10, sizeof(int));
//		printf("ptr: %p\n", ptr);
		i++;
	}
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("Elapsed time with ft_calloc: %f seconds\n\n", elapsed);
	
	clock_gettime(CLOCK_MONOTONIC, &start);
	while (j < 10)
	{
		ptr2 = calloc(10, sizeof(int));
//		printf("ptr2: %p\n", ptr2);
		j++;
	}
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("Elapsed time with calloc: %f seconds\n\n", elapsed);	
	return (0);
}*/