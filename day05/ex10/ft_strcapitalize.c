/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchappon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/08 18:09:24 by lchappon          #+#    #+#             */
/*   Updated: 2017/08/16 13:31:17 by lchappon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		low(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int		up(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int		alpha(char c)
{
	if ((c >= 'a' && c <= 'z')
			|| (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (low(str[i]) && word == 0)
			str[i] = str[i] - 32;
		else if (up(str[i]) && word == 1)
			str[i] = str[i] + 32;
		if (alpha(str[i]))
			word = 1;
		else
			word = 0;
		i++;
	}
	return (str);
}
