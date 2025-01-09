/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:00:02 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/09 18:35:55 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

void	ft_printf_tests(void)
{
	/* Testing directives - args proportion */
	ft_printf("Same args than directives %s %s\n", "hello", "bye");
	ft_printf("More args than directives %s\n", "1", "2");
	//ft_printf("More directives than args % %\n", "1"); // May segfault

	/* Testing formats */
	ft_printf("My name is %s and I'm %d y.o.\n", "Alex", 15);
	ft_printf("%X and %x are equivalent to %i.\n", 123, 123, 123);
	char	*str = "The address of this string is %p.\n";
	ft_printf(str, (void *) str);
	
}

int	main(void)
{
	ft_printf_tests();
}
