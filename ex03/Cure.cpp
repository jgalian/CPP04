#include "Cure.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cure::Cure()
{
	std::cout << "Cure's DEFAULT CONSTRUCTOR called" << std::endl;
	return ;
}

Cure::Cure( const Cure & src )
{
	std::cout << "Cure's COPY CONSTRUCTOR called" << std::endl;
	this->type = src.getType();
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cure::~Cure()
{
	std::cout << "Cure's DEFAULT DESTRUCTOR called" << std::endl;
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cure &			Cure::operator=( Cure const & rhs )
{
	std::cout << "Cure's OPERATOR = called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

	AMateria *	Cure::clone() const
	{
		AMateria * tmp = new Cure(*this);
		return (tmp);
	}

	void		Cure::use( ICharacter & target )
	{
		std::cout << "* heals " << target << "'s wounds *" << std::endl;
	}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
