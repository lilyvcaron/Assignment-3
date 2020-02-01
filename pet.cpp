#include <iostream>
#include "pet.h"
using namespace std;

Pet::Pet(int theAge, string theType, double theWeight)
{
  setPet(theAge, theType, theWeight);
}

void Pet::Pet(int theAge, string theType, double theWeight)
{
    age = theAge;
    type = theType;
    weight = theWeight;
}

int main()
{
  Pet pet1;
  Pet pet2;

  pet1.setPet(2, "cat", 12.4);
  pet2.setPet(7, "dog", 100.2);

  cout << "Pet 1" << endl;
  cout << "Type: " pet1.getType() << endl;
  cout << "Age: " pet1.getAge() << endl;
  cout << "Weight: " pet1.getWeight() << endl;
  cout << endl;

  cout << "Pet 2" << endl;
  cout << "Type: " << pet2.getType() << endl;
  cout << "Age: " << pet2.getAge() << endl;
  cout << "Weight: " << pet2.getWeight() << endl;

  return 0;
}
