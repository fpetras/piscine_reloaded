/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpetras <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/06 18:09:00 by fpetras           #+#    #+#             */
/*   Updated: 2017/11/06 18:52:09 by fpetras          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int		main(int ac, char **av)
{
	int		fd;
	char	buf;

	if (ac == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	if (ac > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		return (1);
	while (read(fd, &buf, 1) != 0)
		write(1, &buf, 1);
	close(fd);
	return (0);
}
