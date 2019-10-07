/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_owner.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:42:44 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 12:35:10 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	get_owner(const char *path, t_info *owner)
{
	struct stat		buf;
	struct passwd	*pwd;
	uid_t			uid;

	lstat(path, &buf);
	uid = buf.st_uid;
	pwd = getpwuid(uid);
	owner->owner = pwd->pw_name;
}
