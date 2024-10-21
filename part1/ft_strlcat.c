/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgomes-p <vgomes-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 19:11:33 by vgomes-p          #+#    #+#             */
/*   Updated: 2024/10/21 11:10:11 by vgomes-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	cnt;
	size_t	cnt_s;

	cnt = 0;
	cnt_s = 0;
	while (dest[cnt] && cnt < size)
		cnt++;
	while (src[cnt_s] && (cnt + cnt_s + 1) < size)
	{
		dest[cnt + cnt_s] = src[cnt_s];
		cnt_s++;
	}
	if (cnt < size)
		dest[cnt + cnt_s] = '\0';
	return (cnt + ft_strlen(src));
}

// https://onlinegdb.com/YUGDlXXLcJH
