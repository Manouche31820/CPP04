#pragma once

#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat: public WrongAnimal
{

public:

	WrongCat(void);
	WrongCat& operator=(const WrongCat&);
	WrongCat(const WrongCat&);
	std::string getType(void);
	void makeSound(void) const;

	virtual ~WrongCat(void);

};
