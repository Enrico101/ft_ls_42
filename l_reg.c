/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_reg.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:41:24 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 16:23:30 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	l_reg(const char *path)
{
	f_mode_reg(path);
	get_links_reg(path);
	get_owner_reg(path);
	get_group_reg(path);
	get_bytes_reg(path);
	get_m_time_reg(path);
	ft_putstr(path);
	ft_putchar('\n');
}
