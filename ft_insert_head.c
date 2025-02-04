/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insert_head.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:17:01 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/04 13:17:36 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

t_node	*ft_insert_head(t_node *head, int value)
{
	t_node	*new_node;

	new_node = calloc(1, sizeof(t_node));
	new_node->value = value;
	if (head == NULL)
		return (new_node);
	else
	{
		new_node->next = head;
		return (new_node);
	}
}
