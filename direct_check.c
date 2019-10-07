/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   direct_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 14:29:08 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 12:27:37 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	direct_check(t_dir *direct, int directs_coll)
{
	if (directs_coll == 0)
	{
		direct[0].direct_o = ft_strnew(1);
		ft_strcpy(direct[0].direct_o, ".");
	}
}
