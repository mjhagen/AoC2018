#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream file("aoc-1-1-input.txt");
  string drift;
  int frequency = 0;

  while (getline(file, drift)) {
    frequency += stoi( drift );
  };

  file.close();

  cout << frequency << endl;
};