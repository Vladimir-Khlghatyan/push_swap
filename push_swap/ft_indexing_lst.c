/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indexing_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <vkhlghat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:03:55 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/04/26 13:06:11 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

static int	index_num_in_tab(int *tab, int num, int len)
{
	int	i;

	i = -1;
	while (++i < len)
		if (tab[i] == num)
			return (i);
	return (i);
}

static void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (size - 1 >= 0)
	{
		i = -1;
		while (++i < size - 1)
		{	
			if (tab[i] > tab[i + 1])
			{	
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
		}
		size--;
	}
}

static void	fill_indexes_in_list(t_list **lst, int *tab)
{
	t_list	*tmp;

	tmp = *lst;
	while (tmp)
	{
		tmp->index = index_num_in_tab(tab, tmp->data, ft_lstlen(lst));
		tmp = tmp->next;
	}
}

t_list	**ft_indexing_lst(t_list **lst)
{
	t_list	*tmp;
	int		len;
	int		*tab;
	int		i;

	if (!lst)
		return (NULL);
	len = ft_lstlen(lst);
	tab = (int *)malloc(sizeof(int) * len);
	if (!tab)
		return (NULL);
	tmp = *lst;
	i = -1;
	while (tmp)
	{
		tab[++i] = tmp->data;
		tmp = tmp->next;
	}
	ft_sort_int_tab(tab, len);
	fill_indexes_in_list(lst, tab);
	free(tab);
	return (lst);
}
