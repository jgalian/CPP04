#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

/*
* In this exercice we have learned:
*	- When a class have a virtual method, it also needs a virtual destructor. If not, compiler will probably complain.
*	  This is necessary because an object could be instanciated as both, parent and child. And if the object is deleted
*	  as a father and destructor is not declared as virtual, it is going to use the father's destructor and the son's
*	  part of the object is not going to be freed.
*	- Shallow copy vs Deep copy. When using shallow copy, only copies the value of the variables in an object. But there
*	  is a problem when the variable is allocated on the heap because the shallow copy takes the adress and copy it to
*	  the second object. This way, both objects ended with a variable pointing to the same adress, which most of the time
*	  is a problem. To avoid this, the deep copy should allocate space for the second object variable and copies on it
*	  the value. But first, should check if the variable is already pointing to a allocated memory adress, and if so,
*	  should freed it in order to avoid memory leaks. The copy constructor should be explicitly defined.
*/

int main()
{
	// {
	// 	Cat gato1;
	// 	Cat gato2;

	// 	gato2 = gato1;
	// 	std::cout << std::endl;


	// }


	// {
	// 	Animal * gato1 = new Cat;
	// 	std::cout << std::endl;
	// 	Animal * gato2 = new Cat;
	// 	std::cout << std::endl;
	// 	*gato2 = *gato1;
	// 	std::cout << std::endl;
	// 	std::cout << gato1 << " " << gato2 << std::endl;
	// 	std::cout << std::endl;
	// 	delete gato1;
	// 	std::cout << std::endl;
	// 	delete gato2;
	// }


	// {
	// 	Animal * gato = new Cat;
	// 	std::cout << std::endl;
	// 	gato->makeSound();
	// 	std::cout << std::endl;
	// 	delete gato;
	// }
	// {
	// 	Cat *a = new Cat();
	// 	std::cout << std::endl;
	// 	Cat *tmp = new Cat();
	// 	std::cout << std::endl;
	// 	a->setType("hola");
	// 	*tmp = *a;
	// 	std::cout << std::endl;
	// 	delete a;
	// 	std::cout << std::endl;
	// 	std::cout << tmp->getType() << std::endl;
	// 	tmp->makeSound();
	// 	std::cout << std::endl;
	// 	delete tmp;
	// 	std::cout << std::endl;
	// }
	// std::cout << "---  Array  ---" << std::endl;
	// std::cout << std::endl;
	{
		Animal *animals[4];
		for (int i = 0; i < 4; i++)
		{
			if (i < 2)
			{
				animals[i] = new Dog();
				std::cout << std::endl;
			}
			else
			{
				animals[i] = new Cat();
				std::cout << std::endl;
			}
		}
		std::cout << "animals[0].getType() = " << animals[0]->getType() << std::endl;
		std::cout << "animals[2].getType() = " << animals[2]->getType() << std::endl;
		std::cout << "animals[1].makeSound() = "; animals[1]->makeSound();
		std::cout << "animals[3].makeSound() = "; animals[3]->makeSound();

		std::cout << std::endl;
		Animal otherAnimal(*animals[1]);
		//otherAnimal = *animals[1];
		std::cout << "otherAnimal.getType() = " << otherAnimal.getType() << std::endl;
		std::cout << "otherAnimal.makeSound() = "; otherAnimal.makeSound();

		std::cout << std::endl;
		for (int i = 0; i < 10; i++)
		{
			delete animals[i];
			std::cout << std::endl;
		}
	}
}
