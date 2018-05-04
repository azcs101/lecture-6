#include <iostream>

class Animal {
public:
	const char *name;
	int legs;

	void describe();
};

void Animal::describe() {
	std::cout << "Name: " << name << "\n" << "Legs: " << legs << "\n";
}

int main() {

	Animal wolf;
	wolf.name = "Wolf";
	wolf.legs = 4;

	wolf.describe();


	return 0;
}
