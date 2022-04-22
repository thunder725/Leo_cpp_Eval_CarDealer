#include "Car.h"

Car::Car()
{
	mBrand = mModel = mLicensePlate = "";
	mColor = Color::Default;
	mCost = mMileage = mYearOfConstruction = 0;
}

Car::Car(std::string brand, std::string model, std::string licensePlate, int yearOfConstruction, int mileage, int cost, Color color)
{
	mBrand = brand;
	mModel = model;
	mLicensePlate = licensePlate;
	mYearOfConstruction = yearOfConstruction;
	mMileage = mileage;
	mCost = cost;
	mColor = color;
}

Car::~Car()
{
}

std::string Car::GetBrand()
{
	return mBrand;
}

std::string Car::GetModel()
{
	return mModel;
}

std::string Car::GetLicensePlate()
{
	return "(" + mLicensePlate + ")";
}

Color Car::GetColor()
{
	return mColor;
}

int Car::GetYearOfConstruction()
{
	return mYearOfConstruction;
}

int Car::GetMileage()
{
	return mMileage;
}

int Car::GetCost()
{
	return mCost;
}

void Car::Roll(int kmAmount)
{
	mMileage += kmAmount;
}

void Car::ChangeColor(Color newColor)
{
	mColor = newColor;
}

std::string Car::GetColorString()
{
	std::string colorName = "";

	switch (mColor)
	{
	case Color::White:
		colorName = "White";
		break;
	case Color::Black:
		colorName = "Black";
		break;
	case Color::Red:
		colorName = "Red";
		break;
	case Color::Blue:
		colorName = "Blue";
		break;
	case Color::Yellow:
		colorName = "Yellow";
		break;
	case Color::Lime:
		colorName = "Lime";
		break;
	case Color::Green:
		colorName = "Green";
		break;
	case Color::Silver:
		colorName = "Silver";
		break;
	case Color::Gray:
		colorName = "Gray";
		break;
	case Color::Purple:
		colorName = "Purple";
		break;
	case Color::Cyan:
		colorName = "Cyan";
		break;
	case Color::Magenta:
		colorName = "Magenta";
		break;
	case Color::Teal:
		colorName = "Teal";
		break;
	case Color::Crimson:
		colorName = "Crimson";
		break;
	case Color::Pink:
		colorName = "Pink";
		break;
	case Color::Beige:
		colorName = "Beige";
		break;
	case Color::Brown:
		colorName = "Brown";
		break;
	case Color::Olive:
		colorName = "Olive";
		break;
	case Color::Fuschia:
		colorName = "Fuschia";
		break;
	case Color::Navy:
		colorName = "Navy";
		break;
	}

	return colorName;
}
