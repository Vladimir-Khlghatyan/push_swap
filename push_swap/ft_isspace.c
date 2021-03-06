/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 23:30:15 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/03/13 16:10:05 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || \
				c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}
