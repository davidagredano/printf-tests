/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s_bonus_tests.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/18 16:05:46 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_print_s_bonus_test(const char *spec);
static void	ft_print_s_bonus_test_value(char *s, const char *spec);
static void	ft_print_s_bonus_test_null(const char *spec);

void	ft_print_s_bonus_tests(void)
{
	ft_print_test_header("Unit tests for specifier 's' with bonus");

	ft_print_test_desc("Flags");
	ft_print_s_bonus_test("|%s|%#s|%0s|%-s|% s|%+s|");

	ft_print_test_desc("Field width (8) > Strlen (6)");
	ft_print_s_bonus_test("|%8s|%#8s|%08s|%-8s|% 8s|%+8s|");

	ft_print_test_desc("Strlen (6) > Field width (2)");
	ft_print_s_bonus_test("|%2s|%#2s|%02s|%-2s|% 2s|%+2s|");

	ft_print_test_desc("Precision (8) > Strlen (6)");
	ft_print_s_bonus_test("|%.8s|%#.8s|%0.8s|%-.8s|% .8s|%+.8s|");

	ft_print_test_desc("Strlen (6) > Precision (2)");
	ft_print_s_bonus_test("|%.2s|%#.2s|%0.2s|%-.2s|% .2s|%+.2s|");

	ft_print_test_desc("Field width (7) > Strlen (6) > Precision (3)");
	ft_print_s_bonus_test("|%7.3s|%#7.3s|%07.3s|%-7.3s|% 7.3s|%+7.3s|");

	ft_print_test_desc("Precision (8) > Strlen (6) > Field width (3)");
	ft_print_s_bonus_test("|%3.8s|%#3.8s|%03.8s|%-3.8s|% 3.8s|%+3.8s|");

	ft_print_test_desc("Strlen (6) > Precision (4) > Field width (3)");
	ft_print_s_bonus_test("|%3.4s|%#3.4s|%03.4s|%-3.4s|% 3.4s|%+3.4s|");

	ft_print_test_desc("Field width (8) > Precision (7) > Strlen (6)");
	ft_print_s_bonus_test("|%8.7s|%#8.7s|%08.7s|%-8.7s|% 8.7s|%+8.7s|");

	ft_print_test_desc("Precision (8) > Field width (7) > Strlen (6)");
	ft_print_s_bonus_test("|%7.8s|%#7.8s|%07.8s|%-7.8s|% 7.8s|%+7.8s|");

	ft_print_test_desc("Strlen (6) > Field width (3) > Precision (0)");
	ft_print_s_bonus_test("|%3.0s|%#3.0s|%03.0s|%-3.0s|% 3.0s|%+3.0s|");

	ft_print_test_desc("Strlen (6) > Precision (3) > Field width (0)");
	ft_print_s_bonus_test("|%0.3s|%#0.3s|%00.3s|%-0.3s|% 0.3s|%+0.3s|");

	ft_print_test_desc("Strlen (6) > Field width (0) > Precision (0)");
	ft_print_s_bonus_test("|%0.0s|%#0.0s|%00.0s|%-0.0s|% 0.0s|%+0.0s|");

	ft_print_test_desc("NULL fit");
	ft_print_s_bonus_test_null("|%.0s|%.1s|%.2s|%.3s|%.4s|%.5s|%.6s|%.7s|");
	ft_print_s_bonus_test_null("|%0s|%1s|%2s|%3s|%4s|%5s|%6s|%7s|");

	printf("\n\n");
}

static void	ft_print_s_bonus_test(const char *spec)
{
	char	*s;

	s = "Hello!";
	ft_print_s_bonus_test_value(s, spec);
	ft_print_s_bonus_test_value(NULL, spec);
}

static void	ft_print_s_bonus_test_value(char *s, const char *spec)
{
	int		ret;

	printf("%s%s, %s%s\n", CYAN, spec, s, COLOR_RESET);
	ret = printf(spec, s, s, s, s, s, s);
	ft_print_return_value(ret, "printf");
	ret = ft_printf(spec, s, s, s, s, s, s);
	ft_print_return_value(ret, "ft_printf");
}

static void	ft_print_s_bonus_test_null(const char *spec)
{
	int		ret;

	printf("%s%s, %s%s\n", CYAN, spec, NULL, COLOR_RESET);
	ret = printf(spec, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	ft_print_return_value(ret, "printf");
	ret = ft_printf(spec, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
	ft_print_return_value(ret, "ft_printf");
}
