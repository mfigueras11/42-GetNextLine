/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 13:59:07 by mfiguera          #+#    #+#             */
/*   Updated: 2018/02/09 17:11:41 by mfiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(void)
{
	int fd;
	char *line;
	int ret;

	fd = open("get_next_line.c", O_RDONLY);
	while ((ret = get_next_line(fd, &line)) != 0 && ret != -1)
		ft_putendl(line);
	close(fd);
	return (0);
}
