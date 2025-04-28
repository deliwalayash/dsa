#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<string> cars = {"a", "b", "c", "d"};

  for (string car : cars)
  {
    cout << car << " ";
  }

  cout << "\n"
       << cars[0] << endl;

  cout << cars.front() << endl;

  cout << cars.back() << endl;
  cout << cars.at(0) << endl;
  cout << cars.at(0) << endl;
  cars[0] = "e";

  cars.at(1) = "g";
  cout << cars.at(1) << endl;

  cars.push_back("h");

  for (string car : cars)
  {
    cout << car << " ";
  }

  cout << endl;

  cars.pop_back();

  for (string car : cars)
  {
    cout << car << " ";
  }

  cout << endl;

  cout << cars.size() << endl;

  cout << cars.empty();
  cars.resize(3);

  for (string car : cars)
  {
    cout << car << " ";
  }

  return 0;
}