/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rkultaev <rkultaev@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 09:02:45 by rkultaev          #+#    #+#             */
/*   Updated: 2022/10/04 13:05:20 by rkultaev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv) {
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            for (int j = 0; argv[i][j]; j++) {
                std::cout << (char)toupper(argv[i][j]);
            }
        }
        std::cout << std::endl;
    } else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}

// int main (int argc, char **argv)
// {
// 	if (argc > 1)
// 	{
// 		int i = 1;
// 		while (argc > i)
// 		{
// 			int j = 0;
// 			while (argv[i][j])
// 			{
// 				std::cout << (char) toupper(argv[i][j]);
// 				j++;
// 			}
// 			i++;
// 		}
// 		std::cout << std::endl;
// 	}
// 	else
// 		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" <<
// std::endl;

// 	return (0);
// 	}
