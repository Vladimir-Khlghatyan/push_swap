/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argstostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <vkhlghat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:03:55 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/04/26 13:06:11 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

char	*ft_argstostr(char **arr)
{
	char	*s;
	int		len_with_spaces;
	int		i;
	int		j;
	int		k;	

	len_with_spaces = 0;
	i = -1;
	while (arr[++i])
		len_with_spaces += ft_strlen(arr[i]) + 1;
	s = (char *)malloc(len_with_spaces - ft_strlen(arr[0]) - 1);
	if (!s)
		return (NULL);
	i = 0;
	k = -1;
	while (arr[++i])
	{
		j = -1;
		while (arr[i][++j])
			s[++k] = arr[i][j];
		s[++k] = ' ';
	}
	s[++k] = '\0';
	return (s);
}
