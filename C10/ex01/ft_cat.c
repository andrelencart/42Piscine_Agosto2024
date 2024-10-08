/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:51:32 by andre             #+#    #+#             */
/*   Updated: 2024/09/27 18:43:06 by andre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>		//For the read, close and write
#include <fcntl.h>		//For the open 
#include <string.h>		//For the sterror
#include <errno.h>		//For the errno
#include <libgen.h>		//For basename

// Function to calculate the leght of a string
int	ft_strlen(char *str)
{
	int	len;
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

// Functions shows error messages
void	display_error(char *prog_name, char *filename)
{
	write(2, prog_name, ft_strlen(prog_name));
	write(2, ": ", 2);
	write(2, filename, ft_strlen(filename));
	write(2, ": ", 2);
	write(2, strerror(errno), ft_strlen(strerror(errno)));
	write(2, "\n", 1);
}

// Function that allows to concatenate a file and show the content in the stdout
void	ft_cat(char *prog_name, char	*filename)
{
	int	fd;		// File Descriptor
	char buf[1024];		// Buffer size, 1024 becouse optimizes and needs to be less than 30kb
	ssize_t		br;         // Number of bytes read

	fd = open(filename, O_RDONLY); // Open file in read only mode
	if (fd == -1)
	{
		display_error(prog_name, filename);
		return -1;
	}
	while ((br = read(fd, buf, sizeof(buf))) > 0)
	{
		write(1, buf, br);
	}
	if (br == -1)
		display_error(prog_name, filename);

	close(fd);
}

int	main(int ac, char **av)
{
	int	i;
	char	*prog_name = basename(av[0]); // So it obtains the name of the programe
	
	i = 1;
	if (ac < 2)
	{
		write(2, "File name missing.\n", 19); 
		return 1;
	}
	while (ac > i)
	{
		ft_cat(prog_name, av[i]);
		i++;
	}
	return 0;
}