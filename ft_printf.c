/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:00:02 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/11 12:49:50 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

void	ft_printf_tests(void)
{
	int	ret;

	/* Testing formats */
	printf("\nTesting formats");
	printf("\n***************\n");
	ret = ft_printf("Hello %s!", "World");
	printf(" | ret=%d\n", ret);
	ret = ft_printf("My name is %s and I'm %d y.o.", "Alex", 15);
	printf(" | ret=%d\n", ret);
	ret = ft_printf("%X and %x are equivalent to %i.", 123, 123, 123);
	printf(" | ret=%d\n", ret);
	ret = ft_printf("uint %u don't fit in int: %i.", 3000000000, 3000000000);
	printf(" | ret=%d\n", ret);
	ret = ft_printf("%s's first leter is %c.", "David", 'D');
	printf(" | ret=%d\n", ret);
	char	*str = "The address of this string is %p.";
	ret = ft_printf(str, (void *) str);
	printf(" | ret=%d\n", ret);
	ret = ft_printf("The %% sign is printed.");
	printf(" | ret=%d\n", ret);
	ret = ft_printf("Trying an ilegal specifier: %r.", "Works?");
	printf(" | ret=%d\n", ret);
	ret = printf("Trying an ilegal specifier: %r.", "Works?");
	printf(" | ret=%d\n", ret);
	ret = ft_printf("'0', 0, '1' ->  [%c] [%c] [%c] ", '0', 0, '1');
	printf(" | ret=%d\n", ret);
	ret = printf("'0', 0, '1' ->  [%c] [%c] [%c] ", '0', 0, '1');
	printf(" | ret=%d\n", ret);
	
	/* Testing directives - args proportion */
	printf("\nTesting directives - args proportion");
	printf("\n************************************\n");
	ret = ft_printf("Same args than directives %s, %s.", "hello", "bye");
	printf(" | ret=%d\n", ret);
	ret = ft_printf("More args than directives %s.", "1", "2");
	printf(" | ret=%d\n", ret);
	//ft_printf("More directives than args %s %s\n", "1"); // May segfault
}

int	main(void)
{
	ft_printf_tests();
}
