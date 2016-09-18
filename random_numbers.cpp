#include <iostream>

using namespace std;

int main()
{
  while (true)
  {
    cout << "Press enter to generate a random number:";
    cin.get();

    int randomInteger = rand();

    cout << randomInteger << endl << endl;
  }

  return 0;
}