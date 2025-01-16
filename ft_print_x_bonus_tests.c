/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x_bonus_tests.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/09 09:47:07 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/16 08:44:29 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

static void	ft_print_x_bonus_test(const char *spec, const char *desc)
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

void	ft_print_x_bonus_tests(void)
{
	ft_print_test_header("Unit tests for specifier 'x' with bonus");
	ft_print_x_bonus_test("|%x|%#x|%0x|%-x|% x|%+x|", " // Flags");
	ft_print_x_bonus_test("|%8x|%#8x|%08x|%-8x|% 8x|%+8x|", " // Field width 8 > strlen 6");
	ft_print_x_bonus_test("|%2x|%#2x|%02x|%-2x|% 2x|%+2x|", " // Strlen 6 > Field width 2");
	ft_print_x_bonus_test("|%.8x|%#.8x|%0.8x|%-.8x|% .8x|%+.8x|", " // Precision 8 > Strlen 6");
	ft_print_x_bonus_test("|%.2x|%#.2x|%0.2x|%-.2x|% .2x|%+.2x|", " // Strlen 6 > Precision 2");
	ft_print_x_bonus_test("|%7.3x|%#7.3x|%07.3x|%-7.3x|% 7.3x|%+7.3x|", " // Field width 7 > Strlen 6 > Precision 3");
	ft_print_x_bonus_test("|%3.8x|%#3.8x|%03.8x|%-3.8x|% 3.8x|%+3.8x|", " // Precision 8 > Strlen 6 > Field width 3");
	ft_print_x_bonus_test("|%3.4x|%#3.4x|%03.4x|%-3.4x|% 3.4x|%+3.4x|", " // Strlen 6 > Precision 4 > Field width 3");
	ft_print_x_bonus_test("|%9.7x|%#9.7x|%09.7x|%-9.7x|% 9.7x|%+9.7x|", " // Field width 9 > Precision 7 > Strlen 6");
	ft_print_x_bonus_test("|%2.0x|%#2.0x|%02.0x|%-2.0x|% 2.0x|%+2.0x|", " // Field width 2 > Strlen 6 > Precision 0");
	printf("\n\n");
}
