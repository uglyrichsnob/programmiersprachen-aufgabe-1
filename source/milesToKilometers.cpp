#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {

    cout << "Eingabe in Meilen:\n";
    double miles;
    cin >> miles;

    double mileToKilometer(double miles);
    cout << miles << " Meilen sind " << mileToKilometer(miles) << " Kilometer \n";
}


double mileToKilometer(double miles)
{
  double kilometers = 1.60934 * miles;
  return kilometers;
}

/*

TEST_CASE("converter", "[mileToKilometer]")
{
  REQUIRE(mileToKilometer(0) == 0);
  REQUIRE(mileToKilometer(12) == 19.3121);
  REQUIRE(mileToKilometer(1) == 1.60934);
}

*/