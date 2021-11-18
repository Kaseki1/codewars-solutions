/*
Task: 
Write a function that accepts an array of 10 integers (between 0 and 9), that returns a string of those numbers in the form of a phone number.
Example

createPhoneNumber(int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}) // => returns "(123) 456-7890"

The returned format must be correct in order to complete this challenge.
Don't forget the space after the closing parentheses!
*/
#include <string>

std::string createPhoneNumber(const int arr [10]){
  std::string number;
  for(int i=0; i<10; i++)
  {
    switch(i)
    {
        case 0: number += "("; break;
        case 3: number += ") "; break;
        case 6: number += "-"; break;
    }
    number += static_cast<char>(arr[i]+48);
  }
  return number;
}
