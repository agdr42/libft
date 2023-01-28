/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  alejgome@student.42madrid.com < alejgo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 13:30:05 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/19 23:05:16 by  alejgome@s      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>
#include <ctype.h>*/
#include "libft.h"

typedef struct s_tolower
{
	int		c;
	int		result;
}			t_tolower;

int	ft_tolower(int c)
{
	t_tolower	data;

	data.c = c;
	if (data.c >= 'A' && data.c <= 'Z')
		data.result = data.c + 32;
	else
		data.result = data.c;
	return (data.result);
}
/*int    main(void)
{
	int    c; // variable para guardar el caracter
	
    c = 'A'; // asignamos el caracter A a la variable
    printf("c = %c\n", c); // imprimimos el caracter
    printf("ft_tolower: %c\n", ft_tolower(c)); 
    // imprimimos el resultado de la funcion
    printf("tolewer: %c", tolower(c)); 
    // imprimimos el resultado de la funcion de la libreria
	return (0); // devolvemos 0, exito
}*/
/*
typedef struct s_tolower // estructura para pasar los datos a la funcion
{
	int		c; // variable para guardar el caracter
	int		result;	// variable para guardar el resultado
}			t_tolower; // nombre de la estructura

int	ft_tolower(int c) // funcion que convierte un caracter en minuscula
{
	t_tolower	data; // declaracion de la estructura

	data.c = c; // guardamos el caracter en la estructura
	if (data.c >= 'A' && data.c <= 'Z') // si el caracter esta entre A y Z
		data.result = data.c + 32; // le sumamos 32 para convertirlo en minuscula
	else
		data.result = data.c; // si no es una letra mayuscula, no se modifica
	return (data.result); // devolvemos el resultado
}
// tolower() convierte el caracter c en minuscula, si es posible.
// tolower usa la libreria ctype.h
*/