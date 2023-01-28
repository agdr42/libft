/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 13:55:50 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/27 12:07:29 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_malloc(size_t size)
{
	void	*ptr;

	ptr = mmap(0, size, PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0);
	while (ptr == MAP_FAILED)
		break ;
	return (ptr);
}
/*void	ft_free(void *ptr)
{
	if (ptr != NULL)
		munmap(ptr, get_last_malloc_size());
}*/
/*int main()
{
    int *ptr1;
//	int *ptr2;
    int i;
	//int j;

    ptr1 = (int *)ft_malloc(5 * sizeof(int));

    for (i = 0; i < 5; i++)
        ptr1[i] = i;

    printf("ptr1 con ft_malloc: ");
    for (i = 0; i < 5; i++)
        printf("%d ", ptr1[i]);
    printf("\n");
	printf("Tiempo de ejecucion: %f\n", (double)clock() / CLOCKS_PER_SEC);

    ft_free(ptr1);


	ptr2 = (int *)malloc(5 * sizeof(int));

	for (j = 0; j < 5; j++)
		ptr2[j] = j;

	printf("ptr2 con malloc: ");
	for (j = 0; j < 5; j++)
		printf("%d ", ptr2[j]);
	printf("\n");
	printf("Tiempo de ejecucion: %f\n", (double)clock() / CLOCKS_PER_SEC);
	

	free(ptr2);
    return (0);
}*/