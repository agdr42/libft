/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 16:09:45 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/27 20:38:20 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*int	main(void)
{
	const char *string = "Hello World";
	char c = 'o';
	char *result = ft_strchr(string, c);
	printf("String\n: %s", string);
	printf("Character\n: %c", c);
	printf("Result: %s", result);
	return (0);
}*/