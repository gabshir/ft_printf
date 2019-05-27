/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenuk.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabshire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:12:17 by gabshire          #+#    #+#             */
/*   Updated: 2019/05/27 13:12:21 by gabshire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minilibft.h"

size_t	ft_strlenuk(const wchar_t *str)
{
	size_t i;
	size_t len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] <= 127)
			++len;
		else if (str[i] >= 127 && str[i] <= 2047)
			len += 2;
		else if (str[i] >= 2048 && str[i] <= 65535)
			len += 3;
		else if (str[i] >= 65536 && str[i] <= 2097151)
			len += 4;
		++i;
	}
	return (len);
}
