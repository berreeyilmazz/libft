#include "libft.h"

#include <fcntl.h>


int main()
{
	int fd;

	fd = open("deneme.txt", O_CREAT | O_RDWR);
	ft_putnbr_fd(6742, fd);
}
