/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 22:26:20 by tquence           #+#    #+#             */
/*   Updated: 2020/02/15 20:30:24 by tquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_push_swap.h"


void    command(char *line, t_stack *a, t_stack *b)
{
    if (ft_strcmp(line, "sa") == 0)
        sa(a);
    else if (ft_strcmp(line, "sb") == 0)
        sb(b);
    else if (ft_strcmp(line, "ss") == 0)
        ss(a, b);
    else if (ft_strcmp(line, "pa") == 0)
        pa(a, b);
    else if (ft_strcmp(line, "pb") == 0)
        pb(a, b);
    else if (ft_strcmp(line, "ra") == 0)
        ra(a);
    else if (ft_strcmp(line, "rb") == 0)
        rb(b);
    else if (ft_strcmp(line, "rr") == 0)
        rr(a, b);
    else if (ft_strcmp(line, "rra") == 0)
        rra(a);
    else if (ft_strcmp(line, "rrb") == 0)
        rrb(b);
    else if (ft_strcmp(line, "rrr") == 0)
        rrr(a, b);
	else
		ft_putstr_er("Error\n");
}

void    check(t_stack *a, t_stack *b)
{
    char    *line;

    while (get_next_line(STDIN_FILENO, &line))
    {
		command(line, a, b);
        free(line);
        line = NULL;
    }  
    if (line)
    {
        free(line);
        line = NULL;
    }
	if (is_sort(a) == 1 && b->size == 0)
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
}
