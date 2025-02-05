/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   library.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <ehossain@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 13:13:26 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/05 16:29:37 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBRARY_H
# define LIBRARY_H

# include <stdio.h>
# include <stdlib.h>

/* **************************************************************************** */

/* ***************************** MY OWN FUNCTION ****************************** */

/* **************************************************************************** */

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

/* **************************************************************************** */

/* *********************************** END ************************************ */

/* **************************************************************************** */

/* ---------------------------------------------------------------------------- */

/* **************************************************************************** */

/* ***************************** LIBFT BONUS ********************************** */

/* **************************************************************************** */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
void				ft_print_list(t_list *head);
void				ft_lstadd_front(t_list **lst, t_list *new);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);

/* **************************************************************************** */

/* *********************************** END ************************************ */

/* **************************************************************************** */

#endif
