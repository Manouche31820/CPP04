#pragma once

#include "Animal.hpp"
#include <iostream>

class Cat: public Animal
{

public:

	Cat(void);
	Cat& operator=(const Cat&);
	Cat(const Cat&);
	std::string getType(void);
	void makeSound(void) const;

	virtual ~Cat(void);

};
