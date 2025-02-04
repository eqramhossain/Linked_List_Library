/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_member.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:37:13 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/04 21:37:38 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

int	ft_is_member(t_node *head, int find_value)
{
	t_node	*current;

	if (head == NULL)
		return (0);
	else if (head->value == find_value)
	{
		return (1);
	}
	else
	{
		current = head;
		while (current->value != find_value && current->next != NULL)
		{
			current = current->next;
		}
		if (current->value == find_value)
			return (1);
	}
	return (0);
}
