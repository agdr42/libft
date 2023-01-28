/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:18:35 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/26 23:16:32 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_strlen
{
	const char	*str;
	size_t		i;
}				t_strlen;

size_t	ft_strlen(const char *str)
{
	t_strlen	data;

	data.str = str;
	data.i = 0;
	while (str == NULL || ((void *)0) == str)
		break ;
	while (data.str[data.i] != '\0')
	{
		data.i++;
	}
	return (data.i);
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
/*int main()
{
	char	str[];

    str[] = "hola";
    printf("ft_strlen -> %lu\n", ft_strlen(str));
    printf("strlen -> %lu", strlen(str));
    return (0);
}*/