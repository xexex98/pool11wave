/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 21:22:31 by mbarra            #+#    #+#             */
/*   Updated: 2021/08/21 22:21:38 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] >= 'a' && str[i] <= 'z')
		{	
			str[i] = str[i] - 32;
			i++;
		}
	}
	return (str);
}