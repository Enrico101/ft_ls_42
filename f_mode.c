/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_mode.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:29:31 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 17:23:43 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	f_mode(const char *path, t_info *perms)
{
	char		*temp;
	static int	x = 0;

	temp = ft_strnew(10);
	x = dir_or_not(path, temp);
	x = owner_perm(path, temp, x);
	x = group_perm(path, temp, x);
	x = other_perm(path, temp, x);
	x = 0;
	perms->perm = ft_strdup(temp);
	free(temp);
}
