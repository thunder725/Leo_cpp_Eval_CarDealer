#include "Dealership.h"
#include <string>
#include "Gender.h"
#include "Color.h"
#include "Car.h"
#include "Person.h"

using namespace std;

Dealership::Dealership()
{

}

Dealership::~Dealership()
{

}

void Dealership::CreatePerson()
{
	cout << "\nYou want to create a new person.\n";

	string firstName = "";
	string lastName = "";
	int birthDay = 1;
	int birthMonth = 1;
	int birthYear = 1;
	int money = 1;
	Gender gender = Gender::Other;
	string customGender = "";

	Car car = Car();

	bool stepFinished = false; // Bool for the next while loops

	// Do the cin for everything with security checks everywhere

	cout << "What should their first name be? \n";
	cin >> firstName;
	cout << "What should their last name be?\n";
	cin >> lastName;

	cout << "What day were they born on? (Number between 1 and 31)\n";
	int cinIntVariable = 0;

	while (!stepFinished)
	{
		cin >> cinIntVariable;

		if (cinIntVariable < 1 || cinIntVariable > 31)
		{
			cout << "Number outside of acceptable range. Please re-enter the correct value.\n";
			stepFinished = false;
		}
		else
		{
			birthDay = cinIntVariable;
			stepFinished = true;
		}
	}

	stepFinished = false;

	cout << "Which month were they born on? (Number between 1 and 12)\n";

	while (!stepFinished)
	{
		cin >> cinIntVariable;

		if (cinIntVariable < 1 || cinIntVariable > 12)
		{
			cout << "Number outside of acceptable range. Please re-enter the correct value.\n";
			stepFinished = false;
		}
		else
		{
			birthMonth = cinIntVariable;
			stepFinished = true;
		}
	}

	stepFinished = false;

	cout << "Which year were they born on?\n";
	cin >> birthYear;

	cout << "How much base money should they have? (in USD)\n";
	cin >> money;

	cout << "What should their gender be?\n";
	cout << "m = Male // f = Female // n = Non Binary // o = Other/Custom\n";

	string cinStringVariable = "";

	while (!stepFinished)
	{
		cin >> cinStringVariable;
			
		// Apparently we're not allowed to do a switch for strings... of course

		if (cinStringVariable == "m")
		{
			gender = Gender::Male;
			stepFinished = true;
		}
		else if (cinStringVariable == "f")
		{
			gender = Gender::Female;
			stepFinished = true;
		}
		else if (cinStringVariable == "n")
		{
			gender = Gender::NonBinary;
			stepFinished = true;
		}
		else if (cinStringVariable == "o")
		{
			gender = Gender::Other;

			cout << "What custom gender should they have?\n";
			cin >> cinStringVariable;

			customGender = cinStringVariable;

			stepFinished = true;
		}
		else
		{
			cout << "Incorrect format.\n Please only use 'm', 'f', 'n' or 'o'\n";
			stepFinished = false;
		}
	}

	cout << "Should this person have a car? (y/n)\n";
	stepFinished = false;

	while (!stepFinished)
	{
		cin >> cinStringVariable;
		if (cinStringVariable == "y")
		{
			cout << "Which car should this person have?\n";
			DisplayExistingCars();

			cin >> cinIntVariable;
			car = mExistingCars[cinIntVariable];

			stepFinished = true;
		}
		else if (cinStringVariable == "n")
		{
			// Car has already been assigned to empty
			stepFinished = true;
		}
		else
		{
			cout << "please enter a valid command\n";
			stepFinished = false;
		}
	}

	// Create and add the person
	mExistingPeople.push_back(Person(firstName,  lastName, birthDay, birthMonth, birthYear, money, car, gender, customGender));

	cout << endl << endl;
}

