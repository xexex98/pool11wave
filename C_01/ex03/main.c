/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 08:13:53 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/27 10:34:02 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int	*a;
	int	*b;
	int	div;
	int	mod;

	a = &div;
	b = &mod;
	ft_div_mod(12, 5, a, b);
	printf("a = %d\nb = %d\n", a, *b);
}
