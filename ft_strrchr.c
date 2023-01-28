/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:41:00 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/27 08:29:21 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurrence;
	char	*p;

	last_occurrence = NULL;
	p = (char *)s;
	while (*p)
	{
		if (*p == c)
			last_occurrence = p;
		p++;
	}
	if (*p == c)
		last_occurrence = p;
	return (last_occurrence);
}
/*int main()
{
    char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
    char *d = ft_strrchr(src, '\0');
    printf("La última ocurrencia de '\\0' en la cadena es: %s\n", d);
    return (0);
}*/