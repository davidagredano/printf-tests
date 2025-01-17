/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x_bonus_tests.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/17 20:01:20 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_print_x_bonus_test_value(unsigned n, const char *spec)
{
	int		ret;

	printf("%s%s, %u%s\n", CYAN, spec, n, COLOR_RESET);
	ret = printf(spec, n, n, n, n, n, n);
	ft_print_return_value(ret, "printf");
	ret = ft_printf(spec, n, n, n, n, n, n);
	ft_print_return_value(ret, "ft_printf");
}

static void	ft_print_X_bonus_test_value(unsigned n, const char *spec)
{
	int		ret;

	printf("%s%s, %u%s\n", CYAN, spec, n, COLOR_RESET);
	ret = printf(spec, n, n, n, n, n, n);
	ft_print_return_value(ret, "printf");
	ret = ft_printf(spec, n, n, n, n, n, n);
	ft_print_return_value(ret, "ft_printf");
}

static void	ft_print_x_bonus_test(const char *spec)
{
	ft_print_x_bonus_test_value(7777777, spec);
	ft_print_x_bonus_test_value(0, spec);
}

static void	ft_print_X_bonus_test(const char *spec)
{
	ft_print_X_bonus_test_value(7777777, spec);
	ft_print_X_bonus_test_value(0, spec);
}

void	ft_print_x_bonus_tests(void)
{
	ft_print_test_header("Unit tests for specifier 'x' and 'X' with bonus");

	ft_print_test_desc("Flags");
	ft_print_x_bonus_test("|%x|%#x|%0x|%-x|% x|%+x|");
	ft_print_X_bonus_test("|%X|%#X|%0X|%-X|% X|%+X|");

	ft_print_test_desc("Field width (8) > Strlen (6)");
	ft_print_x_bonus_test("|%8x|%#8x|%08x|%-8x|% 8x|%+8x|");
	ft_print_X_bonus_test("|%8X|%#8X|%08X|%-8X|% 8X|%+8X|");

	ft_print_test_desc("Strlen (6) > Field width (2)");
	ft_print_x_bonus_test("|%2x|%#2x|%02x|%-2x|% 2x|%+2x|");
	ft_print_X_bonus_test("|%2X|%#2X|%02X|%-2X|% 2X|%+2X|");

	ft_print_test_desc("Precision (7) > Strlen (6)");
	ft_print_x_bonus_test("|%.7x|%#.7x|%0.7x|%-.7x|% .7x|%+.7x|");
	ft_print_X_bonus_test("|%.7X|%#.7X|%0.7X|%-.7X|% .7X|%+.7X|");

	ft_print_test_desc("Strlen (6) > Precision (2)");
	ft_print_x_bonus_test("|%.2x|%#.2x|%0.2x|%-.2x|% .2x|%+.2x|");
	ft_print_X_bonus_test("|%.2X|%#.2X|%0.2X|%-.2X|% .2X|%+.2X|");

	ft_print_test_desc("Field width (7) > Strlen (6) > Precision (3)");
	ft_print_x_bonus_test("|%7.3x|%#7.3x|%07.3x|%-7.3x|% 7.3x|%+7.3x|");
	ft_print_X_bonus_test("|%7.3X|%#7.3X|%07.3X|%-7.3X|% 7.3X|%+7.3X|");

	ft_print_test_desc("Precision (7) > Strlen (6) > Field width (3)");
	ft_print_x_bonus_test("|%3.7x|%#3.7x|%03.7x|%-3.7x|% 3.7x|%+3.7x|");
	ft_print_X_bonus_test("|%3.7X|%#3.7X|%03.7X|%-3.7X|% 3.7X|%+3.7X|");

	ft_print_test_desc("Strlen (6) > Precision (4) > Field width (3)");
	ft_print_x_bonus_test("|%3.4x|%#3.4x|%03.4x|%-3.4x|% 3.4x|%+3.4x|");
	ft_print_X_bonus_test("|%3.4X|%#3.4X|%03.4X|%-3.4X|% 3.4X|%+3.4X|");

	ft_print_test_desc("Field width (8) > Precision (7) > Strlen (6)");
	ft_print_x_bonus_test("|%8.7x|%#8.7x|%08.7x|%-8.7x|% 8.7x|%+8.7x|");
	ft_print_X_bonus_test("|%8.7X|%#8.7X|%08.7X|%-8.7X|% 8.7X|%+8.7X|");

	ft_print_test_desc("Precision (8) > Field width (7) > Strlen (6)");
	ft_print_x_bonus_test("|%7.8x|%#7.8x|%07.8x|%-7.8x|% 7.8x|%+7.8x|");
	ft_print_X_bonus_test("|%7.8X|%#7.8X|%07.8X|%-7.8X|% 7.8X|%+7.8X|");

	ft_print_test_desc("Strlen (6) > Field width (3) > Precision (0)");
	ft_print_x_bonus_test("|%3.0x|%#3.0x|%03.0x|%-3.0x|% 3.0x|%+3.0x|");
	ft_print_X_bonus_test("|%3.0X|%#3.0X|%03.0X|%-3.0X|% 3.0X|%+3.0X|");

	ft_print_test_desc("Strlen (6) > Precision (3) > Field width (0)");
	ft_print_x_bonus_test("|%0.3x|%#0.3x|%00.3x|%-0.3x|% 0.3x|%+0.3x|");
	ft_print_X_bonus_test("|%0.3X|%#0.3X|%00.3X|%-0.3X|% 0.3X|%+0.3X|");

	ft_print_test_desc("Strlen (6) > Field width (0) > Precision (0)");
	ft_print_x_bonus_test("|%0.0x|%#0.0x|%00.0x|%-0.0x|% 0.0x|%+0.0x|");
	ft_print_X_bonus_test("|%0.0X|%#0.0X|%00.0X|%-0.0X|% 0.0X|%+0.0X|");

	printf("\n\n");
}
