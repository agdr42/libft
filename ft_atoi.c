/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/15 14:33:56 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/27 23:35:01 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef struct s_atoi
{
	const char	*nptr;
	int			i;
	int			result;
}				t_atoi;

static void	ft_atoi_init(t_atoi *atoi, const char *nptr)
{
	atoi->nptr = nptr;
	atoi->i = 0;
	atoi->result = 0;
}

static int	ft_skip_whitespaces(const char *nptr, int i)
{
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n'
		|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	return (i);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	result;
	int	negative;

	i = ft_skip_whitespaces(nptr, 0);
	result = 0;
	negative = 1;
	if (nptr[i] == '-')
	{
		negative = -1;
		i++;
	}
	else if (nptr[i] == '+')
	{
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * negative);
}
/*int	main(void)
{
	double elapsed;
	struct timespec start, finish;
	char str[] = "   +42";

	printf("str: %s\n\n", str);
	clock_gettime(CLOCK_MONOTONIC, &start);
	int result1 = atoi(str);
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("Result of atoi: %d\n", result1);
	printf("Execution time atoi: %f seconds\n\n", elapsed);

	clock_gettime(CLOCK_MONOTONIC, &start);
	int result2 = ft_atoi(str);
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("Result of ft_atoi: %d\n", result2);
	printf("Execution time ft_atoi: %f seconds\n", elapsed);

	return (0);
}*/