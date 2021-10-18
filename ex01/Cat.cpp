#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat()
{
	std::cout << "Cat's class default constructor called" << std::endl;
	this->type = "Cat";
	this->_brain = new Brain;
	return ;
}

Cat::Cat( const Cat & src )
{
	std::cout << "Cat's class copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	std::cout << "Cat's class destructor called" << std::endl;
	delete this->_brain;
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat &	Cat::operator = ( Cat const & rhs )
{
	if ( this != &rhs )
	{
		this->type = rhs.getType();
		this->_brain = new Brain;
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void	Cat::makeSound(void) const
{
	std::cout << "Meaowwww meaooowwww" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
