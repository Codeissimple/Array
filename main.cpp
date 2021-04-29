#include <iostream>
using namespace std;
const int ARRAY_SIZE = 5;
int main() {
  double grades[ARRAY_SIZE] = { 25, 50, 75, 100, 0};
  double buffer = 0;
  double average = 0;

  for (int i = 0; i < ARRAY_SIZE; i++)
    buffer =  buffer + grades[i];
   

  average = buffer / sizeof(grades);
  cout << "The average of the grades is " << average << endl;

  cout << " The size of an array is " << ARRAY_SIZE << endl;

}