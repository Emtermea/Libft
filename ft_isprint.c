/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtermea <emtermea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:58:28 by emtermea          #+#    #+#             */
/*   Updated: 2014/11/05 15:36:32 by emtermea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdlib.h>

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126 && c >= 0)
		return (1);
	else
		return (0);
}
