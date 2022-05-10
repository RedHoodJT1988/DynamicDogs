#include <iostream>
#include "Dog.h"

using namespace std;

int main()
{
	Dog* myDogPtr = new Dog("Luna", "German Shepard");
	Dog* yourDogPtr = new Dog("Sophie", "Labordoodle");

	cout << "using arrow member access" << endl;
	cout << myDogPtr->getName() << " - " << myDogPtr->getBreed() << endl;
	cout << yourDogPtr->getName() << " - " << yourDogPtr->getBreed() << endl;

	cout << endl;

	cout << "using dereferencing and the dot operator" << endl;
	cout << (*myDogPtr).getName() << " - " << (*myDogPtr).getBreed() << endl;
	cout << (*yourDogPtr).getName() << " - " << (*yourDogPtr).getBreed() << endl;

	delete myDogPtr;
	delete yourDogPtr;

	myDogPtr = nullptr;
	yourDogPtr = nullptr;

	return 0;

}