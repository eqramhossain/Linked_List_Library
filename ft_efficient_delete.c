/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_efficient_delete.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:06:56 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/10 15:07:07 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

t_node	*ft_efficient_delete(t_node *head, int find, int *count)
{
	t_node	*current;
	t_node	*new_head;
	t_node	*tmp;

	*count = 0;
	current = head;
	if (head == NULL)
		return (NULL);
	while (current->value == find)
	{
		tmp = current;
		current = current->next;
		free(tmp);
		*count = *count + 1;
		if (current == NULL)
			return (NULL);
	}
	new_head = current;
	while (current->next != NULL)
	{
		if (current->next->value == find)
		{
			tmp = current->next;
			current->next = current->next->next;
			free(tmp);
			*count = *count + 1;
		}
		else
			current = current->next;
	}
	return (new_head);
}
