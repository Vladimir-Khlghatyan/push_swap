/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkhlghat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 18:52:44 by vkhlghat          #+#    #+#             */
/*   Updated: 2022/04/25 18:52:48 by vkhlghat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_PUSH_SWAP_H
# define LIB_PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <limits.h>

typedef struct s_list
{
	int				data;
	unsigned int	index;				
	struct s_list	*next;
}					t_list;

t_list	*create_stack(int ac, char **av);
char	*ft_itoa(int n);
char	**ft_check_extremums(char **arr);
char	*ft_argstostr(char **arr);
char	**ft_arrfree(char **tab);
int		ft_arrlen(char **arr);
t_list	**ft_arrtolst(char **arr);
int		ft_atoi(char *str);
t_list	**ft_indexing_lst(t_list **lst);
int		ft_isdigit(char c);
int		ft_isspace(char c);
void	ft_lstfree(t_list **lst);
int		ft_lstlen(t_list **lst);
void	ft_print_lst(t_list **lst);
void	ft_putnbr(int n);
int		ft_putstr(char *str);
char	**ft_split(char *s, char c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
char	**ft_strtoarr(char *s);
int		ft_sort_check(t_list **lst_1, t_list **lst_2);
int		ft_sort3(t_list **a, t_list **b);
int		ft_sort5(t_list **a, t_list **b);
void	ft_sort100(t_list **a, t_list **b);
void	ft_sort500(t_list **a, t_list **b);
void	ft_sort_all(t_list **a, t_list **b);
void	ft_node_to_top_a(t_list **lst, int start, int end);
void	ft_node_to_top_a_with_ss(t_list **a, t_list **b, int start, int end);
void	ft_node_to_top_b(t_list **lst, int start, int end);
void	ft_max_from_b_to_a(t_list **a, t_list **b);
int		ft_find(t_list **lst, unsigned int start, int unsigned end);
int		ft_rr2(t_list **a, t_list **b, int flag);
void	push(t_list **stack_out, t_list **stack_in);
void	rev_rotate(t_list **stack);
void	rev_rotate_ab(t_list **stack_a, t_list **stack_b);
void	rotate(t_list **stack);
void	rotate_ab(t_list **stack_a, t_list **stack_b);
void	swap(t_list **stack);
void	swap_ab(t_list **stack_a, t_list **stack_b);
int		command(t_list **stack_a, t_list **stack_b, char *s);
void	command_bonus(t_list **stack_a, t_list **stack_b, char *s);
char	*ft_strjoin_upd(char *s1, char const *s2);
char	*ft_strchr_upd(const char *s, int c);
char	*ft_copy(char *s1, char *s2);
char	*read_from_file(int fd, char *temp);
char	*upto_first_nl_or_0(char *str);
char	*after_nl(char *str);
char	*get_next_line(int fd);

#endif
