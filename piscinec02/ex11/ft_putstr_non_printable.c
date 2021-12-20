/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaongma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:11:34 by jlaongma          #+#    #+#             */
/*   Updated: 2021/10/24 14:47:42 by jlaongma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_non_pritable_to_hexa(unsigned char c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	if (c / 16 > 0)
	{
		ft_putchar(hexa[c / 16]);
		ft_putchar(hexa[c % 16]);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(hexa[c]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] >= ' ' && str[index] <= '~')
		{
			ft_putchar(str[index]);
		}
		else
		{
			ft_putchar('\\');
			ft_non_pritable_to_hexa(str[index]);
		}
		index++;
	}
}
