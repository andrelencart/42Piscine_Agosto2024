/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcarva <andcarva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 14:40:44 by andcarva          #+#    #+#             */
/*   Updated: 2024/09/02 15:01:14 by andcarva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool1;

# define FALSE 0
# define TRUE 1

# define EVEN(nbr) (nbr % 2 == 0)

# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."

# define SUCCESS 0

#endif //FT_BOOLEAN_H