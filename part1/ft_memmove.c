/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:10:48 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/10/17 14:52:32 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t numby)
{
	int	cnt;

	if (!dest && !src)
		return (0);
	cnt = 0;
	if ((size_t)dest - (size_t)src < numby)
	{
		cnt = numby - 1;
		while (cnt >= 0 && cnt < numby)
		{
			((unsigned char *)dest)[cnt] = ((unsigned char *)src)[cnt];
			cnt--;
		}
	}
	else
	{
		while (cnt < numby)
		{
			((unsigned char *)dest)[cnt] = ((unsigned char *)src)[cnt];
			cnt++;
		}
	}
	return (dest);
}
