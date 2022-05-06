/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_extremums.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <vkhlghat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:03:55 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/04/26 13:06:11 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

static int	iszero(char *s)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (s[i] && (s[i] == '-' || s[i] == '+'))
		i++;
	while (s[i])
	{
		if (s[i] != '0')
			return (0);
		i++;
	}
	return (1);
}

static int	numlen(char *s)
{
	int	i;
	int	len;

	if (!s)
		return (0);
	if (iszero(s))
		return (1);
	i = 0;
	len = 0;
	if (s[i] && s[i] == '+')
		i++;
	else if (s[i] && s[i] == '-')
	{
		len++;
		i++;
	}
	while (s[i] == '0')
		i++;
	while (s[i++])
		len++;
	return (len);
}

static char	*one_zero_str(char *s)
{
	s[0] = '0';
	s[1] = '\0';
	return (s);
}

static char	*numstr(char *str)
{
	char	*s;
	int		i;
	int		j;

	s = malloc(numlen(str) + 1);
	if (!s)
		return (NULL);
	if (iszero(str))
		return (one_zero_str(s));
	i = 0;
	j = 0;
	if (str[i] && str[i] == '+')
		i++;
	else if (str[i] && str[i] == '-')
	{
		s[j++] = '-';
		i++;
	}
	while (str[i] == '0')
		i++;
	while (str[i])
		s[j++] = str[i++];
	s[j] = '\0';
	return (s);
}

char	**ft_check_extremums(char **arr)
{
	int		i;
	char	*s1;
	char	*s2;

	i = -1;
	while (arr[++i])
	{	
		s1 = numstr(arr[i]);
		s2 = ft_itoa(ft_atoi(arr[i]));
		if (ft_strcmp(s1, s2))
		{
			free(s1);
			free(s2);
			ft_arrfree(arr);
			return (NULL);
		}
		free(s1);
		free(s2);
	}
	return (arr);
}
