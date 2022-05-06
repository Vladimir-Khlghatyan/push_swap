/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <vkhlghat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 19:03:55 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/04/26 13:06:11 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_push_swap.h"

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	char	*s;

	stack_a = create_stack(ac, av);
	stack_b = NULL;
	if (!stack_a)
		return (0);
	while (1)
	{
		s = get_next_line(0);
		if (!s)
			break ;
		command_bonus(&stack_a, &stack_b, s);
		free (s);
	}
	if (ft_sort_check(&stack_a, &stack_b) == 2)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	return (0);
}
