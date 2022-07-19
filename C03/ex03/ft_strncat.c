/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 15:04:28 by qallain           #+#    #+#             */
/*   Updated: 2022/07/18 16:26:58 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char *ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int k;
	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i] != '\0' && k < nb)
	{
		dest[i] =src[k];
		i++;
		k++
	}
	dest[i] != '\0';
	return dest;
}
