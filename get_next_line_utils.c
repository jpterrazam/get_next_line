/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:16:48 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/05/25 20:31:37 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strchr(const char *s, int c)
{
	if (s)
	{
		while (*s && (*s != (unsigned char) c))
			s++;
		if (*s == (unsigned char) c)
			return ((char *) s);
	}
	return (NULL);
}

char	*ft_strjoin(char *s1, const char *s2)
{
	char	*join_str;
	int		i;
	int		j;

	join_str = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (join_str == NULL)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		join_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
	{
		join_str[i] = s2[j];
		i++;
		j++;
	}
	join_str[i] = '\0';
	free(s1);
	return (join_str);
}

size_t	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	if (str)
	{
		while (str[len])
			len++;
	}
	return (len);
}
