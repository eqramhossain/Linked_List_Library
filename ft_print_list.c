/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:18:18 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/04 13:18:46 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "library.h"

void	ft_print_list(t_node *head)
{
	t_node	*position;

	position = head;
	while (position != NULL)
	{
		printf("value = %d\n", position->value);
		position = position->next;
	}
}
