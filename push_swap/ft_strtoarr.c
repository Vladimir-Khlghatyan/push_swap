/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoarr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <vkhlghat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:03:55 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/04/26 13:06:11 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

static char	**return_error(void)
{
	ft_putstr("Error\n");
	return (NULL);
}

static int	if_all_white_spaces(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		if (!ft_isspace(s[i]))
			return (0);
	return (1);
}

static char	*white_spaces_to_space(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		if (ft_isspace(s[i]))
			s[i] = ' ';
	return (s);
}

static char	**if_items_in_arr_are_unic(char **arr)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i])
	{
		if (arr[i + 1])
		{
			j = i + 1;
			while (arr[j])
			{
				if (ft_atoi(arr[i]) == ft_atoi(arr[j]))
				{
					ft_putstr("Error\n");
					return (NULL);
				}
				j++;
			}
		}
		i++;
	}
	return (arr);
}

char	**ft_strtoarr(char *s)
{
	char	**arr;
	int		i;
	int		j;

	if (!s || if_all_white_spaces(s))
		return (return_error());
	s = white_spaces_to_space(s);
	arr = ft_split(s, ' ');
	if (!arr)
		return (return_error());
	i = -1;
	while (arr[++i])
	{
		if (ft_strlen(arr[i]) == 1 && (arr[i][0] == '+' || arr[i][0] == '-'))
			return (ft_arrfree(arr));
		j = -1;
		if (arr[i][0] == '+' || arr[i][0] == '-')
			j++;
		while (arr[i][++j])
			if (!ft_isdigit(arr[i][j]))
				return (ft_arrfree(arr));
	}
	return (if_items_in_arr_are_unic(arr));
}
