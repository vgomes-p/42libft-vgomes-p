/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 14:53:41 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/10/21 10:37:48 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	strlcpy(char *dest, const char *src, size_t size)
{
	size_t	cnt;

	cnt = 0;
	if (size == 0)
	{
		while (src[cnt])
			cnt++;
		return (cnt);
	}
	if (size > 0)
	{
		while (src[cnt] && cnt < (size - 1))
		{
			dest[cnt] = src[cnt];
			cnt++;
		}
		dest[cnt] = 0;
	}
	while (src[cnt])
		cnt++;
	return (cnt);
}

// https://onlinegdb.com/yfvFqZp9K
