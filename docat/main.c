/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 14:58:20 by omoreno-          #+#    #+#             */
/*   Updated: 2023/03/06 15:56:17 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

int	main(int argc, char const *argv[])
{
	int		i;
	char	rec[20];
	int		rec_c;

	rec_c = 0;
	while (rec_c > 0)
	{
		rec_c = read(0, rec, 20);
		if (rec_c > 0)
			write(1, rec, rec_c);
	}
	while (i < argc)
	{
		write(1, argv[i], strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
