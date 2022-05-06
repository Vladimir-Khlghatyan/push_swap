/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrtolst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <vkhlghat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:03:55 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/04/26 13:06:11 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

static char	**ft_free(char **tab)
{
	size_t	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

t_list	**ft_arrtolst(char **arr)
{
	t_list			*lst;
	static t_list	*rtn_lst;
	int				i;

	if (!arr)
		return (NULL);
	lst = (t_list *)malloc(sizeof(t_list));
	rtn_lst = lst;
	i = -1;
	while (arr[++i])
	{
		lst->data = ft_atoi(arr[i]);
		if (i == ft_arrlen(arr) - 1)
		{
			lst->next = NULL;
			ft_free(arr);
			return (&rtn_lst);
		}
		lst->next = (t_list *)malloc(sizeof(t_list));
		lst = lst->next;
	}
	return (NULL);
}
