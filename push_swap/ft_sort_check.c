/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:33:00 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/03/15 21:48:38 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* return values
	-1	if lst_1 isn't exist
	 0	if lst_1 isn't sorted
	 1	if lst_1 is sorted
	 2	if lst_1 is sorted and lst_2 is empty
*/

#include "lib_push_swap.h"

int	ft_sort_check(t_list **lst_1, t_list **lst_2)
{
	t_list	*tmp;

	if (!lst_1)
		return (-1);
	if (ft_lstlen(lst_1) == 1)
		return (1);
	tmp = *lst_1;
	while (tmp->next)
	{
		if (tmp->data > tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	if (!*lst_2)
		return (2);
	return (1);
}
