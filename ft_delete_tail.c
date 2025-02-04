/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_tail.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:16:23 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/04 13:16:51 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

t_node	*ft_delete_tail(t_node *head)
{
	t_node	*current;
	t_node	*previous;

	current = head;
	previous = NULL;
	if (head == NULL)
	{
		return (NULL);
	}
	else if (head->next == NULL)
	{
		free(head);
		return (NULL);
	}
	else
	{
		while (current->next != NULL)
		{
			previous = current;
			current = current->next;
		}
		previous->next = NULL;
		free(current);
		return (head);
	}
}
