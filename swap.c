/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 13:51:07 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 12:00:19 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	swap(t_info *d_name, int z)
{
	char *temp;
	char *temp2;

	temp = ft_strnew(ft_strlen(d_name[z].n_direct_n));
	temp2 = ft_strnew(ft_strlen(d_name[z].direct_n));
	ft_strcpy(temp, d_name[z].n_direct_n);
	free(d_name[z].n_direct_n);
	ft_strcpy(temp2, d_name[z].direct_n);
	free(d_name[z].direct_n);
	d_name[z].n_direct_n = ft_strnew(ft_strlen(d_name[z + 1].n_direct_n));
	d_name[z].direct_n = ft_strnew(ft_strlen(d_name[z + 1].direct_n));
	ft_strcpy(d_name[z].n_direct_n, d_name[z + 1].n_direct_n);
	free(d_name[z + 1].n_direct_n);
	ft_strcpy(d_name[z].direct_n, d_name[z + 1].direct_n);
	free(d_name[z + 1].direct_n);
	d_name[z + 1].n_direct_n = ft_strnew(ft_strlen(temp));
	d_name[z + 1].direct_n = ft_strnew(ft_strlen(temp2));
	ft_strcpy(d_name[z + 1].n_direct_n, temp);
	ft_strcpy(d_name[z + 1].direct_n, temp2);
	free(temp);
	free(temp2);
}
