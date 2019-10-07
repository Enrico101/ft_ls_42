/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flag_checker.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:46:53 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/09 14:23:22 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		error_check(char c)
{
	if (c == 'l')
		return (0);
	else if (c == 'R')
		return (0);
	else if (c == 'a')
		return (0);
	else if (c == 'r')
		return (0);
	else if (c == 't')
		return (0);
	else
		return (1);
}

char	flag_checker(char **flags, t_flags *ex_flag, int *a, int z)
{
	int x;
	int y;

	set_flags(ex_flag);
	x = 1;
	while (flags[x] && flags[x][0] == '-')
	{
		y = 1;
		while (flags[x][y])
		{
			if (z == 0)
				z = check(flags[x][y], ex_flag);
			if (z == 1)
				if (error_check(flags[x][y]) == 1)
				{
					*a = 1;
					return (flags[x][y]);
				}
			y++;
		}
		*a = 0;
		x++;
	}
	return (0);
}
