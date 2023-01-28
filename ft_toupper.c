/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:25:05 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/19 13:28:30 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*int	main(void)
{
    int	c;

    c = 'a';
	printf("c = %c\n", c);
    printf("con ft_toupper: %c\n", ft_toupper(c));
	printf("con toupper: %c", toupper(c));
    return (0);
}*/