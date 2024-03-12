/*  
Question:- Write a CPP Program to sort and print the Integer array using the Insertion Sort techniques (Descending Order).
*/

#include<iostream>
using namespace std;
int main() {
  int arr[1000];
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  cout << "Input the elements into the array: ";
  for(int i=0; i<n; i++){
    cin >> arr[i];
  }

  // Insertion Sort 
  for(int i=1; i<n; i++){
    for(int j=i; j>0; j--){
      if(arr[j] > arr[j-1]){
        //swap(arr[j], arr[j-1]);

        // Or Swap Manualy
        // int temp = arr[j-1];
        // arr[j-1] = arr[j];
        // arr[j] = temp;

        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
      } else {
        break;
      }
    }
  }

  // Display the array elements after Insertion Sort
  cout << "Display the integer array After Insertion Sort: ";
  for(int i=0; i<n; i++){
    cout << arr[i] << " ";
  }

}


/*  
Output:-
---------
Enter the size of the array: 5
Input the elements into the array: 100 200 3 90 54
Display the integer array After Insertion Sort: 200 100 90 54 3

Enter the size of the array: 5   
Input the elements into the array: 20 40 50 900 101
Display the integer array After Insertion Sort: 900 101 50 40 20

*/
