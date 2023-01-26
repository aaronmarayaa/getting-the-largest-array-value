# Largest Array Value

This program will get the size of an array, then loop to get array values.
Then `largestValueOfArray()` function will get the largest array value.

```C++
void largestValueOfArray(int arr[], int num){
  int max = 0;
    for(int i = 0; i < num; i++){
        if(max < arr[i]){
          max = arr[i];
        }
    }
  cout << "\nlargest array value is " << max;
}
```
The loop will check `if` the `max` variable is less thant array values.
if true, then that array value will be the value of `max` variable. 
```cpp
for(int i = 0; i < num; i++){
    if(max < arr[i]){
        max = arr[i];
    }
}
```