#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "Animal.hpp"

class Cat : public Animal
{
	public:

		Cat();
		Cat( Cat const & src );
		~Cat();

		//Cat &		operator = ( Cat const & rhs );

		void		makeSound(void) const;

		//std::string	getType(void) const;

	private:

};

//std::ostream &		operator << ( std::ostream & o, Cat const & i );

#endif /* ************************************************************* CAT_H */
