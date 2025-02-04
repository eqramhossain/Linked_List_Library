/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_member.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:38:51 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/04 21:39:19 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

int	ft_count_member(t_node *head, int find_value)
{
	t_node	*current;
	int		i;

	i = 0;
	if (head == NULL)
		return (0);
	else if (head->value == find_value)
		return (1);
	else
	{
		current = head;
		while (current->next != NULL)
		{
			if (current->value == find_value)
			{
				i++;
			}
			current = current->next;
		}
	}
	return (i);
}
