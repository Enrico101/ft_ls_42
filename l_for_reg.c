/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_for_reg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:38:39 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 16:39:22 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	l_for_reg(const char *path, t_flags *f, t_info *info, int b)
{
	if (is_reg(path) == 0)
	{
		if (f->l_flag == 1)
		{
			l_reg(path);
			free(info[b].direct_n);
			free(info[b].n_direct_n);
		}
		else
		{
			ft_putstr(path);
			ft_putchar('\n');
			free(info[b].direct_n);
			free(info[b].n_direct_n);
		}
	}
}
