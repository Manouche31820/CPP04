#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main()
{
Animal* meta[100];

int i = 0;

while (i!= 50){
	meta[i] = new Dog();
	i++;
}
while (i!= 100){
	meta[i] = new Cat();
	i++;
}
i = 0;
while (i != 100){
	meta[i]->makeSound();
	i++;
}
i = 0;
while (i != 100){
	delete meta[i++];
}
return 0;
}