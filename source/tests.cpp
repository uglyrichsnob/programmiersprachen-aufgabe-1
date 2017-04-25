#define CATCH_CONFIG_RUNNER
#include <cmath>
#include "catch.hpp"
#include <iostream>

using namespace std;



int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);

}

//1.8 ggT

int gcd(int a, int b) {
    if (a==0) {
        return b;
    }
    while (b != 0) {
        if(a>b) {
            a = a-b;
        }
        else {
            b = b-a;
        }
    }
    return a;
}


//1.9 Quersumme

int quersumme(int c) {
    int sum = 0;
    while (0 != c) 
    {
        sum = sum + (c % 10);
        c = c / 10;
    }
    return sum;
}



//1.10 sumMultiples

int sumMultiples(int limit) {
    int sum = 0;
    for (int i = 0; i <= limit; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum = sum + i;
        }
    }
    return sum;
}

//1.11 fract

float fract(float e) {
    int integer = e;
    float result = e - integer;
    return result;
}

//1.12 Zylinder

double volume (double radius, double height){   
  double volume = M_PI*radius*radius*height;
  return volume;  
}

 double area (double radius, double height){    
  double area = 2*M_PI*radius*radius+2*M_PI*radius*height;
  return area;
 }

//1.13 factorial

int factorial(int h)
{
    if(h > 1)
        return h * factorial(h - 1);
    else
        return 1;
}


//1.14 binomial

int binomial(int n, int k)
{
  if (k==0 || k==n)
    return 1;

  return  binomial(n-1, k-1) + binomial(n-1, k);
}


//1.15 isPrime

int is_prime(int i)
{
  bool fermat = true;
  int j = 2;
  if (i == 0 || i == 1) {
      fermat = false;
  }
  else {
      while (j < i) {
          if (i % j == 0) {
              fermat = false;
              break;
          }
          else j++;
      }
  }
  return fermat;
}

//1.16 MilesToKilometer

double mileToKilometer(double miles)
{
  double kilometers = 1.609344 * miles;
  return kilometers;
}


TEST_CASE("describe_gcd", "[gcd]")
{
  REQUIRE(gcd(2,4) == 2);
  REQUIRE(gcd(9,6) == 3); 
  REQUIRE(gcd(3,7) == 1);
}

TEST_CASE("describe_fract", "[fract]")
{
    REQUIRE(fract(5.234) == Approx(0.234));
    REQUIRE(fract(0) == 0);
}

TEST_CASE("describe_quersumme", "[quersumme]")
{
  REQUIRE(quersumme(0) == 0);
  REQUIRE(quersumme(21) == 3);
  REQUIRE(quersumme(117659) == 29);
}

TEST_CASE ("describe_volume" , "[volume]" )
{
  REQUIRE ( volume (4,5) == Approx (251.3274122872) );
}
TEST_CASE ("describe_area" , "[area]" )
{
  REQUIRE ( area (4,5) == Approx (226.195) );
}


TEST_CASE("describe_factorial", "[factorial]")
{
  REQUIRE(factorial(1) == 1);
  REQUIRE(factorial(3) == 6);
  REQUIRE(factorial(5) == 120);
}

TEST_CASE("describe_binomial", "[binomial]")
{
  REQUIRE(binomial(4,3) == 4);
  REQUIRE(binomial(12,6) == 924);
  REQUIRE(binomial(36,2) == 630);
}


TEST_CASE("describe_is_prime", "[is_prime]")
{
  REQUIRE(is_prime(2) == true);
  REQUIRE(is_prime(3) == true);
  REQUIRE(is_prime(4) == false);
}

TEST_CASE("describe_mileToKilometer", "[mileToKilometer]")
{
  REQUIRE(mileToKilometer(0) == 0);
  REQUIRE(mileToKilometer(7654) == 12317.918976);
  REQUIRE(mileToKilometer(1) == 1.609344);
}
