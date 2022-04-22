#include "Dealership.h"
#include <string>
#include "Gender.h"
#include "Color.h"
#include "Car.h"
#include "Person.h"

using namespace std;

void Dealership::CreatePerson()
{
	string firstName = "";
	string lastName = "";
	int birthDay = 1;
	int birthMonth = 1;
	int birthYear = 1;
	int money = 1;
	Gender gender = Gender::Other;
	string customGender = "";

	Car car = Car();

	// Do the cin for everything with security checks everywhere


	Person(firstName,  lastName, birthDay, birthMonth, birthYear, money, car, gender, customGender);
}

void Dealership::CreateCar()
{

}

void Dealership::BuyCar(Person& seller)
{
}

void Dealership::SellCar(Person& buyer, Car& car)
{
}
