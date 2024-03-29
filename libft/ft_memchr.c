/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:32:13 by lnzimand          #+#    #+#             */
/*   Updated: 2019/06/11 12:21:53 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	c1;
	char	*dst;

	c1 = 0;
	dst = (char*)malloc(sizeof(s));
	dst = (char*)s;
	while (c1 < n)
	{
		if (*dst == c)
			return (dst);
		c1++;
		dst++;
	}
	return (NULL);
}