void Dealership::CreateCar()
{
	string brand, model, licensePlate;
	int yearOfConstruction, mileage, cost;
	Color color;

	cout << "Creating a new car\n" << "What brand should the car be?\n";
	cin >> brand;
	cout << "What model should the car be?\n";
	cin >> model;

	cout << "What's the license plate of the car?\nTIP: The formatting depends on the state.\n";
	cin >> licensePlate;

	cout << "Which year was this car created in?\n";
	cin >> yearOfConstruction;
	cout << "How many km has this car rolled on already? / What's its mileage? (in km)\n";
	cin >> mileage;
	cout << "How much should this car cost (in USD)\n";
	cin >> cost;

	bool stepFinished = false; // Bool for the next while loops

	// COLOR SWITCH LET'S GO

	string cinStringVariable = "";
	cout << "Which color should the car be?\n";
	cout << "Case-sensitive list:\n" << "White / Black / Red / Blue / Yellow\nLime / Green / Silver / Gray / Purple\n";
	cout << "Cyan / Magenta / Teal / Crimson / Pink\nBeige / Brown / Olive / Fuschia / Navy\n";

	while (!stepFinished)
	{
		cin >> cinStringVariable;

		if (cinStringVariable == "White")
		{
			color = Color::White;
			stepFinished = true;
		}
		else if (cinStringVariable == "Black")
		{
			color = Color::Black;
			stepFinished = true;
		}
		else if (cinStringVariable == "Red")
		{
			color = Color::Red;
			stepFinished = true;
		}
		else if (cinStringVariable == "Blue")
		{
			color = Color::Blue;
			stepFinished = true;
		}
		else if (cinStringVariable == "Yellow")
		{
			color = Color::Yellow;
			stepFinished = true;
		}
		else if (cinStringVariable == "Lime")
		{
			color = Color::Lime;
			stepFinished = true;
		}
		else if (cinStringVariable == "Green")
		{
			color = Color::Green;
			stepFinished = true;
		}
		else if (cinStringVariable == "Silver")
		{
			color = Color::Silver;
			stepFinished = true;
		}
		else if (cinStringVariable == "Gray")
		{
			color = Color::Gray;
			stepFinished = true;
		}
		else if (cinStringVariable == "Purple")
		{
			color = Color::Purple;
			stepFinished = true;
		}
		else if (cinStringVariable == "Cyan")
		{
			color = Color::Cyan;
			stepFinished = true;
		}
		else if (cinStringVariable == "Magenta")
		{
			color = Color::Magenta;
			stepFinished = true;
		}
		else if (cinStringVariable == "Teal")
		{
			color = Color::Teal;
			stepFinished = true;
		}
		else if (cinStringVariable == "Crimson")
		{
			color = Color::Crimson;
			stepFinished = true;
		}
		else if (cinStringVariable == "Pink")
		{
			color = Color::Pink;
			stepFinished = true;
		}
		else if (cinStringVariable == "Beige")
		{
			color = Color::Beige;
			stepFinished = true;
		}
		else if (cinStringVariable == "Brown")
		{
			color = Color::Brown;
			stepFinished = true;
		}
		else if (cinStringVariable == "Olive")
		{
			color = Color::Olive;
			stepFinished = true;
		}
		else if (cinStringVariable == "Fuschia")
		{
			color = Color::Fuschia;
			stepFinished = true;
		}
		else if (cinStringVariable == "Navy")
		{
			color = Color::Navy;
			stepFinished = true;
		}
		else
		{
			cout << "\nColor unknown. Please enter a valid color. The spelling is case-sensitive.\n";
			stepFinished = false;
		}

	}	

	mExistingCars.push_back(Car(brand, model, licensePlate, yearOfConstruction, mileage, cost, color));

	cout << endl << endl;
}

void Dealership::BuyCar(Person& seller)
{
	mPersonalCars.push_back(*seller.GetCar());
	seller.SellCar();
	// Infinite money so no problem there
}

void Dealership::SellCar(Person& buyer, Car& car)
{
	for (Car _c : mPersonalCars)
	{
		if (_c.GetLicensePlate() == car.GetLicensePlate())
		{
			buyer.BuyCar(car);
			// Infinite money so no problem there
			return;
		}
	}

	cout << "The car you're trying to sell doesn't exist or doesn't belong to you. You can't sell it\n";
}

Person& Dealership::GetPersonByIndex(int index)
{
	return mExistingPeople[index];
}

