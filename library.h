/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:13:26 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/04 21:40:35 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARY_H
# define LIBRARY_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

void				ft_print_list(t_node *head);
int					ft_count_list(t_node *head);
t_node				*ft_insert_head(t_node *head, int value);
t_node				*ft_insert_tail(t_node *head, int value);
t_node				*ft_delete_head(t_node *head);
t_node				*ft_delete_tail(t_node *head);
int					ft_is_member(t_node *head, int find_value);
int					ft_count_member(t_node *head, int find_value);
void				ft_find_replace(t_node *head, int find_value, int replace);

#endif
