#pragma once
#include <string>
#include "Gender.h"
#include "Color.h"
#include "Car.h"
#include "Person.h"

class Dealership
{

public:
	void CreatePerson();
	void CreateCar();
	void BuyCar(Person& seller);
	void SellCar(Person& buyer, Car& car);
};

