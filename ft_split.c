/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42Madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 12:51:11 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/22 12:56:58 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_split
{
	char	**result;
	int		count;
	int		index;
}			t_split;

static int	ft_is_delimiter(char c, char delimiter)
{
	return (c == delimiter);
}

static int	ft_count_words(char const *s, char delimiter)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && ft_is_delimiter(s[i], delimiter))
			i++;
		if (s[i])
			count++;
		while (s[i] && !ft_is_delimiter(s[i], delimiter))
			i++;
	}
	return (count);
}

static int	ft_word_length(char const *s, char delimiter)
{
	int	i;

	i = 0;
	while (s[i] && !ft_is_delimiter(s[i], delimiter))
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	t_split	*split;

	if (!s)
		return (NULL);
	split = (t_split *)malloc(sizeof(t_split));
	if (!split)
		return (NULL);
	split->count = ft_count_words(s, c);
	split->result = (char **)malloc(sizeof(char *) * (split->count + 1));
	if (!split->result)
		return (NULL);
	split->index = 0;
	while (split->index < split->count)
	{
		while (*s && ft_is_delimiter(*s, c))
			s++;
		split->result[split->index] = ft_substr(s, 0, ft_word_length(s, c));
		if (!split->result[split->index])
			return (NULL);
		s += ft_word_length(s, c);
		split->index++;
	}
	split->result[split->index] = NULL;
	return (split->result);
}
/*int	main(void)
{
	double elapsed;
	struct timespec start, finish;
	char *s = "Hello World!";

	printf("s: %s\n", s);
	clock_gettime(CLOCK_MONOTONIC, &start);
	char **new_str = ft_split(s, ' ');
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("new_str[0]: %s\n", new_str[0]);
	printf("new_str[1]: %s\n", new_str[1]);
	printf("Elapsed time with ft_split: %f seconds", elapsed);
	free(new_str);
	return (0);
}*/