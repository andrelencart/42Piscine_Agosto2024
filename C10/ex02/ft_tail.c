/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:00:44 by andre             #+#    #+#             */
/*   Updated: 2024/10/03 16:54:02 by andre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>		//For the read, close and write
#include <fcntl.h>		//For the open 
#include <string.h>		//For the sterror
#include <errno.h>		//For the errno
#include <libgen.h>		//For basename
#include <stdlib.h>		//For malloc and free

int	ft_strlen(char *str)
{
	int	len;
	
	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	ft_atoi(char *str)
{
	int i;
	int result;
	int signal;

	i = 0;
	result = 0;
	signal = 1;
	while (str[i] != '\0' && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while (str[i] != '\0' && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * signal);
}

// Fucntion that reads abd shows the las n bytes of a file
int	open_seek_file(char *prog_name, char *filename, int n_bytes)
{
	int	fd;		// File Descriptor
	
	fd = open(filename, O_RDONLY); // Open file on read only
	if (fd == -1)
	{
		write(2, prog_name, ft_strlen(prog_name));
		write(2, ": ", 2);
		write(2, filename, ft_strlen(filename));
		write(2, ": ", 2);
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		write(2, "\n", 1);	
		return -1; // Indicate an error 
	}
	if (lseek(fd, -n_bytes, SEEK_END) < 0)
	{
		write(2, prog_name, ft_strlen(prog_name));
		write(2, ": ", 2);
		write(2, filename, ft_strlen(filename));
		write(2, ": ", 2);
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		write(2, "\n", 1);
		close (fd);
		return -1;
	}
	return (fd);
}

// Function that reads the file and shows the content
void	read_display_file(char *prog_name, int n_bytes)
{
	int	fd;	
	char	*buf;	// Buffer size that will be allocated with malloc
	ssize_t	br;		// Bytes read
		
	buf = malloc(n_bytes);
	if (!buf)
	{
		write(2, prog_name, ft_strlen(prog_name));
        write(2, ": Memory allocation error\n", 25);
		close (fd);
		return;
	}
	br = read(fd, buf, n_bytes); // Transforming the variable br in readable bytes in this case only n_bytes
	if (br < 0)
	{
		write(2, prog_name, ft_strlen(prog_name));
        write(2, ": Error reading the file\n", 24);
	}
	else
		write(1, buf, br); // Write to the stdout the bytes 
	free (buf);
}

void	ft_tail(char *prog_name, char *filename, int n_bytes)
{
	int fd;

	fd = open_seek_file(prog_name, filename, n_bytes);
	if (fd == -1)
		return;
	
	read_display_file(prog_name, n_bytes);
	close (fd);
}

int	main(int ac, char **av)
{
	char *prog_name;
	int n_bytes;
	int i;

	prog_name = basename(av[0]);
	if (ac < 4)
	{
		write(1, "To few arguments\n", 17);
		return 1;
	}
	n_bytes = ft_atoi(av[2]);
	if (n_bytes <= 0)
	{
		write(2, "Invalid number of bytes\n", 24);
		return 1;
	}
	i = 3;
	while (i < ac)
	{
		ft_tail(prog_name, av[i], n_bytes);
		i++;
	}
	return 0;
}
