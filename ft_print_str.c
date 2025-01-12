/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 16:23:32 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/12 15:31:07 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_tests.h"

static void	ft_print_expected_value(char *str)
{
	int	ret;

	ret = printf("%s", str);
	printf(" (%d)", ret);
	printf(" %s// printf (return value)%s\n", GRAY, COLOR_RESET);
}

static void	ft_print_return_value(void *str)
{
	int	ret;

	ret = ft_printf("%s", str);
	printf(" (%d)", ret);
	printf(" %s// ft_printf (return value)%s\n", GRAY, COLOR_RESET);
}

static void	test_print_str(char *str, const char *desc)
{
	ft_print_test_desc(desc);
	ft_print_expected_value(str);
	ft_print_return_value(str);
}

int	main(void)
{
	ft_print_test_header("Unit tests for specifier 's'");
	test_print_str("Hi", "Hi");
	test_print_str("Hello World", "Hello World");
	test_print_str("How are you?\nFine, thanks", "How are you?\\nFine, thanks");
	test_print_str("Legal string\0 Hidden part", "Legal string\\0 Hidden part");
	test_print_str(NULL, "NULL");
}
