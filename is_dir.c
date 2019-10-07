/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_dir.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:46:15 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/06 08:57:59 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	is_dir(char *path)
{
	struct stat	buf;

	lstat(path, &buf);
	if (S_ISDIR(buf.st_mode))
		return (1);
	else if (S_ISREG(buf.st_mode))
		return (0);
	else
		return (-1);
}