int Dealership::GetNumberOfPeopleCreated()
{
	return mExistingPeople.size();
}

void Dealership::DealWithPlayerInput()
{
	cout << "Hello\n";

	string inputReciever = "";
	int inputRecieverIntOne = 0;
	int inputRecieverIntTwo = 0;

	// Infinite loop, everything will be within this one function
	while (true)
	{
		cout << "What do you want to do?\n";
		cout << "p => Create a new Person\n" << "c => Create a new Car\n" << "s => Sell a Car to a Person\n" << "b => Buy a Car from a Person\n";
	
		cin >> inputReciever;
	
		if (inputReciever == "p")
		{
			CreatePerson();
		}
		else if (inputReciever == "c")
		{
			CreateCar();
		}
		else if (inputReciever == "s")
		{
			cout << "Which car do you want to sell?\n";
			DisplayDealershipOwnedCars();

			cin >> inputRecieverIntOne;

			cout << "Who do you want to sell this car to?\n";
			DisplayExistingPeople();

			cin >> inputRecieverIntTwo;

			mExistingPeople[inputRecieverIntTwo].BuyCar(mPersonalCars[inputRecieverIntOne]);
		}
		else if (inputReciever == "b")
		{
			cout << "Which car do you want to buy?\n";
			DisplayPepleOwnedCars();

			cin >> inputRecieverIntOne;

			cout << "You successfully bought " << mExistingPeople[inputRecieverIntOne].GetFirstName() << "'s " << mExistingPeople[inputRecieverIntOne].GetCar()->GetModel() << endl;

			mExistingPeople[inputRecieverIntOne].SellCar();
		}
		else
		{
			cout << "\nUnknown command. Please enter a valid command in lowercase.\n";
		}

	}
}

void Dealership::DisplayExistingPeople()
{
	// Display every person that exists
	for (int i = 0; i < mExistingPeople.size(); i++)
	{
		cout << "Person number: " << i << " | " << mExistingPeople[i].GetFirstName() << " " << mExistingPeople[i].GetLastName() << " | " << mExistingPeople[i].GetGender() << " Born on ";
		mExistingPeople[i].GetFullBirthDay();
		cout << " | Money Amount: " << mExistingPeople[i].GetMoneyAmount() << "$ | ";
		if (mExistingPeople[i].HasCar())
		{
			cout << "Has a " << mExistingPeople[i].GetCar()->GetModel() << "\n";
		}
		else
		{
			cout << "Doesn't have a car.\n";
		}
	}
}

void Dealership::DisplayExistingCars()
{
	// Display every car that exists
	for (int i = 0; i < mExistingCars.size(); i++)
	{
		cout << "Car number: " << i << " | " << mExistingCars[i].GetBrand() << " " << mExistingCars[i].GetModel() << " " << mExistingCars[i].GetLicensePlate() << " | Color: "
		<< mExistingCars[i].GetColorString() << " | Price: " << mExistingCars[i].GetCost() << " | Owner: " << "\n";
	}
}

void Dealership::DisplayDealershipOwnedCars()
{
	// Display every car that you own
	for (int i = 0; i < mPersonalCars.size(); i++)
	{
		cout << "Car number: " << i << " | " << mPersonalCars[i].GetBrand() << " " << mPersonalCars[i].GetModel() << " " << mPersonalCars[i].GetLicensePlate() << " | Color: ";
		cout << mPersonalCars[i].GetColorString() << " | Price: " << mPersonalCars[i].GetCost() << "\n";
	}
}

void Dealership::DisplayPepleOwnedCars()
{

	// Display every car that is owned by somebody else
	for (int i = 0; i < mExistingPeople.size(); i++)
	{
		if (mExistingPeople[i].HasCar())
		{
			cout << "Car number: " << i << " | Owner: " << mExistingPeople[i].GetFirstName() << " " << mExistingPeople[i].GetLastName();
			cout << " | Car model: " << mExistingPeople[i].GetCar()->GetBrand() << " " << mExistingPeople[i].GetCar()->GetModel() 
			<< " | Price: " << mExistingPeople[i].GetCar()->GetCost() << endl;
		}
	}
}

