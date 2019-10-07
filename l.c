/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:47:53 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 17:30:13 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	l(const char *path, t_info *info)
{
	blocks(path, info);
	f_mode(path, info);
	get_links(path, info);
	get_owner(path, info);
	get_group(path, info);
	get_bytes(path, info);
	get_m_time(path, info);
}
