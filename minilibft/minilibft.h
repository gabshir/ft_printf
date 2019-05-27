/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabshire <gabshire@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 04:38:26 by gabshire          #+#    #+#             */
/*   Updated: 2019/05/27 10:14:47 by gabshire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINILIBFT_H
# define MINILIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <wchar.h>

size_t	ft_strlen(const char *str);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlenu(const wchar_t *str);
size_t	ft_strlenuk(const wchar_t *str);

#endif
