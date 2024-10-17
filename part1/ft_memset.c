/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:26:27 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/10/16 11:11:32 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	*ft_memset(void *by, int var, size_t len)
{
	unsigned char	*pmt;

	pmt = (unsigned char *)by;
	while (len > 0)
	{
		*pmt = (unsigned char)var;
		pmt++;
		len--;
	}
	return (by);
}

// https://onlinegdb.com/b78Ugdl95
