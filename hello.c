/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myjo <myjo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 10:41:17 by myjo              #+#    #+#             */
/*   Updated: 2022/05/20 12:01:04 by myjo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void plus_1(void)
{
	char n;
	n = '0';
	while (n <= '9')
	{
		write(1,&n,1);
		n++;
	}

	return ;
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		while (*argv[1])
		{
			write(1, argv[1], 1);
			argv[1]++;
		}
	}
	write(1, "\n", 1);
	return (0);
	
}
