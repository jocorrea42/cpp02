/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anyela <anyela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:21:20 by anyela            #+#    #+#             */
/*   Updated: 2024/01/29 10:30:41 by anyela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
    private:
        int                 _value;
        static const int    _frac;

    public:
        Fixed(void);
        ~Fixed(void);
        Fixed(Fixed const &copy);
        Fixed &operator = (Fixed const &copy);
        int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
#endif
