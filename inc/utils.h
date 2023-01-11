/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albagarc <albagarc@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 20:55:26 by albagarc          #+#    #+#             */
/*   Updated: 2023/01/08 21:06:17 by albagarc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/defines.h"

int			ft_is_number(char *str);
int			ft_is_int(char *str);
void		ft_is_dup(char **argv, int length);
t_element	*lst_new(int content);
t_element	*lst_last(t_element *lst);
void		lst_add_back(t_element **first, t_element *new_el);
void		set_index(t_element **first);
void		swap_element(t_element **swap);
void		push_element(t_element **stack_a, t_element **stack_b);
void		reverse_rotate_element(t_element **stack);
void		rotate_element(t_element **stack);
void	sort_3(t_element **stack, int length, int min_index);
void	sort_5(t_element **stack_1, t_element **stack_2, int length);
void	print_do_swap(t_element **stack, char stack_name);
void	print_do_push(t_element **stack_1,t_element **stack_2, char stack_name);
void	print_do_rotate(t_element **stack, char stack_name);
void	print_do_rrotate(t_element **stack, char stack_name);
void	print_do_swap_both(t_element **stack1, t_element **stack2);
void	print_do_rotate_both(t_element **stack1, t_element **stack2);
void	print_do_rrotate_both(t_element **stack1, t_element **stack2);

int	min_index_in_stack(t_element **stack);
void	sort_100_500(t_element **stack_a, t_element **stack_b, int length, int num_in_ch);
int     lst_size(t_element *lst);
int     is_not_sorted(t_element **stack);

