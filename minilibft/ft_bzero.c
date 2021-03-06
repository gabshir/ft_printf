/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabshire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 11:53:38 by gabshire          #+#    #+#             */
/*   Updated: 2019/06/15 07:47:17 by gabshire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*k;
	size_t			i;

	i = 0;
	k = (unsigned char*)s;
	while (i < n)
	{
		k[i] = k[i] << 8;
		++i;
	}
}
