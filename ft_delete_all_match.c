/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_all_match.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:06:06 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/10 15:06:19 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

t_node	*ft_delete_all_match(t_node *head, int find, int *count)
{
	t_node	*current;
	int		check;

	*count = 0;
	current = head;
	check = 1;
	while (check)
	{
		current = ft_delete_first_match(current, find, &check);
		if (check)
		{
			*count = *count + 1;
		}
	}
	return (current);
}
