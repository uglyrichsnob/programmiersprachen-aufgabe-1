#define CATCH_CONFIG_RUNNER
#include <cmath>
#include <iostream>

using namespace std;



int main(int argc, char* argv[])
{


    //----------------------

    cout << "A1_8: ggT\n";
    int a,b;
    cout << "Zahl 1: \n";
    cin >> a;
    cout << "Zahl 2: \n";
    cin >> b;
    
    if (a == 0 || b == 0) {
        cout << "Fehler\n";
    }
    
    int gcd(int a, int b);
    cout << gcd(a,b) << endl;

    //----------------------

    cout << "A1_9: Quersumme\n"; 
    int c;
    cout << "Zahl eingeben: \n";
    cin >> c;

    int quersumme(int c);
    cout << quersumme(c) << endl;

    //----------------------

    cout << "A1_10: sumMultiples\n";
    int limit = 1000;
    int sumMultiples(int limit);
    cout << sumMultiples(limit) << endl;

     //----------------------

    cout << "A1_11: fract\n";
    float e;
    cout << "Zahl eingeben: \n";
    cin >> e;

    float fract(float e);
    cout << fract(e) << endl;

    //----------------------

    cout << "A1_12: cylinder\n";
    int f;
    int g;
    cout << "Radius: \n";
    cin >> f;
    cout << "Hoehe: \n";
    cin >> g;

    float cylinder(float f, float g);
    cout << cylinder(f,g) << endl;

    //----------------------

    cout << "A1_13: factorial\n";
    int h;
    cout << "Zahl eingeben: \n";
    cin >> h;

    int factorial(int h);
    cout << factorial(h) << endl;

    //----------------------

    cout << "A1_14: binomial\n";
    int n;
    int k;
    cout << "n: \n";
    cin >> n;
    cout << "k: \n";
    cin >> k;

    int binomial(int n, int k);
    cout << binomial(n,k) << endl;

    //----------------------

    cout << "A1_15: is_Prime\n";
    int i;
    cout << "Zahl: \n";
    cin >> i;

    int is_prime(int i);
    cout << is_prime(i) << endl;

    //----------------------





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

/*
TEST_CASE("describe_gcd", "[gcd]")
{
  REQUIRE(gcd(2,4) == 2);
  REQUIRE(gcd(9,6) == 3); 
  REQUIRE(gcd(3,7) == 1);
}
*/

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

/*
TEST_CASE("describe_quersumme", "[quersumme]")
{
  REQUIRE(quersumme(12) == 3);
  REQUIRE(quersumme(21) == 3);
  REQUIRE(quersumme(117659) == 29);
}
*/

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

float cylinder(float f, float g)
{
  float volume = M_PI * f * g;
  float area = (2 * M_PI * f * f) + (2 * volume);

  return area;
}

/*
TEST_CASE("describe_cylinder", "[cylinder]")
{
  REQUIRE(cylinder(1,1) == 12.5664);
  REQUIRE(cylinder(4,3) == 175.929);
  REQUIRE(cylinder(12,22) == 2563.54);
}
*/

//1.13 factorial

int factorial(int h)
{
    if(h > 1)
        return h * factorial(h - 1);
    else
        return 1;
}

/*
TEST_CASE("describe_factorial", "[factorial]")
{
  REQUIRE(factorial(1) == 1);
  REQUIRE(factorial(3) == 6);
  REQUIRE(factorial(5) == 120);
}
*/

//1.14 binomial

int binomial(int n, int k)
{
  if (k==0 || k==n)
    return 1;

  return  binomial(n-1, k-1) + binomial(n-1, k);
}

/*
TEST_CASE("binomialkoeffizient", "[binomial]")
{
  REQUIRE(binomial(4,3) == 4);
  REQUIRE(binomial(12,6) == 924);
  REQUIRE(binomial(36,2) == 630);
}
*/


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

/*
TEST_CASE("describe_is_prime", "[is_prime]")
{
  REQUIRE(is_prime(2) == true);
  REQUIRE(is_prime(3) == true);
  REQUIRE(is_prime(4) == false);
}
*/

