/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 16:12:58 by qallain           #+#    #+#             */
/*   Updated: 2022/07/18 16:19:53 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

unsigned int 	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int k;

	i = 0;
	k = 0;
	 if (size == 0)
        return 0;
    while (dest[i] != '\0')
        i++;
    while (i < size - 1 && src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (i + j);
}
