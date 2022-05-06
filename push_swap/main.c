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
	t_list			*stack_a;
	t_list			*stack_b;
	unsigned int	len;

	stack_a = create_stack(ac, av);
	stack_b = NULL;
	if (!stack_a || ft_sort_check(&stack_a, &stack_b) == 2)
		return (0);
	len = ft_lstlen(&stack_a);
	if (len < 2)
		return (0);
	if (len == 3)
		ft_sort3(&stack_a, &stack_b);
	else if (len == 5)
		ft_sort5(&stack_a, &stack_b);
	else if (len == 100)
		ft_sort100(&stack_a, &stack_b);
	else if (len == 500)
		ft_sort500(&stack_a, &stack_b);
	else
		ft_sort_all(&stack_a, &stack_b);
	return (0);
}
