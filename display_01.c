/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_01.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 14:04:08 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 17:55:56 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	display_01(t_info *info, int z)
{
	ft_putstr(info[z].perm);
	ft_putchar(' ');
	ft_putnbr(info[z].links);
	ft_putchar(' ');
	ft_putstr(info[z].owner);
	ft_putchar(' ');
	ft_putstr(info[z].group);
	ft_putchar(' ');
	ft_putnbr(info[z].bytes);
	ft_putchar(' ');
	ft_putstr(info[z].m_time);
	ft_putchar(' ');
	ft_putstr(info[z].direct_n);
	ft_putchar('\n');
}
