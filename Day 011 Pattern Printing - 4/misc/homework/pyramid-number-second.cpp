/* 

This is the second pattern:
        1
      1 2 3
    1 2 3 4 5
  1 2 3 4 5 6 7
1 2 3 4 5 6 7 8 9

*/


#include<iostream>
using namespace std;

int main() {
  int i,j;
  int n;
  cout << "Enter n : ";
  cin >> n;

  for(i=1; i<=n; i++) {
    int k = 0;
    // space
    for(int j=1; j<=n-i; j++) {
      cout << "  ";
    }

    for(j=1; j<=2*i-1; j++) {
      cout << ++k << " ";
    } 
    cout << endl;
  }

  return 0;
}