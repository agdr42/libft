/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 13:48:46 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/22 16:01:05 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;

	if (!s || !f)
		return (NULL);
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

char	my_function(unsigned int index, char c)
{
	if (index % 2 == 0)
		return (c - 32);
	else
		return (c);
}
/*int	main(void)
{
	double elapsed;
	struct timespec start, finish;
	char *original_string = "Hello, World!";

	clock_gettime(CLOCK_MONOTONIC, &start);
	char *modified_string = ft_strmapi(original_string, &my_function);
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("Original string: %s\n", original_string);
	printf("Modified string: %s\n", modified_string);
	printf("Elapsed time: %f seconds", elapsed);
	free(modified_string);
	return (0);
}*/