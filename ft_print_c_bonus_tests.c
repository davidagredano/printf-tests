/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c_bonus_tests.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/17 17:53:54 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

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

static void	ft_print_c_bonus_test(const char *spec)
{
	ft_print_c_bonus_test_value('A', spec);
	ft_print_c_bonus_test_value('\0', spec);
}

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

	printf("\n\n");
}
