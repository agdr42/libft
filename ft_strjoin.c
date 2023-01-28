/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 22:01:09 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/22 12:27:08 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!new_str)
		return (NULL);
	ft_strlcpy(new_str, s1, s1_len + 1);
	ft_strlcat(new_str, s2, s1_len + s2_len + 1);
	return (new_str);
}
/*int main(void)
{
    double elapsed;
    struct timespec start, finish;
    char *s1 = "Hello";
    char *s2 = " World!";

    printf("s1: %s\n", s1);
    printf("s2: %s\n", s2);
    clock_gettime(CLOCK_MONOTONIC, &start);
    char *new_str = ft_strjoin(s1, s2);
    clock_gettime(CLOCK_MONOTONIC, &finish);
    elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
        / 1000000000.0;
    printf("%s\n", new_str);
    printf("Elapsed time with ft_strjoin: %f seconds", elapsed);
    free(new_str);
    return (0);
}*/