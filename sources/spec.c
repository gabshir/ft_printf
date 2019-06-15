/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spec.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabshire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/21 16:54:19 by gabshire          #+#    #+#             */
/*   Updated: 2019/06/15 08:37:50 by gabshire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void 		spec(t_format *p)
{
	unsigned l;
	unsigned h;

	l = 0;
	h = 0;
	while (*p->str && (*p->str == 'l' || *p->str == 'j' ||
	*p->str == 'h' || *p->str == 'L' || *p->str == 'z'))
	{
		if (*p->str == 'l')
			++l;
		else if (*p->str == 'j' || *p->str == 'z')
			l += 2;
		else if (*p->str == 'h')
			++h;
		++p->str;
	}
	if (l == 1)
		p->r = 1;
	else if (l > 1)
		p->r = 2;
	else if (h == 1)
		p->r = 3;
	else if (h > 1)
		p->r = 4;
}

size_t			ft_start(t_format *p)
{
	if (p->tp == 'c' && (!p->r || p->r > 2))
		return (ft_char(p));
	if (p->tp == 'C' || (p->tp == 'c' && p->r > 0 && p->r <= 3))
		return (ft_charu(p, va_arg(p->arg, wint_t)));
	if (p->tp == 's')
		return (ft_printstr(p));
	if (p->tp == 'S')
		return (ft_printstru(p));
	if (p->tp == 'd' || p->tp == 'i' || p->tp == 'D')
		return (ft_flag_d_i(p));
	if (p->tp == 'u' || p->tp == 'U')
		return (ft_flag_u(p));
	if (p->tp == 'x' || p->tp == 'X' || p->tp == 'p'
	|| p->tp == 'o' || p->tp == 'O')
		return (ft_flag_x(p));
	if (p->tp == 'f' || p->tp == 'F')
		return (ft_float(p));
	if (p->tp == 'f' && p->r > 0 && p->r < 3)
		return (ft_floatlong(p));
	return (0);
}
