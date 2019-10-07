/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:30:10 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 16:37:11 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	funct(t_flags *flags, t_info *info)
{
	int z;

	z = 0;
	if (flags->a_flag == 1)
		while (info[z].n_direct_n)
		{
			ft_putstr(info[z].direct_n);
			ft_putchar('\n');
			free(info[z].direct_n);
			free(info[z].n_direct_n);
			z++;
		}
	else
		while (info[z].n_direct_n)
		{
			if (*info[z].direct_n != '.')
			{
				ft_putstr(info[z].direct_n);
				ft_putchar('\n');
			}
			free(info[z].direct_n);
			free(info[z].n_direct_n);
			z++;
		}
}
