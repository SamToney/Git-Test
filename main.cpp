/**
 * @file main.cpp
 * @author Sam Toney
 * @date 2025-01-23
 * @brief Sums numbers from 1 to n
 * 
 * The program prompts the user for an integer, then sums the numbers from 1 to the chosen number. 
 */

#include <iostream>

using namespace std;


/**
 * Adds numbers between 1 and a user selected number.
 *
 * @param int n User selected integer. 
 * @pre 
 * @return int Total sum of numbers between 1 and the user selected number
 * @post The correct sum is properly calculated and returned.
 * 
 */
int addSum(int n);

int main() {

  // Initialize variables
  int n = 0, returnValue = 0;

  // Prompt user
  cout << "Please enter an integer: ";
  cin >> n;

  // Return total to main
  returnValue = addSum(n);

  // Print total
  cout << "Total: " << returnValue << endl;

  return 0;
}

int addSum(int n) {
  int total = 0;
  
  for (int i = 1; i <= n; i++) {
    total += i;
  }
  return total;
}
