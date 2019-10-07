/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   owner_perm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 14:53:49 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 12:41:30 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	owner_perm(const char *path, char *temp, int x)
{
	struct stat buf;

	stat(path, &buf);
	if (buf.st_mode & S_IRUSR)
		temp[x] = 'r';
	else
		temp[x] = '-';
	x++;
	if (buf.st_mode & S_IWUSR)
		temp[x] = 'w';
	else
		temp[x] = '-';
	x++;
	if (buf.st_mode & S_IXUSR)
		temp[x] = 'x';
	else
		temp[x] = '-';
	x++;
	return (x);
}
