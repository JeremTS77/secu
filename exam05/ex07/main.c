/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <>                                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/09 21:25:16 by                   #+#    #+#             */
/*   Updated: 2014/12/09 22:02:14 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int		main(void)
{
	int		fd;
	int		nbr;

	nbr = 0;
	while (1)
	{
		fd = open("/tmp/asiat_racer", O_RDONLY);
		if (fd == 3)
		{
			read(fd, &nbr, sizeof(int));
			printf("%d\n", nbr);
			return (nbr);
		}
	}
	return (0);
}
