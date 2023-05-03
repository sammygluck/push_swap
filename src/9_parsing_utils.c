/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgluck <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 12:56:47 by sgluck            #+#    #+#             */
/*   Updated: 2023/04/25 15:38:55 by sgluck           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_numbers(char *string)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!string)
		return (0);
	while (string[i])
	{
		if (string[i] == 32)
			count++;
		i++;
	}
	count++;
	return (count);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	number;
	int	sign;

	i = 0;
	number = 0;
	sign = 1;
	while ((str[i] > 8 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = (number * 10) + str[i] - '0';
		i++;
	}
	return (number * sign);
}

int     ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		 return (1);
	}
    return (0);
}

int	is_actual_number(const char *str)
{
	int	i;
	int	number;
	int	return_value;

	i = 0;
	number = 0;
	return_value = 0;
	while ((str[i] > 8 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = str[i]; 
		if (!ft_isdigit(number))
			return (0);
		if (ft_isdigit(number))
			return_value = 1;
		i++;
	}
	return (return_value);
}

int     is_number_within_bounds(const char *str)
{
        unsigned long int       number;
        int                                     i;
        int                                     sign;

        i = 0;
        number = 0;
        sign = 1;
        while ((str[i] > 8 && str[i] <= 13) || str[i] == 32)
                i++;
        if (str[i] == '-')
                sign *= -1;
        if (str[i] == '-' || str[i] == '+')
                i++;
        while (str[i] >= '0' && str[i] <= '9')
        {
                number = (number * 10) + str[i] - '0';
                if ((number > ((unsigned long int)INT_MAX + 1) && sign == -1) || (number > ((unsigned long int)INT_MAX && sign == 1)))
				{
					 printf("this is the number %ld \n", number);
					 return (0);
				}
                       
                i++;
        }
        return (1);
}


char	*ft_strtok(char *str, char delim)
{
	static char	*start;
	char		*token;

	if (str != NULL)
		start = str;
	if (start == NULL || *start == '\0')
		return (NULL);
	while (*start == delim)
		start++;
	if (*start == '\0')
	{
		start = NULL;
		return (NULL);
	}
	token = start;
	while (*start != '\0' && *start != delim)
		start++;
	if (*start != '\0')
	{
		*start = '\0';
		start++;
	}
	else
		start = NULL;
	return (token);
}
