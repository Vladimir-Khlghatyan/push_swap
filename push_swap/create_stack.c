/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <vkhlghat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:03:55 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/04/26 13:06:11 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

t_list	*create_stack(int ac, char **av)
{
	char			**arr;
	char			*s;
	static t_list	*lst;

	if (ac - 1 == 0)
		return (NULL);
	if (ac - 1 == 1)
		arr = ft_strtoarr(av[1]);
	else
	{
		s = ft_argstostr(av);
		arr = ft_strtoarr(s);
		free(s);
	}
	if (!arr)
		return (NULL);
	arr = ft_check_extremums(arr);
	if (!arr)
		return (NULL);
	lst = *ft_arrtolst(arr);
	if (!lst)
		return (NULL);
	return (*ft_indexing_lst(&lst));
}
