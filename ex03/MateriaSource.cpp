#include "MateriaSource.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

MateriaSource::MateriaSource()
{
	std::cout << "IMateriaSource's DEFAULT CONSTRUCTOR called" << std::endl;
	for (int i = 0; i < 4; i++)
		source[i] = NULL;
	return ;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	std::cout << "IMateriaSource's COPY CONSTRUCTOR called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (src.source[i] != NULL)
			this->source[i] = src.source[i]->clone();
	}
	return ;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

MateriaSource::~MateriaSource()
{
	std::cout << "IMateriaSource's DESTRUCTOR called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->source[i] != NULL)
			delete this->source[i];
	}
	return ;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

MateriaSource &		MateriaSource::operator = ( MateriaSource const & rhs )
{
	std::cout << "IMateriaSource's OPERATOR = called" << std::endl;
	if ( this != &rhs )
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->source[i] != NULL)
				delete this->source[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (rhs.source[i] != NULL)
				this->source[i] = rhs.source[i]->clone();
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

	void		MateriaSource::learnMateria( AMateria * m )
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->source[i] == NULL)
				this->source[i] = m;
		}
	}

	AMateria *	MateriaSource::createMateria( std::string const & type )
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->source[i]->getType() == type)
				return (this->source[i]->clone());
		}
		return (0);
	}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */
