#include "ft_printf.h"
#include <stdio.h>
	/*
int	main(void)
{

	int	ft_ret;
	int	printf_ret;

	ft_ret = ft_printf("Test char: %c\n", 'A');
	printf_ret = printf("Test char: %c\n", 'A');
	printf("ft_printf return = %d | printf return = %d\n\n", ft_ret, printf_ret);

	ft_ret = ft_printf("Test str: %s\n", "Hello world");
	printf_ret = printf("Test str: %s\n", "Hello world");
	printf("ft_printf return = %d | printf return = %d\n\n", ft_ret, printf_ret);

	ft_ret = ft_printf("Test int: %d\n", 42);
	printf_ret = printf("Test int: %d\n", 42);
	printf("ft_printf return = %d | printf return = %d\n\n", ft_ret, printf_ret);

	ft_ret = ft_printf("Test unsigned: %u\n", 4294967295u);
	printf_ret = printf("Test unsigned: %u\n", 4294967295u);
	printf("ft_printf return = %d | printf return = %d\n\n", ft_ret, printf_ret);

	ft_ret = ft_printf("Test hex low: %x\n", 48879);
	printf_ret = printf("Test hex low: %x\n", 48879);
	printf("ft_printf return = %d | printf return = %d\n\n", ft_ret, printf_ret);

	ft_ret = ft_printf("Test hex up: %X\n", 48879);
	printf_ret = printf("Test hex up: %X\n", 48879);
	printf("ft_printf return = %d | printf return = %d\n\n", ft_ret, printf_ret);

	ft_ret = ft_printf("Percent: %%\n");
	printf_ret = printf("Percent: %%\n");
	printf("ft_printf return = %d | printf return = %d\n\n", ft_ret, printf_ret);

	ft_ret = ft_printf("Pointer: %p\n", &ft_ret);
	printf_ret = printf("Pointer: %p\n", &ft_ret);
	printf("ft_printf return = %d | printf return = %d\n", ft_ret, printf_ret);


	return (0);
}
*/

int	main(void)
{
	int	a;

	ft_printf("Edge d: %d\n", -2147483648);
	printf("Edge d: %d\n", -2147483648);

	ft_printf("Zero u: %u\n", 0u);
	printf("Zero u: %u\n", 0u);

	ft_printf("Null str: %s\n", NULL);
	printf("Null str: %s\n", NULL);

	a = 42;
	ft_printf("Null ptr: %p\n", NULL);
	printf("Null ptr: %p\n", NULL);

	ft_printf("Real ptr: %p\n", &a);
	printf("Real ptr: %p\n", &a);

	return (0);
}
