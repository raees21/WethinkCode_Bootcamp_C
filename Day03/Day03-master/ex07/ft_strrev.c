/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raziz <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 15:10:19 by raziz             #+#    #+#             */
/*   Updated: 2020/06/22 11:19:52 by raziz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int i;
	int j;
	int k;
	int temp;
	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}
	j = 0;
	k = i - 1;
	while(j < k)
	{
		temp = str[j];
		str[j] = str[k];
		str[k] = temp;
		j++;
		k--;
	}
	return str;
}


