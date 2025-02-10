/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:07:30 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/10 15:07:43 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

t_node	*ft_append_list(t_node *lst1, t_node *lst2)
{
	t_node	*current;

	current = lst1;
	if (lst1 == NULL)
		return (lst2);
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = lst2;
	return (lst1);
}
