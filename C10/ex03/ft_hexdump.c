/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andre <andre@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:04:45 by andre             #+#    #+#             */
/*   Updated: 2024/10/08 21:28:53 by andre            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>		//For the read, close and write
#include <fcntl.h>		//For the open 
#include <string.h>		//For the sterror
#include <errno.h>		//For the errno
#include <libgen.h>		//For basename
#include <stdlib.h>		//For malloc and free

int ft_strlen(char *str)
{
	int	len;

	len = 0;
	while(str[len] != '\0')
		len++;
	return (len);
}

// Function that converts the number in hexdecimal
void	ft_putnbr_hex(unsigned int nb, int digits)
{
	char	hex[digits];
	char	*base = "0123456789abcdef";
	int	i;
	
	if (!hex)
		return;
	i = digits - 1;
	while (i >= 0)
	{
		hex[i--] = base[nb % 16];
		nb /= 16;
	}
	write(1, hex, digits);
}

// Function to print the content in hex and ascii
void	print_hexascii(unsigned char *buf, int bytes_read, unsigned int addr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	ft_putnbr_hex(addr, 8); // Print inical adress
	write(1, "  ", 2);
	while (i < 16) // Print the bytes in hex
	{
		if (i < bytes_read)
			ft_putnbr_hex(buf[i], 2);
		if (i % 2 == 1 && i < 15)
			write(1, " ", 1); // Space in odd numbers
		else
			write(1, " ", 1); // Empty bytes
		i++;
	}
	write(1, " |", 2); // We need to pritn | when we start printing in ASCII
	while(j < 16 && j < bytes_read)
	{
		if (buf[j] >= 32 && buf[j] <= 126)
			write(1, &buf[j], 1);
		else
			write(1, ".", 1);
		j++;
	}
	write(1, "|\n", 2);
}

// Function that will process the file
void	process_file(int fd)
{
	char	*buf;
	int	bytes_read;
	unsigned int addr;

	addr = 0;
	if (fd < 0)
	{
		write(2, strerror(errno), ft_strlen(strerror(errno)));
		return;
	} 
	buf = (char *)malloc(16 * sizeof(char));
	if (!buf)
		return;
	while ((bytes_read = read(fd, buf, 16)) > 0)
	{
		print_hexascii(buf, bytes_read, addr);
		addr += 16;
	}
	free(buf);
	if (bytes_read < 0)
		write(2, strerror(errno), ft_strlen(strerror(errno)));
}

void ft_hexdump(char *filename)
{
    int fd;

    fd = open(filename, O_RDONLY);
    if (fd < 0)
    {
        write(2, strerror(errno), strlen(strerror(errno)));
        write(2, "\n", 1);
        return;
    }
    process_file(fd);
    close(fd);
}
int	main(int ac, char **av)
{
	if (ac < 2)
	{
		write(2, "To few arguments", 16);
		return 1;
	}
	ft_hexdump(av[1]);

	return 0;
}
