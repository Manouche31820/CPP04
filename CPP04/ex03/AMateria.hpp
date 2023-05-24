#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class ICharater;
class AMateria
{
	public:

	AMateria(void);
	AMateria(std::string const & type);
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
	~AMateria(void);


	protected:
		std::string type;

	};

#endif