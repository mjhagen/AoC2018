#include <unordered_map>
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ifstream file( "aoc-1-1-input.txt" );

  string drift;

  int frequency = 0;
  int safeguard = 0;

  unordered_map<int, bool> multiples;

  while ( true ) {
    if ( safeguard++ > 1000000 ) {
      cout << "safety break";
      break;
    }

    if ( !getline(file, drift) ) {
      file.clear();
      file.seekg(0, ios::beg);
      continue;
    }

    int n = frequency + stoi( drift );

    if ( multiples.find(n) != multiples.end() ) {
      cout << n;
      break;
    }

    multiples[ n ] = true;
    frequency = n;
  };

  file.close();

  cout << endl;
};