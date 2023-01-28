/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:02:12 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/27 20:50:49 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_ptr;
	unsigned char	*src_ptr;

	if (dest == NULL && src == NULL)
		return (NULL);
	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	while (n-- > 0)
		*(dest_ptr++) = *(src_ptr++);
	return (dest);
}
/*int	main(void)
{
	char str1[] = "Geeks";
	char str2[] = "Quiz";
	
	puts("str1 before memcpy ");
	puts(str1);
 
	// Copies contents of str2 to str1 
	ft_memcpy (str1, str2, sizeof(str2));
	//memcpy (str1, str2, sizeof(str2));
	
	puts("\nstr1 after ft_memcpy ");
	puts(str1);
	//puts("\nstr1 after memcpy ");
	//puts(str1);
	printf("Tiempo de ejecucion ft_memcpy: %f\n", (double)clock()
			/ CLOCKS_PER_SEC);
	//printf("Tiempo de ejecucion memcpy: %f\n", (double)clock()
			/ CLOCKS_PER_SEC);

	return (0);
}*/