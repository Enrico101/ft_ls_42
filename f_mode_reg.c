/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_mode_reg.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:24:13 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 13:52:20 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	f_mode_reg(const char *path)
{
	char		*temp;
	static int	x = 0;

	temp = ft_strnew(10);
	x = dir_or_not(path, temp);
	x = owner_perm(path, temp, x);
	x = group_perm(path, temp, x);
	x = other_perm(path, temp, x);
	x = 0;
	ft_putstr(temp);
	ft_putchar(' ');
	free(temp);
}
