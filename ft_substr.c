/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 20:51:49 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/21 21:43:58 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_len;

	if (!s)
		return (NULL);
	ft_strlen(s);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) == 0)
		return (ft_strdup(""));
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}
/*int main(void)
{
    double elapsed;
    struct timespec start, finish;
    char *str = "Hello World!";
    char *sub;

    clock_gettime(CLOCK_MONOTONIC, &start);
    sub = ft_substr(str, 6, 5);
    clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
    printf("str: %s\n", str);
	printf("Elapsed time with ft_substr: %f\n", elapsed);
    printf("Substring: %s\n", sub);
    printf("Length: %lu\n", ft_strlen(sub));
    free(sub);
	printf("sub tras free: %s\n", sub);
    return (0);
}*/