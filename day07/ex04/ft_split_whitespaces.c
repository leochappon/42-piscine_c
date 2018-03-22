/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchappon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/21 12:17:00 by lchappon          #+#    #+#             */
/*   Updated: 2017/08/23 10:58:19 by lchappon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**words_count(char *str, char **tab)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
		i++;
	while (str[i])
	{
		i++;
		if (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
		{
			count++;
			while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
				i++;
		}
	}
	if (str[i - 1] != '\t' && str[i - 1] != '\n' && str[i - 1] != ' ')
		count++;
	tab = (char**)malloc(sizeof(*tab) * (count + 1));
	tab[count] = 0;
	return (tab);
}

char	**words_size(char *str, char **tab)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
		i++;
	while (str[i])
	{
		i++;
		if (str[i] == '\t' || str[i] == '\n' || str[i] == ' ' || str[i] == '\0')
		{
			tab[x] = (char*)malloc(sizeof(**tab) * (y + 1));
			x++;
			y = 0;
			while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
				i++;
		}
		y++;
	}
	return (tab);
}

char	**words_print(char *str, char **tab)
{
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	y = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
		i++;
	while (str[i])
	{
		tab[x][y] = str[i];
		i++;
		y++;
		if (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
		{
			tab[x][y] = '\0';
			x++;
			y = 0;
			while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ')
				i++;
		}
	}
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;

	tab = 0;
	tab = words_count(str, tab);
	tab = words_size(str, tab);
	tab = words_print(str, tab);
	return (tab);
}
