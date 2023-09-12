/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <zolfagharipour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:51:50 by mzolfagh          #+#    #+#             */
/*   Updated: 2023/09/05 12:51:54 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned long int	f_size;
	void				*ptr;

	f_size = nmemb * size;
	if (f_size == 0)
		return (NULL);
	if (f_size > 2147483647)
		return (NULL);
	ptr = malloc(f_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, f_size);
	return (ptr);
}
