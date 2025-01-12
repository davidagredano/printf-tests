/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/12 20:16:00 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

static void	test_print_char(int c, const char *desc)
{
	int	ret;

	ft_print_test_desc(desc);
	ret = printf("%c", c);
	ft_print_return_value(ret, "printf");
	ret = ft_printf("%c", c);
	ft_print_return_value(ret, "ft_printf");
}

int	main(void)
{
	ft_print_test_header("Unit tests for specifier 'c'");
	test_print_char('A', "A");
	test_print_char('0', "0");
	test_print_char('1', "1");
	test_print_char('\0', "\\0");
	test_print_char('\t', "\\t");
	test_print_char(0, "0 // As int");
	test_print_char(200, "200 // As int");
}
