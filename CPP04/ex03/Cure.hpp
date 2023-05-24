#ifndef CURE_HPP
# define CURE_HPP

#include <iostream>

class Cure:public AMateria
{
	protected:
		std::string _type;
		
	public:

	Cure(void);
	Cure(std::string const & type);
	std::string const & getType() const; //Returns the materia type
	virtual Cure* clone() const = 0;
	virtual void use(ICharacter& target);
	~Cure(void);

	};

#endif