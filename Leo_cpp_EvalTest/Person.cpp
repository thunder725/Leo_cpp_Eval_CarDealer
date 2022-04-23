#include <iostream>
#include "Person.h"

using namespace std;

Person::Person()
{
	mBirthDay = mBirthMonth = mBirthYear = 1;
	mFirstName = "John";
	mLastName = "Doe";
	mMoneyAmount = 0;
	mCar = Car();
	mGender = Gender::Other;
	mCustomGender = "Unknown";

	cout << "The person " << mFirstName << " " << mLastName << " has been created.\n";
}

Person::Person(std::string firstName, std::string lastName, int birthDay, int birthMonth, int birthYear, int money, Car car, Gender gender)
{
	mFirstName = firstName;
	mLastName = lastName;

	if (birthDay < 1 || birthDay > 31)
	{
		cout << "\n Birth day not within [1;31], setting to default value 1\n";
		mBirthDay = 1;
	}
	else
	{
		mBirthDay = birthDay;
	}
	
	if (birthMonth < 1 || birthMonth > 12)
	{
		cout << "\n Birth month not within [1;12], setting to default value 1\n";
		mBirthMonth = 1;
	}
	else
	{
		mBirthMonth = birthMonth;
	}

	mBirthYear = birthYear;

	mCar = car;

	mMoneyAmount = money;
	mGender = gender;
	mCustomGender = "";

	cout << "The person " << mFirstName << " " << mLastName << " has been created.\n";
}

Person::Person(std::string firstName, std::string lastName, int birthDay, int birthMonth, int birthYear, int money, Car car, Gender gender, std::string customGender)
{
	mFirstName = firstName;
	mLastName = lastName;

	mBirthDay = birthDay;
	mBirthMonth = birthMonth;
	mBirthYear = birthYear;

	mCar = car;

	mMoneyAmount = money;
	mGender = gender;
	mCustomGender = customGender;

	cout << "The person " << mFirstName << " " << mLastName << " has been created.\n";
}

Person::~Person()
{
}

std::string Person::GetFirstName()
{
	return mFirstName;
}

std::string Person::GetLastName()
{
	return mLastName;
}

int Person::GetBirthDay()
{

	return mBirthDay;
}

int Person::GetBirthMonthNumber()
{
	return mBirthMonth;
}

std::string Person::GetBirthMonth()
{
	switch (mBirthMonth)
	{
	case 1:
		return "January";
		break;
	case 2:
		return "February";
		break;
	case 3:
		return "March";
		break;
	case 4:
		return "April";
		break;
	case 5:
		return "May";
		break;
	case 6:
		return "June";
		break;
	case 7:
		return "July";
		break;
	case 8:
		return "August";
		break;
	case 9:
		return "September";
		break;
	case 10:
		return "October";
		break;
	case 11:
		return "November";
		break;
	case 12:
		return "December";
		break;
	default:
		cout << "====\nWRONG MONTH: " << mBirthMonth << " - ERROR\n====\n";
		break;
	}

	return std::string();
}

int Person::GetBirthYear()
{
	return mBirthYear;
}

void Person::GetFullBirthDay()
{

	cout << GetBirthDay() << "/" << GetBirthMonthNumber() << "/" << GetBirthYear();
}

int Person::GetMoneyAmount()
{
	return mMoneyAmount;
}

std::string Person::GetGender()
{
	string gender = "";

	switch (mGender)
	{
	case Gender::Male:
		gender = "Male";
		break;
	case Gender::Female:
		gender = "Female";
		break;
	case Gender::NonBinary:
		gender = "Non Binary";
		break;
	case Gender::Other:
		gender = mCustomGender;
		break;
	}

	return gender;
}

std::string Person::GetPronouns()
{
	string pronoun = "";

	switch (mGender)
	{
	case Gender::Male:
		pronoun = "his";
		break;
	case Gender::Female:
		pronoun = "her";
		break;
	case Gender::NonBinary:
		pronoun = "their";
		break;
	case Gender::Other:
		pronoun = "their";
		break;
	}

	return pronoun;
}

Car* Person::GetCar()
{
	return &mCar;
}

bool Person::HasCar()
{
	string brand = mCar.GetBrand();
	


	return (brand != ""); // Does my car have a real brand or is it empty (no car) ?
}

void Person::IntroduceThemselves()
{
	cout << GetFirstName() << " " << GetLastName() << " was born on the ";
	GetFullBirthDay();
	cout << " and is a " << GetGender() << endl;

	cout << GetFirstName() << " " << GetLastName() << " has " << GetMoneyAmount() << "$";

	if (HasCar())
	{
		cout << " and has a " << mCar.GetBrand() << " " << mCar.GetModel() <<  mCar.GetLicensePlate() << ".\n";
	}
	else
	{
		cout << " and has no car.\n";
	}
}

void Person::BuyCar(Car& target)
{
	if (mMoneyAmount < target.GetCost())
	{
		cout << "Not enough money! The car costs " << target.GetCost() << " but " << GetFirstName() << " only has " << GetMoneyAmount() << "€\n";
	}
	else
	{
		mCar = target;
		mMoneyAmount -= target.GetCost();
		cout << GetFirstName() << " has successfully bought " << mCar.GetBrand() << " " << mCar.GetModel() << endl;
	}
}

void Person::SellCar()
{
	if (HasCar())
	{
		ChangeMoneyAmount(mCar.GetCost());
		mCar = Car();
	}
}

void Person::ChangeMoneyAmount(int value)
{
	mMoneyAmount += value;
	if (mMoneyAmount < 0)
	{
		mMoneyAmount = 0;
	}
}

void Person::RollInCar(int kmAmount)
{
	if (HasCar())
	{
		mCar.Roll(kmAmount);
		cout << GetFirstName() << " rolls with " << GetPronouns() << " " << mCar.GetModel() << " " << mCar.GetLicensePlate() << " for " << kmAmount << "km.\n";
	}
}

void Person::PaintCar(Color newColor)
{
	if (HasCar())
	{
		mCar.ChangeColor(newColor);
		cout << GetFirstName() << " paints " << GetPronouns() << " car " << mCar.GetColorString() << endl;
	}
}
