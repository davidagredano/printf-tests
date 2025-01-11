/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_tests.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dagredan <dagredan@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 12:02:19 by dagredan          #+#    #+#             */
/*   Updated: 2025/01/11 15:10:54 by dagredan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_TESTS_H
# define PRINTF_TESTS_H

# define CYAN "\e[36m"
# define GRAY "\e[1;30m"
# define COLOR_RESET "\e[0m"

# include "../printf/ft_printf.h"

# include <limits.h>
# include <stdio.h>
# include <string.h>

void	ft_print_test_header(const char *str);
void	ft_print_test_desc(const char *str);

#endif
