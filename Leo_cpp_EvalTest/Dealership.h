#pragma once
#include <string>
#include <vector>
#include "Gender.h"
#include "Color.h"
#include "Car.h"
#include "Person.h"

class Dealership
{
private:
	std::vector<Person> mExistingPersons;
	std::vector<Car> mExistingCars;
	std::vector<Car> mPersonalCars;

public:
	void CreatePerson();
	void CreateCar();
	void BuyCar(Person& seller);
	void SellCar(Person& buyer, Car& car);
};

