#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{
	public:

		Cat();
		Cat( Cat const & src );
		~Cat();

		Cat &		operator = ( Cat const & rhs );

		void		makeSound(void) const;

		void		getIdea(int) const;

	private:

		Brain *_brain;

};

#endif /* ************************************************************* CAT_H */
