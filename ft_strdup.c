/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 10:59:32 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/27 19:52:20 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *src)
{
	char	*dest;
	int		len;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, src, len + 1);
	return (dest);
}
/*int	main(void)
{
	double elapsed;
	struct timespec start, finish;
	char *src = "Hello World";
	clock_gettime(CLOCK_MONOTONIC, &start);
	char *duplicate = ft_strdup(src);
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("Original string: %s\n", src);
	printf("Duplicate string: %s\n", duplicate);
	printf("Elapsed time: %f seconds\n\n", elapsed);
	ft_free(duplicate);

	clock_gettime(CLOCK_MONOTONIC, &start);
	char *duplicate2 = strdup(src);
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("Original string: %s\n", src);
	printf("Duplicate string: %s\n", duplicate2);
	printf("Elapsed time: %f seconds\n", elapsed);
	free(duplicate2);
	return (0);
}*/