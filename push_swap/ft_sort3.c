/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:33:00 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/03/15 21:48:38 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

int	ft_sort3(t_list **a, t_list **b)
{
	static t_list	*tmp;

	(void)**b;
	if ((((*a)->data < (*a)->next->data) && ((*a)->next->data > \
		(*a)->next->next->data) && ((*a)->data < (*a)->next->next->data)) || \
		(((*a)->data > (*a)->next->data) && ((*a)->next->data < \
		(*a)->next->next->data) && ((*a)->data < (*a)->next->next->data)) || \
		(((*a)->data > (*a)->next->data) && ((*a)->next->data > \
		(*a)->next->next->data) && ((*a)->data > (*a)->next->next->data)))
		command(a, &tmp, "sa\n");
	if ((((*a)->data < (*a)->next->data) && ((*a)->next->data > \
		(*a)->next->next->data) && ((*a)->data < (*a)->next->next->data)) || \
		(((*a)->data > (*a)->next->data) && ((*a)->next->data < \
		(*a)->next->next->data) && ((*a)->data > (*a)->next->next->data)))
		command(a, &tmp, "ra\n");
	command(a, &tmp, "rra\n");
	return (0);
}
