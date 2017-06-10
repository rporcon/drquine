/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rporcon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 14:54:55 by rporcon           #+#    #+#             */
/*   Updated: 2015/11/27 12:02:38 by rporcon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*c_src;
	char		*c_dst;
	char		*tmp_src;

	i = 0;
	c_src = (char *)src;
	c_dst = (char *)dst;
	if ((tmp_src = (char *)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	while (i < len)
	{
		tmp_src[i] = c_src[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		c_dst[i] = tmp_src[i];
		i++;
	}
	free(tmp_src);
	return (dst);
}
