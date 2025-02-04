/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:14:21 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/04 13:15:37 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

int	ft_count_list(t_node *head)
{
	t_node	*position;
	int		i;

	position = head;
	i = 0;
	while (position != NULL)
	{
		position = position->next;
		i++;
	}
	return (i);
}
