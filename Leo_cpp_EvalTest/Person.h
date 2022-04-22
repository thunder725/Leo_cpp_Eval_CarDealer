#pragma once
#include <string>
#include "Gender.h"
#include "Color.h"
#include "Car.h"

class Person
{

private:
	std::string mFirstName;
	std::string mLastName;

	int mBirthDay;
	int mBirthMonth;
	int mBirthYear;

	int mMoneyAmount;

	std::string mCustomGender; // if gender is "Other", ask the person their gender
	Gender mGender;

	Car mCar;

public:

	// Constructors
	Person();
	Person(std::string firstName, std::string lastName, int birthDay, int birthMonth, int birthYear, int money, Car car, Gender gender);
	Person(std::string firstName, std::string lastName, int birthDay, int birthMonth, int birthYear, int money, Car car, Gender gender, std::string customGender);

	~Person();


	// Getters
	std::string GetFirstName();
	std::string GetLastName();

	int GetBirthDay();
	int GetBirthMonthNumber();
	std::string GetBirthMonth();
	int GetBirthYear();
	void GetFullBirthDay();

	int GetMoneyAmount();

	std::string GetGender();
	std::string GetPronouns();

	Car* GetCar();
	bool HasCar();


	// Actions
	void IntroduceThemselves();
	
	void BuyCar(Car& target);
	void SellCar();

	void ChangeMoneyAmount(int value);
	void RollInCar(int kmAmount);

	void PaintCar(Color newColor);

};

