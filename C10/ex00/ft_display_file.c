/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:04:53 by andre             #+#    #+#             */
/*   Updated: 2024/09/25 19:05:05 by andre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <fcntl.h>

// Function to show the content of the arquive
void	ft_display_file(char *filename)
{
	int		fd;        // File descriptor,
	char	buf[1024];        // Fixed buffer of 1024 for reading, 1024 bytes is a reasonable default for general-purpose file reading
	int		br;         // Number of bytes read

	// Open the arquive in read only mode
	fd = open(filename, O_RDONLY);
	if (fd == -1) // Verify if we can open the arqeuive correctly
	{
		write(2, "Cannot read file.\n", 18); // Error messsage for de stderr
		return;
	}

	// Reads the content and writes in the stdout
	while ((br = read(fd, buf, sizeof(buf))) > 0)
	{
		write(1, buf, br); 
	}

	// Closes the arquive
	close(fd);
}

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		write(2, "File name missing.\n", 19); 
		return (1);
	}
	if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20); 
		return (1);
	}
	ft_display_file(av[1]);
	return (0);
}