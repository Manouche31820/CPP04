#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{

public:

	Animal(void);
	Animal& operator=(const Animal&);
	Animal(const Animal&);
	std::string getType(void) const;
	virtual void makeSound(void) const;

	virtual ~Animal(void);

protected:
	
	std::string type;
};


#endif