/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/05 18:05:31 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/08 14:56:45 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	int	i;
	int	j;

	i = 'z';
	j = 'Y';
	while (i > 'a')
	{
		write(1, &i, 1);
		i--;
		i--;
		write(1, &j, 1);
		j--;
		j--;
	}
	write(1, "\n", 1);
	return (0);
}