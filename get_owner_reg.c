/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_owner_reg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:35:51 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 13:33:10 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	get_owner_reg(const char *path)
{
	struct stat		buf;
	struct passwd	*pwd;
	uid_t			uid;

	lstat(path, &buf);
	uid = buf.st_uid;
	pwd = getpwuid(uid);
	ft_putstr(pwd->pw_name);
	ft_putchar(' ');
}
