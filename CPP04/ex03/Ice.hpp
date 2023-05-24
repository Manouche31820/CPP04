#ifndef ICE_HPP
# define ICE_HPP

#include <iostream>

class Ice:public AMateria
{
	protected:
		std::string _type;
		
	public:

	Ice(void);
	Ice(std::string const & type);
	std::string const & getType() const; //Returns the materia type
	virtual Ice* clone() const = 0;
	virtual void use(ICharacter& target);
	~Ice(void);

	};

#endif