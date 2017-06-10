/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rporcon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:17:47 by rporcon           #+#    #+#             */
/*   Updated: 2015/11/24 18:16:23 by rporcon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_toupper(int c)
{
	if (c >= 65 && c <= 90)
		return (c);
	else if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}