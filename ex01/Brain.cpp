#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain's class default constructor called" << std::endl;
	for(size_t i = 0; i < 100; i++)
		this->_ideas[i] = "idea" + std::to_string(i);
	return ;
}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain's class copy constructor called" << std::endl;
	*this = src;
	return ;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain's class destructor called" << std::endl;
	return ;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &		Brain::operator = ( Brain const & rhs )
{
	if ( this != &rhs )
	{
		for (size_t i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
