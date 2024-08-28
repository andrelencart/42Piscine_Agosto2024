/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 20:01:15 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/28 19:14:36 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	if (nb <= 1)
	{
		return (1);
	}
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
int main(void) 
{
    int number = 5;
    int factorial = ft_recursive_factorial(number);
    printf("Factorial of %d is: %d\n", number, factorial);

    return 0;
}
*/
