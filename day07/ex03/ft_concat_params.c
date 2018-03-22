/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchappon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/15 17:59:38 by lchappon          #+#    #+#             */
/*   Updated: 2017/08/19 14:44:28 by lchappon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	put_string(int argc, char **argv, char *str)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 1;
	y = 0;
	while (x < argc)
	{
		y = 0;
		while (argv[x][y])
		{
			str[i] = argv[x][y];
			i++;
			y++;
		}
		if (x < argc - 1)
		{
			str[i] = '\n';
			i++;
		}
		x++;
	}
	str[i] = '\0';
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		x;
	int		y;
	int		size;

	x = 1;
	y = 0;
	size = 0;
	while (x < argc)
	{
		y = 0;
		while (argv[x][y])
			y++;
		size += y;
		x++;
	}
	str = (char*)malloc(sizeof(*str) * (size + argc - 1));
	put_string(argc, argv, str);
	return (str);
}
