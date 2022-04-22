#include <string>
#include "Gender.h"
#include "Color.h"
#include "Car.h"
#include "Person.h"

int main()
{
    Car Twingo = Car("Renault", "Twingo", "HX-635-RP", 2017, 12834, 5833, Color::Beige);
    Person sIrwin = Person("Steve", "Irwin", 22, 2, 1962, 3000000, Twingo, Gender::Male);

    sIrwin.IntroduceThemselves();

    sIrwin.PaintCar(Color::Blue);
}
