/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amanchon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/11 17:17:41 by amanchon          #+#    #+#             */
/*   Updated: 2016/03/24 18:31:22 by amanchon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	char	*d;

	d = dest + ft_strlen(dest);
	while (*src != '\0')
		*d++ = *src++;
	*d = '\0';
	return (dest);
}
