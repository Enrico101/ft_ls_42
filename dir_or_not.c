/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dir_or_not.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 14:53:35 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 12:41:54 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	dir_or_not(const char *path, char *temp)
{
	int			x;
	struct stat	buf;

	x = 0;
	stat(path, &buf);
	if (S_ISDIR(buf.st_mode))
	{
		temp[x] = 'd';
		x++;
	}
	else
	{
		temp[x] = '-';
		x++;
	}
	return (x);
}
