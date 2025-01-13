/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s_tests.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:23:32 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/13 12:57:36 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_print_s_test(const char *str, const char *desc)
{
	int	ret;

	ft_print_test_desc(desc);
	ret = printf("%s", str);
	ft_print_return_value(ret, "printf");
	ret = ft_printf("%s", str);
	ft_print_return_value(ret, "ft_printf");
}

void	ft_print_s_tests(void)
{
	ft_print_test_header("Unit tests for specifier 's'");
	ft_print_s_test("Hi", "Hi");
	ft_print_s_test("Hello World", "Hello World");
	ft_print_s_test("How are you?\nFine thanks", "How are you?\\nFine thanks");
	ft_print_s_test("Legal string\0Hidden part", "Legal string\\0Hidden part");
	ft_print_s_test(NULL, "NULL");
	printf("\n\n");
}
