/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maweiss <maweiss@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:08:17 by maweiss           #+#    #+#             */
/*   Updated: 2023/11/16 16:33:08 by maweiss          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(char *str)
{
	size_t	a;

	a = 0;
	while (*str)
	{
		a++;
		str++;
	}
	return (a);
}

char	*strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen((char *)s) - 1;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

int	main(void)
{
	printf("alkdfjaslddkjflekjfd013246546987a65135464621");
	printf("\n");
	printf("%s\n", strrchr("alkdfjaslddkjflekjfd013246546987a65135464621", 'a'));
}