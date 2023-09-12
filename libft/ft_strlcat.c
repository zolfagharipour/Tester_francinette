/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <zolfagharipour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:22:32 by mzolfagh          #+#    #+#             */
/*   Updated: 2023/09/05 13:22:34 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check_dst(char *dst, size_t size)
{
	size_t	i;

	i = 0;
	while (*dst != '\0' && size != 0)
	{
		dst++;
		size--;
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		d_len;
	size_t		s_len;

	d_len = ft_check_dst(dst, size);
	s_len = ft_strlen(src);
	if (size == 0)
		return (d_len + s_len);
	if (size > d_len + 1)
		size -= d_len + 1;
	else
		return (d_len + s_len);
	if (size > s_len + 1)
		size = s_len + 1;
	dst += ft_strlen(dst);
	ft_memcpy(dst, src, size);
	dst[size] = '\0';
	return (d_len + s_len);
}

#include <stdio.h>
#include <bsd/string.h>
int main()
{
	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	printf ("%ld - %s\n", ft_strlcat(dest, src, 0), dest);
}