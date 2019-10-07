/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   group_perm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:06:41 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/06 08:57:37 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	group_perm(const char *path, char *temp, int x)
{
	struct stat buf;

	stat(path, &buf);
	if (buf.st_mode & S_IRGRP)
		temp[x] = 'r';
	else
		temp[x] = '-';
	x++;
	if (buf.st_mode & S_IWGRP)
		temp[x] = 'w';
	else
		temp[x] = '-';
	x++;
	if (buf.st_mode & S_IXGRP)
		temp[x] = 'x';
	else
		temp[x] = '-';
	x++;
	return (x);
}
