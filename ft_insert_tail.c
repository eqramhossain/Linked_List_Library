/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_tail.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:17:45 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/04 13:18:07 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

t_node	*ft_insert_tail(t_node *head, int value)
{
	t_node	*new_node;
	t_node	*position;

	new_node = calloc(1, sizeof(t_node));
	new_node->value = value;
	position = head;
	if (head == NULL)
		return (new_node);
	else
	{
		while (position->next != NULL)
		{
			position = position->next;
		}
		position->next = new_node;
		return (head);
	}
}
