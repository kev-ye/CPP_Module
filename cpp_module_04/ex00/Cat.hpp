/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kaye <kaye@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 12:45:38 by kaye              #+#    #+#             */
/*   Updated: 2021/08/05 15:25:27 by kaye             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : virtual public Animal {
	public:
		Cat(void);
		Cat(Cat const & src);
		virtual ~Cat(void);

		Cat & operator=(Cat const & rhs);
	
	public:
		void	makeSound(void) const;
};

#endif