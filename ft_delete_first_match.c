/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_first_match.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:04:45 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/10 15:05:04 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

t_node	*ft_delete_first_match(t_node *head, int find, int *check)
{
	t_node	*current;
	t_node	*previous;
	t_node	*tmp;

	current = head;
	previous = NULL;
	tmp = NULL;
	if (head == NULL)
	{
		return (NULL);
	}
	if (head->value == find)
	{
		tmp = head->next;
		free(head);
		*check = 1;
		return (tmp);
	}
	while (current != NULL)
	{
		if (current->value == find)
		{
			previous->next = current->next;
			free(current);
			*check = 1;
			return (head);
		}
		previous = current;
		current = current->next;
	}
	*check = 0;
	return (head);
}
