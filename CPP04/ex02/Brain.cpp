#include "Brain.hpp"


	Brain::Brain(void){
		std::cout << "Default Brain constructor called" << std::endl;
	}

	Brain& Brain::operator=(const Brain& b){
		if (this != &b){
			for (int i = 0; i != 100; i++)
			this->ideas[i] = b.ideas[i];
		}
		return (*this);
	}

	Brain::Brain(const Brain& a){
		*this = a;
	}


	Brain::~Brain(void){
		std::cout << "Brain destructor called properly" << std::endl;
	}