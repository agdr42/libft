/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejgome <alejgome@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 13:04:36 by alejgome          #+#    #+#             */
/*   Updated: 2023/01/26 15:17:33 by alejgome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*int	main(void)
{
	double	elapsed;
	t_list	*lst;
	t_list	*new;

	struct timespec start, finish;
	lst = ft_lstnew("Hello");
	clock_gettime(CLOCK_MONOTONIC, &start);
	ft_lstadd_front(&lst, new);
	clock_gettime(CLOCK_MONOTONIC, &finish);
	elapsed = (finish.tv_sec - start.tv_sec) + (finish.tv_nsec - start.tv_nsec)
		/ 1000000000.0;
	printf("elapsed time = %f seconds\n", elapsed);
	printf("lst->content: %s", lst->content);
	return (0);
}*/