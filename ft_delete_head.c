/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_head.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:15:46 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/04 13:16:17 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

t_node	*ft_delete_head(t_node *head)
{
	t_node	*next;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		next = head->next;
		free(head);
		return (next);
	}
}
