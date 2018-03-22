/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchappon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 11:29:33 by lchappon          #+#    #+#             */
/*   Updated: 2017/08/08 14:33:45 by lchappon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int h;
	int i;
	int j;

	h = 0;
	i = 0;
	j = 0;
	while (to_find[h])
		h++;
	if (h == 0)
		return (str);
	while (str[i])
	{
		while (str[i + j] == to_find[j])
		{
			if (j == h - 1)
				return (str + i);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}
