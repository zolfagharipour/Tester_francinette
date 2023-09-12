/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <zolfagharipour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:25:54 by mzolfagh          #+#    #+#             */
/*   Updated: 2023/09/05 13:25:55 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*ptr;
	size_t	l_len;

	i = 0;
	l_len = ft_strlen(little);
	ptr = (char *)big;
	if (ft_strlen(little) == 0)
		return (ptr);
	while (i < len - l_len + 1 && *ptr != '\0' && len != 0)
	{
		if (ft_strncmp(ptr, little, l_len) == 0 && ft_strlen(ptr) >= l_len)
			return (ptr);
		ptr++;
		i++;
	}
	return (0);
}
