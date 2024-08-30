/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recursive_factorial.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 20:59:05 by andcarva          #+#    #+#             */
/*   Updated: 2024/08/29 22:07:31 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	rev_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * rev_factorial(nb - 1));
}

int main(void) 
{
    int number = 5;
    int factorial = rev_factorial(number);
    printf("Factorial of %d is: %d\n", number, factorial);

    return 0;
}