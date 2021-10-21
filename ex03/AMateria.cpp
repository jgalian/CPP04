#include "AMateria.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AMateria::AMateria()
{
	std::cout << "AMateria's DEFAULT CONSTRUCTOR called" << std::endl;
	return ;
}

AMateria::AMateria( std::string const & type )
{
	std::cout << "AMateria's CONSTRUCTOR called" << std::endl;
	this->type = type;
	return ;
}

AMateria::AMateria( const AMateria & src )
{
	std::cout << "AMateria's COPY CONSTRUCTOR called" << std::endl;
	this->type = src.getType();
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AMateria::~AMateria()
{
	std::cout << "AMateria's DEFAULT DESTRUCTOR called" << std::endl;
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

AMateria &		AMateria::operator = ( AMateria const & rhs )
{
	std::cout << "AMateria's OPERATOR = called" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void			AMateria::use( ICharacter & target )
{
	std::cout << "* uses " << this->type << " at " << target.getName() << " *" << std::endl;
	return ;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

std::string const &		AMateria::getType() const
{
	return (this->type);
}


/* ************************************************************************** */
