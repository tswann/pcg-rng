#include <iostream>

using namespace std;

int main()
{
  while (true)
  {
    cout << "Press enter to generate a random number (50 - 249):";
    cin.get();

    int randomInteger = (rand() % 201) + 50;

    cout << randomInteger << endl << endl;
  }

  return 0;
}