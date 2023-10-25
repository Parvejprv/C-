// SQRT of x
/* 
Ex. 103
We have start checking square, floor of square root of 5 is 2.

Approach
---------
Ex. 103
we have start checking square from 1.... until the number is reached of 103 one lacs.

103 ->   1,2,3,4,5,6,7,8,9, 10 


*/

#include <iostream>
using namespace std;


// Method to find out the sqrt of a number
int mySqrt(int x) {
  int i = 1, result = 1;

  if (x == 0 || x==1){
    return x;
  }

  while (result <= x) {
    i += 1;
    result = i*i;
  }
  return i - 1;
}

int main() {
  int num;
  cout << "Enter a positive integer: ";
  cin >> num;

  // call the method to check the number is 
  int sqrtNum = mySqrt(num);
  cout << "Floor sqrt of number " << num << " is " << sqrtNum << endl;
}