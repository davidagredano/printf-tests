/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:02:19 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/16 19:43:19 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

# define CYAN "\e[36m"
# define GRAY "\e[2;37m"
# define COLOR_RESET "\e[0m"

# include "../printf/ft_printf.h"

# include <limits.h>
# include <stdio.h>
# include <string.h>

// Utils
void	ft_print_test_header(const char *str);
void	ft_print_test_desc(const char *str);
void	ft_print_return_value(int val, const char *function);

// Unit tests
void	ft_print_c_tests(void);
void	ft_print_s_tests(void);
void	ft_print_p_tests(void);
void	ft_print_di_tests(void);
void	ft_print_u_tests(void);
void	ft_print_x_tests(void);
void	ft_print_X_tests(void);
void	ft_print_percent_tests(void);

// Unit tests (bonus)
void	ft_print_c_bonus_tests(void);
void	ft_print_s_bonus_tests(void);
void	ft_print_p_bonus_tests(void);
void	ft_print_u_bonus_tests(void);
void	ft_print_x_bonus_tests(void);
void	ft_print_x_caps_bonus_tests(void);

// Integration tests
void	ft_print_mixed_tests(void);
void	ft_isvalid_tests(void);
void	ft_parse_tests(void);

#endif
