#pragma once

#include "Animal.hpp"
#include <iostream>

class Dog: public Animal
{

public:

	Dog(void);
	Dog& operator=(const Dog&);
	Dog(const Dog&);
	std::string getType(void);
	void makeSound(void) const;

	virtual ~Dog(void);

};
