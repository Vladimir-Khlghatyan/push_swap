/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lst.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <vkhlghat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:03:55 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/04/26 13:06:11 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

void	ft_print_lst(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	write(1, "index : data\n", 13);
	while (tmp)
	{
		ft_putnbr(tmp->index);
		write(1, " : ", 3);
		ft_putnbr(tmp->data);
		write(1, "\n", 1);
		tmp = tmp->next;
	}
}
