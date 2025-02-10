/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:08:07 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/10 15:08:18 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

t_node	*ft_reverse_list(t_node *head)
{
	t_node	*current;
	t_node	*next;
	t_node	*tmp;

	current = head;
	next = head->next;
	tmp = NULL;
	if (head == NULL)
		return (NULL);
	if (head->next == NULL)
		return (head);
	current->next = NULL;
	while (next != NULL)
	{
		tmp = next->next;
		next->next = current;
		current = next;
		next = tmp;
	}
	return (current);
}
