/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchappon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 13:46:55 by lchappon          #+#    #+#             */
/*   Updated: 2017/08/07 16:23:08 by lchappon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		max;
	char	tmp;

	i = 0;
	max = 0;
	while (str[max])
		max++;
	max--;
	while (i < max)
	{
		tmp = str[max];
		str[max] = str[i];
		str[i] = tmp;
		i++;
		max--;
	}
	return (str);
}
