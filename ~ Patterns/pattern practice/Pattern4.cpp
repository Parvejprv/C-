/**************************************************  

Pattern No. 04
--------------
n=5
5 5 5 5 5 
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1


****************************************************/


#include<iostream>
using namespace std;
int main() {
  int n = 5, i, j;

  for(int i=n; i>=1; i--){
    for(int j=1; j<=n; j++){
      cout << i << " ";
    }
    cout  << endl;
  }

  return 0;
}


/*  
Output:-
---------
5 5 5 5 5 
4 4 4 4 4
3 3 3 3 3
2 2 2 2 2
1 1 1 1 1

*/


