/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatthan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:53:11 by npatthan          #+#    #+#             */
/*   Updated: 2021/10/27 17:54:20 by npatthan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	length_of_source(char *src)
{
	unsigned int	counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length_of_source_string;
	unsigned int	index;

	if (size > 0)
	{
		index = 0;
		while (src[index] != '\0' && index < size - 1)
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	length_of_source_string = length_of_source(src);
	return (length_of_source_string);
}
