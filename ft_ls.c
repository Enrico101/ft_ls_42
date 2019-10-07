/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ls.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enradcli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 09:59:35 by enradcli          #+#    #+#             */
/*   Updated: 2019/09/09 14:49:29 by enradcli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	m_3(char **argv, t_info *info, t_flags *flags, int *a)
{
	int		b;
	int		k;

	file_coll(argv, info);
	info[*a - 1].links = 1;
	info_sort_2(flags, info, *a);
	b = 0;
	k = *(a) - 1;
	if (flags->re_flag == 1)
	{
		b++;
		k++;
	}
	while (b < k)
	{
		if (info[b].direct_n == NULL)
		{
			b++;
			k++;
		}
		l_for_reg(info[b].direct_n, flags, info, b);
		b++;
	}
	free(info);
}

void	m_2(char **argv, t_flags *flags, t_dir *dir_c)
{
	int		a;
	int		z;
	t_info	*info;

	a = get_space(argv, &z);
	if (a > 0)
	{
		a++;
		info = (t_info *)malloc(sizeof(t_info) * a);
		m_3(argv, info, flags, &a);
		ft_putchar('\n');
	}
	if (direct_counter(argv) > 0)
		args(argv, flags, dir_c);
	else if (a == 0 && z != 1)
		args(argv, flags, dir_c);
	free(dir_c);
}

int		space_for_dir(char **argv)
{
	int		x;
	int		y;

	x = 0;
	y = 1;
	while (argv[x])
	{
		if (is_dir(argv[x]) == 1)
			y = get_dir_size(argv[x], y);
		x++;
	}
	if (y == 1)
	{
		y = get_dir_size(".", y);
	}
	return (y);
}

void	start(int argc, char **argv, t_flags *flags)
{
	int		y;
	t_dir	*dir_c;

	if (flags->re_flag == 1)
	{
		y = space_for_dir(argv);
		dir_c = (t_dir *)malloc(sizeof(t_dir) * y);
	}
	else
	{
		y = argc;
		dir_c = (t_dir *)malloc(sizeof(t_dir) * argc);
	}
	if (argc > 1)
		m_2(argv, flags, dir_c);
	else
	{
		no_args(flags);
		free(dir_c);
	}
}

int		main(int argc, char *argv[])
{
	char	c;
	int		q;
	int		e;
	t_flags	flags;

	q = 0;
	c = flag_checker(argv, &flags, &e, q);
	if (e == 1)
		error_mess_01(c);
	if (e == 0)
		start(argc, argv, &flags);
	return (0);
}
