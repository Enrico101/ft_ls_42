/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_perm.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:15:46 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/06 09:48:36 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	other_perm(const char *path, char *temp, int x)
{
	struct stat buf;

	stat(path, &buf);
	if (buf.st_mode & S_IROTH)
		temp[x] = 'r';
	else
		temp[x] = '-';
	x++;
	if (buf.st_mode & S_IWOTH)
		temp[x] = 'w';
	else
		temp[x] = '-';
	x++;
	if (buf.st_mode & S_IXOTH)
		temp[x] = 'x';
	else
		temp[x] = '-';
	x++;
	return (x);
}
