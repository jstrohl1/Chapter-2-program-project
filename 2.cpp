#include <iostream>
using namespace std;
int main ()
{
int customer = 16500;
double Edrinkers = 0.15;
double citrus = 0.58;
int bought = Edrinkers * customer;
int flavor = bought * citrus;

cout << "amount of drinks bought = "<< (customer * Edrinkers)  << '\n';
cout << "amount of citrus bought = "<< (flavor) << '\n';

return 0;
}