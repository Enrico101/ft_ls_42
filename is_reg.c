/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_reg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/30 11:42:59 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 13:42:09 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	is_reg(const char *path)
{
	struct stat buf;

	stat(path, &buf);
	if (S_ISDIR(buf.st_mode))
		return (1);
	else if (S_ISREG(buf.st_mode))
		return (0);
	else
		return (2);
}
