/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_flag.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 15:47:26 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 11:09:11 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	set_flags(t_flags *ex_flag)
{
	ex_flag->l_flag = 0;
	ex_flag->re_flag = 0;
	ex_flag->a_flag = 0;
	ex_flag->r_flag = 0;
	ex_flag->t_flag = 0;
}
