/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzimand <lnzimand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 09:31:03 by lnzimand          #+#    #+#             */
/*   Updated: 2019/07/11 09:10:37 by lnzimand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"
#include "libft/libft.h"

int				main(int argc, char **argv)
{
	char		*line = NULL;
	int			fd = open(argv[1], O_RDONLY);

    while (get_next_line(fd, &line) == 1)
    {
        ft_putendl(line);
        ft_strdel(&line);
    }
    sleep(60);
	close(fd);
	return (0);
}
