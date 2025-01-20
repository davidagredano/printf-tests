/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c_bonus_tests.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/20 13:08:33 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_print_c_bonus_test(const char *spec);
static void	ft_print_c_bonus_test_value(int c, const char *spec);
static void	ft_null_tests(void);

void	ft_print_c_bonus_tests(void)
{
	ft_print_test_header("Unit tests for specifier 'c' with bonus");

	ft_print_test_desc("Flags");
	ft_print_c_bonus_test("|%c|%#c|%0c|%-c|% c|%+c|");

	ft_print_test_desc("Field width (6) > Strlen (1)");
	ft_print_c_bonus_test("|%6c|%#6c|%06c|%-6c|% 6c|%+6c|");

	ft_print_test_desc("Strlen (1) > Field width (0)");
	ft_print_c_bonus_test("|%0c|%#0c|%00c|%-0c|% 0c|%+0c|");

	ft_print_test_desc("Precision (6) > Strlen (1)");
	ft_print_c_bonus_test("|%.6c|%#.6c|%0.6c|%-.6c|% .6c|%+.6c|");

	ft_print_test_desc("Strlen (1) > Precision (0)");
	ft_print_c_bonus_test("|%.0c|%#.0c|%0.0c|%-.0c|% .0c|%+.0c|");

	ft_print_test_desc("Field width (6) > Precision (3) > Strlen (1)");
	ft_print_c_bonus_test("|%6.3c|%#6.3c|%06.3c|%-6.3c|% 6.3c|%+6.3c|");

	ft_print_test_desc("Precision (6) > Field width (3) > Strlen (1)");
	ft_print_c_bonus_test("|%3.6c|%#3.6c|%03.6c|%-3.6c|% 3.6c|%+3.6c|");

	ft_print_test_desc("Field width (6) > Strlen (1) > Precision (0)");
	ft_print_c_bonus_test("|%6.0c|%#6.0c|%06.0c|%-6.0c|% 6.0c|%+6.0c|");

	ft_print_test_desc("Precision (6) > Strlen (1) > Field width (0)");
	ft_print_c_bonus_test("|%0.6c|%#0.6c|%00.6c|%-0.6c|% 0.6c|%+0.6c|");

	ft_print_test_desc("Strlen (1) > Field width (0) > Precision (0)");
	ft_print_c_bonus_test("|%0.0c|%#0.0c|%00.0c|%-0.0c|% 0.0c|%+0.0c|");

	ft_print_test_desc("Extra NUL char tests");
	ft_null_tests();

	printf("\n\n");
}

static void	ft_print_c_bonus_test(const char *spec)
{
	ft_print_c_bonus_test_value('A', spec);
	ft_print_c_bonus_test_value('\0', spec);
}

static void	ft_print_c_bonus_test_value(int c, const char *spec)
{
	int		ret;

	if (c == '\0')
		printf("%s%s, '\\0'%s\n", CYAN, spec, COLOR_RESET);
	else
		printf("%s%s, '%c'%s\n", CYAN, spec, c, COLOR_RESET);
	ret = printf(spec, c, c, c, c, c, c);
	ft_print_return_value(ret, "printf");
	ret = ft_printf(spec, c, c, c, c, c, c);
	ft_print_return_value(ret, "ft_printf");
}

static void	ft_null_tests(void)
{
	int		ret;

	printf("%s\"|%%-1c|%%-2c|%%-3c|\", '0', 0, '1'%s\n", CYAN, COLOR_RESET);
	ret = printf("|%-1c|%-2c|%-3c|", '0', 0, '1');
	printf(" (%d)\n", ret);
	ret = ft_printf("|%-1c|%-2c|%-3c|", '0', 0, '1');
	printf(" (%d)\n", ret);

	printf("%s\"|%%-1c|%%-2c|%%-3c|\", '2', '1', 0%s\n", CYAN, COLOR_RESET);
	ret = printf("|%-1c|%-2c|%-3c|", '2', '1', 0);
	printf(" (%d)\n", ret);
	ret = ft_printf("|%-1c|%-2c|%-3c|", '2', '1', 0);
	printf(" (%d)\n", ret);

	printf("%s\"|%%-1c|%%-2c|%%-3c|\", 0, '1', '2'%s\n", CYAN, COLOR_RESET);
	ret = printf("|%-1c|%-2c|%-3c|", 0, '1', '2');
	printf(" (%d)\n", ret);
	ret = ft_printf("|%-1c|%-2c|%-3c|", 0, '1', '2');
	printf(" (%d)\n", ret);

	printf("%s\"%%-5c\", '\\0'%s\n", CYAN, COLOR_RESET);
	ret = printf("%-5c", '\0');
	printf(" (%d)\n", ret);
	ret = ft_printf("%-5c", '\0');
	printf(" (%d)\n", ret);

	printf("%s\"{%%3c}\", '\\0'%s\n", CYAN, COLOR_RESET);
	ret = printf("{%3c}", '\0');
	printf(" (%d)\n", ret);
	ret = ft_printf("{%3c}", '\0');
	printf(" (%d)\n", ret);
}
