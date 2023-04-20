#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " AAAA " << std::endl;
	delete j;
	j = i;
	std::cout << j->getType() << " BBBB " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	Dog w;
	Dog p = w;
	/*const Animal *z[100];	
	for (int i = 0; i < 50; i++)
		z[i] = new Cat();
	for (int i = 50; i < 100; i++)
		z[i] = new Dog();
	for (int i = 10; i < 100; i++)
		delete z[i];*/
	return (0);
}
