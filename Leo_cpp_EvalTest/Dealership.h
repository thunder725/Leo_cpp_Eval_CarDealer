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
	std::vector<Person> mExistingPeople;
	std::vector<Car> mExistingCars;
	std::vector<Car> mPersonalCars;

public:
	Dealership();
	~Dealership();

	void CreatePerson();
	void CreateCar();
	void BuyCar(Person& seller);
	void SellCar(Person& buyer, Car& car);

	Person& GetPersonByIndex(int index);
	int GetNumberOfPeopleCreated();

	void DealWithPlayerInput();	

	void DisplayExistingPeople();
	void DisplayExistingCars();
	void DisplayDealershipOwnedCars();
	void DisplayPepleOwnedCars();


};

