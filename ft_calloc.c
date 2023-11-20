/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maweiss <maweiss@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:20:38 by maweiss           #+#    #+#             */
/*   Updated: 2023/11/19 19:36:34 by maweiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	*ovfh(size_t nmemb, size_t size, size_t *res)
{
	*res = nmemb * size;
	if (nmemb != 0 && *res / nmemb != size)
		return (NULL);
	else
		return (res);
}

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*str;
	size_t	i;
	size_t	res;

	i = 0;
	if (!ovfh(nmemb, size, &res))
		return (NULL);
	else
		str = malloc(res);
	while (i <= res)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

/*
#include <unistd.h>

int	main(void)
{
	int	*arr;

	arr = ft_calloc(200, 4);
	ft_putstr_non_printable((char *)arr, 800);
}
*/