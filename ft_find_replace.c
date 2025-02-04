/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_replace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:39:43 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/04 21:40:08 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

void	ft_find_replace(t_node *head, int find_value, int replace)
{
	t_node	*current;

	current = head;
	while (current->next != NULL)
	{
		if (current->value == find_value)
			current->value = replace;
		current = current->next;
	}
}
