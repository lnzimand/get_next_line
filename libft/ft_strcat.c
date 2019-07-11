/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 12:16:18 by lnzimand          #+#    #+#             */
/*   Updated: 2019/06/03 16:49:48 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *s1, const char *s2)
{
	int		c1;
	int		c2;

	c1 = 0;
	c2 = 0;
	while (s1[c1] != '\0')
		c1++;
	while (s2[c2] != '\0')
	{
		s1[c1] = s2[c2];
		c1++;
		c2++;
	}
	s1[c1] = '\0';
	return (s1);
}
