#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog()
{
	std::cout << "Dog's class default constructor called" << std::endl;
	this->type = "Dog";
	this->_brain = new Brain;
	return ;
}

Dog::Dog( const Dog & src )
{
	std::cout << "Dog's class copy constructor called" << std::endl;
	*this = src;
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	std::cout << "Dog's class destructor called" << std::endl;
	delete this->_brain;
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Dog &	Dog::operator = ( Dog const & rhs )
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

void	Dog::makeSound(void) const
{
	std::cout << "Woof woof" << std::endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
