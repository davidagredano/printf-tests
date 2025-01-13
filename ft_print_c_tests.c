/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/13 12:55:43 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_print_c_test(int c, const char *desc)
{
	int	ret;

	ft_print_test_desc(desc);
	ret = printf("%c", c);
	ft_print_return_value(ret, "printf");
	ret = ft_printf("%c", c);
	ft_print_return_value(ret, "ft_printf");
}

void	ft_print_c_tests(void)
{
	ft_print_test_header("Unit tests for specifier 'c'");
	ft_print_c_test('A', "A");
	ft_print_c_test('0', "0");
	ft_print_c_test('1', "1");
	ft_print_c_test('\0', "\\0");
	ft_print_c_test('\t', "\\t");
	ft_print_c_test(0, "0 // As int");
	ft_print_c_test(200, "200 // As int");
	printf("\n\n");
}
