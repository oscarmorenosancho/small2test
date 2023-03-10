/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:58:20 by omoreno-          #+#    #+#             */
/*   Updated: 2023/03/09 12:38:04 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	main(int argc, char const *argv[])
{
	int		i;
	char	rec[20];
	int		rec_c;
	char	done;
	int		exit_when_read0;

	done = 'q';
	exit_when_read0 = 0;
	if (argc > 1)
		done = argv[1][0];
	exit_when_read0 = (argc == 1);
	rec_c = 1;
	while (rec_c > 0)
	{
		rec_c = read(0, rec, 20);
		if (rec_c < 0)
		{
			write(2, "read failed\n", 12);
			return (1);
		}
		if (exit_when_read0 && rec_c == 0)
		{
			write(2, "exit\n", 5);
			return (0);
		}
		if (rec_c > 0)
		{
			if (rec_c > 1 && rec[0] == done && rec[1] == '\n')
				return (0);
			write(1, rec, rec_c);
		}
	}
	return (1);
}
