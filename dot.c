/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dot.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 10:21:16 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/08 11:15:37 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int	dot(const char *str)
{
	char letter;
	char up_letter;

	letter = 'a';
	up_letter = 'A';
	while (letter <= 'z' && up_letter <= 'Z')
	{
		if (str[1] == letter || str[1] == up_letter)
			return (1);
		letter++;
		up_letter++;
	}
	return (0);
}
