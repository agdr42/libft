/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:35:36 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/22 12:46:06 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_strtrim
{
	char	*str;
	int		len;
	int		start;
	int		end;

}			t_strtrim;

char	*ft_strtrim(char const *s1, char const *set)
{
	t_strtrim	*trim;

	if (!s1 || !set)
		return (NULL);
	trim = (t_strtrim *)malloc(sizeof(t_strtrim));
	if (!trim)
		return (NULL);
	trim->start = 0;
	while (s1[trim->start] && ft_strchr(set, s1[trim->start]))
		trim->start++;
	trim->end = ft_strlen(s1) - 1;
	while (trim->end >= 0 && ft_strchr(set, s1[trim->end]))
		trim->end--;
	trim->len = trim->end - trim->start + 1;
	if (trim->len < 0)
		trim->len = 0;
	trim->str = (char *)malloc(sizeof(char) * (trim->len + 1));
	ft_memcpy(trim->str, s1 + trim->start, trim->len);
	trim->str[trim->len] = '\0';
	return (trim->str);
}
/*int	main(void)
{
	double elapsed;
	struct timespec start, finish;
	char *s1 = "Hello";
	char *set = "Ho";

	printf("s1: %s\n", s1);
	printf("set: %s\n", set);
	printf("Esta funcion elimina los caracteres de
 set del principio y del final de s1 si estos estan en set\n");
	clock_gettime(CLOCK_MONOTONIC, &start);
	char *new_str = ft_strtrim(s1, set);
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("%s\n", new_str);
	printf("Elapsed time with ft_strtrim: %f seconds", elapsed);
	free(new_str);
	return (0);
}*/