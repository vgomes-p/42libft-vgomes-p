/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:57:26 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/10/16 16:12:39 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t numby)
{
	size_t	cnt;
	char	*dest1;
	char	*src1;

	cnt = 0;
	dest1 = (char *)dest;
	src1 = (char *)src;
	while (cnt < numby)
	{
		dest1[cnt] = src1[cnt];
		cnt++;
	}
	return (dest);
}

// https://onlinegdb.com/3UpW7x9xg 
// criar uma validação para que não faça nada se src for nulo
