#pragma once
#include <string>
#include "Gender.h"
#include "Color.h"

class Car
{

private:
	std::string mBrand;
	std::string mModel;
	Color mColor;
	std::string mLicensePlate;
	int mYearOfConstruction;
	int mMileage;
	int mCost;

public:
	// Constructors & Destructor
	Car();
	Car(std::string brand, std::string model, std::string licensePlate, int yearOfConstruction, int mileage, int cost, Color color);
	~Car();

	// Getters

	std::string GetBrand();
	std::string GetModel();
	std::string GetLicensePlate();

	Color GetColor();
	std::string GetColorString();

	int GetYearOfConstruction();
	int GetMileage();
	int GetCost();

	// Actions

	void Roll(int kmAmount);
	void ChangeColor(Color newColor);


};

