/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x_caps_bonus_tests.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/16 09:23:53 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_print_x_caps_bonus_test(const char *spec, const char *desc)
{
	int				ret;
	char			*full_desc;
	unsigned int	u;

	u = 7654321;
	full_desc = ft_strjoin(spec, desc);
	ft_print_test_desc(full_desc);
	ret = printf(spec, u, u, u, u, u, u);
	ft_print_return_value(ret, "printf");
	ret = ft_printf(spec, u, u, u, u, u, u);
	ft_print_return_value(ret, "ft_printf");
	free(full_desc);
}

void	ft_print_x_caps_bonus_tests(void)
{
	ft_print_test_header("Unit tests for specifier 'X' with bonus");
	ft_print_x_caps_bonus_test("|%X|%#X|%0X|%-X|% X|%+X|", " // Flags");
	ft_print_x_caps_bonus_test("|%8X|%#8X|%08X|%-8X|% 8X|%+8X|", " // Field width 8 > strlen 6");
	ft_print_x_caps_bonus_test("|%2X|%#2X|%02X|%-2X|% 2X|%+2X|", " // Strlen 6 > Field width 2");
	ft_print_x_caps_bonus_test("|%.8X|%#.8X|%0.8X|%-.8X|% .8X|%+.8X|", " // Precision 8 > Strlen 6");
	ft_print_x_caps_bonus_test("|%.2X|%#.2X|%0.2X|%-.2X|% .2X|%+.2X|", " // Strlen 6 > Precision 2");
	ft_print_x_caps_bonus_test("|%7.3X|%#7.3X|%07.3X|%-7.3X|% 7.3X|%+7.3X|", " // Field width 7 > Strlen 6 > Precision 3");
	ft_print_x_caps_bonus_test("|%3.8X|%#3.8X|%03.8X|%-3.8X|% 3.8X|%+3.8X|", " // Precision 8 > Strlen 6 > Field width 3");
	ft_print_x_caps_bonus_test("|%3.4X|%#3.4X|%03.4X|%-3.4X|% 3.4X|%+3.4X|", " // Strlen 6 > Precision 4 > Field width 3");
	ft_print_x_caps_bonus_test("|%9.7X|%#9.7X|%09.7X|%-9.7X|% 9.7X|%+9.7X|", " // Field width 9 > Precision 7 > Strlen 6");
	ft_print_x_caps_bonus_test("|%2.0X|%#2.0X|%02.0X|%-2.0X|% 2.0X|%+2.0X|", " // Field width 2 > Strlen 6 > Precision 0");
	printf("\n\n");
}
