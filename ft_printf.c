/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:00:02 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/12 21:26:57 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

void	ft_printf_tests(void)
{
	int	ret;

	ft_print_test_header("Integration tests");

	ft_print_test_desc("Hello %s!, World");
	ret = printf("Hello %s!", "World");
	ft_print_return_value(ret, "printf");
	ret = ft_printf("Hello %s!", "World");
	ft_print_return_value(ret, "ft_printf");

	ft_print_test_desc("My name is %s and I'm %d y.o., Alex, 15");
	ret = printf("My name is %s and I'm %d y.o.", "Alex", 15);
	ft_print_return_value(ret, "printf");
	ret = ft_printf("My name is %s and I'm %d y.o.", "Alex", 25);
	ft_print_return_value(ret, "ft_printf");

	ft_print_test_desc("%X and %x are equivalent to %i, 90000, 90000, 90000");
	ret = printf("%X and %x are equivalent to %i", 90000, 90000, 90000);
	ft_print_return_value(ret, "printf");
	ret = ft_printf("%X and %x are equivalent to %i", 90000, 90000, 90000);
	ft_print_return_value(ret, "ft_printf");

	ft_print_test_desc("uint %u don't fit in int %i, 3000000000, 3000000000");
	ret = printf("uint %u don't fit in int %i", 3000000000, 3000000000);
	ft_print_return_value(ret, "printf");
	ret = ft_printf("uint %u don't fit in int %i", 3000000000, 3000000000);
	ft_print_return_value(ret, "ft_printf");

	ft_print_test_desc("%s's first letter is %c, David, D");
	ret = printf("%s's first letter is %c", "David", 'D');
	ft_print_return_value(ret, "printf");
	ret = ft_printf("%s's first letter is %c", "David", 'D');
	ft_print_return_value(ret, "ft_printf");

	char	*str = "The address of this string is %p";
	ft_print_test_desc("The address of this string is %p, str");
	ret = printf(str, str);
	ft_print_return_value(ret, "printf");
	ret = ft_printf(str, str);
	ft_print_return_value(ret, "ft_printf");

	ft_print_test_desc("The %% sign is printed");
	ret = printf("The %% sign is printed");
	ft_print_return_value(ret, "printf");
	ret = ft_printf("The %% sign is printed");
	ft_print_return_value(ret, "ft_printf");

	ft_print_test_desc("Trying %r with an ilegal specifier, if works");
	ret = printf("Trying %r with an ilegal specifier", "if works");
	ft_print_return_value(ret, "printf");
	ret = ft_printf("Trying %r with an ilegal specifier", "if works");
	ft_print_return_value(ret, "ft_printf");

	ft_print_test_desc("More args than directives %s, arg1, arg2");
	ret = printf("More args than directives %s", "arg1", "arg2");
	ft_print_return_value(ret, "printf");
	ret = ft_printf("More args than directives %s", "arg1", "arg2");
	ft_print_return_value(ret, "ft_printf");

	ft_print_test_desc("More directives than args %s%s%s%s%s%s%s%s%s%s%s%s%s");
	printf("%s// this may cause a SEGV in both func%s\n", GRAY, COLOR_RESET);
	/*
	ret = printf("More directives than args %s%s%s%s%s%s%s%s%s%s%s%s%s");
	ft_print_return_value(ret, "printf");
	ret = ft_printf("More directives than args %s%s%s%s%s%s%s%s%s%s%s%s%s");
	ft_print_return_value(ret, "ft_printf");
	*/
}

int	main(void)
{
	ft_printf_tests();
}
