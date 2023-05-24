#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{

public:

	WrongAnimal(void);
	WrongAnimal& operator=(const WrongAnimal&);
	WrongAnimal(const WrongAnimal&);
	std::string getType(void) const;
	virtual void makeSound(void) const;

	virtual ~WrongAnimal(void);

protected:
	
	std::string type;
};


#endif