/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qallain <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 18:04:14 by qallain           #+#    #+#             */
/*   Updated: 2022/07/17 03:03:04 by qallain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// pas bon //

#include<unistd.h>

char *strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n, i++)
		dest[i] = '\0';
	return (dest);
}
