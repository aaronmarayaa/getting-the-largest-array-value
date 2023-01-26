#include <iostream>
using namespace std;

void largestValueOfArray(int arr[], int num){
  int max = 0;
    for(int i = 0; i < num; i++){
        if(max < arr[i]){
          max = arr[i];
        }
    }
  cout << "\nlargest array value is " << max;
}


int main() {
  cout << "Enter how many value: ";
  int num;
  cin >> num;
  int arr[num];
    for(int i = 0; i < num; i++){
      cout << "array value: ";
      cin >> arr[i];
    }
  largestValueOfArray(arr, num);
return 0;
}