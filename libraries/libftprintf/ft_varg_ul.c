/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_varg_ul.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mwuckert <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/20 19:20:01 by mwuckert          #+#    #+#             */
/*   Updated: 2019/09/06 20:16:08 by mwuckert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_varg_ul(t_print *sp)
{
	*CAST_UL(sp->arg) = (unsigned long)va_arg(sp->args, long);
}
