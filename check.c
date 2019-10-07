/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:19:23 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/09 14:23:13 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	check(char c, t_flags *flags)
{
	if (c == 'l' && flags->l_flag != 1)
		flags->l_flag = 1;
	else if (c == 'R' && flags->re_flag != 1)
		flags->re_flag = 1;
	else if (c == 'a' && flags->a_flag != 1)
		flags->a_flag = 1;
	else if (c == 'r' && flags->r_flag != 1)
		flags->r_flag = 1;
	else if (c == 't' && flags->t_flag != 1)
		flags->t_flag = 1;
	else
		return (1);
	return (0);
}
