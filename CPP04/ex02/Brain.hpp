#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{

public:

	Brain(void);
	Brain& operator=(const Brain&);
	Brain(const Brain&);

	virtual ~Brain(void);

private:
	
	std::string ideas[100];
};


#endif