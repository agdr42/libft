/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 09:22:18 by  alejgome@s       #+#    #+#             */
/*   Updated: 2023/01/23 11:07:17 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
/*double medir_tiempo(size_t (*f)(const char *)) {
    clock_t inicio, final;
    char buffer[100];
    inicio = clock();
    f(buffer);
    final = clock();
    return (((double)(final - inicio)) / CLOCKS_PER_SEC);
}

int	main(void) {
    double tiempo_strlen, tiempo_ft_strlen;

    // Ejemplo de uso
    tiempo_strlen = medir_tiempo(strlen);
    tiempo_ft_strlen = medir_tiempo(ft_strlen);
    printf("Tiempo de ejecución de strlen: %f segundos\n", tiempo_strlen);
    printf("Tiempo de ejecución de ft_strlen: %f segundos\n", tiempo_ft_strlen);
    return (0);
}*/
/*int main(void)
{
    bzero(buffer, sizeof(buffer));
    printf("bzero -> ");
    for (i = 0; i < sizeof(buffer); i++)
        printf("%d ", buffer[i]);
    printf("\n");
    ft_bzero(buffer, sizeof(buffer));
    printf("ft_bzero -> ");
    for (i = 0; i < sizeof(buffer); i++)
        printf("%d ", buffer[i]);
    return (0);
}*/