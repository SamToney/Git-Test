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
 * @pre User has entered a valid entry.
 * @return int Total sum of numbers between 1 and the user selected number
 * @post The correct sum is properly calculated and returned.
 * 
 */
int addSum(int n);


/**
 * Finds the product of numbers between 1 and a user selected integer.
 *
 * @param int n User selected integer
 * @pre User has entered a valid entry.
 * @return int The total product of numbers between 1 and the user selected number.
 * @post The correct product has been properly calculated and returned.
 * 
 */
int findProduct(int n); 

int main() {

  // Initialize variables
  int n = 0, sumValue = 0, productValue = 0;

  // Prompt user
  cout << "Please enter an integer: ";
  cin >> n;

  // Return totals to main
  sumValue = addSum(n);
  productValue = findProduct(n);

  // Print total
  cout << "Total sum: " << sumValue << endl;
  cout << "Total product: " << productValue << endl;

  return 0;
}

int addSum(int n) {
  int total = 0;

  // Find total sum
  for (int i = 1; i <= n; i++) {
    total += i;
  }
  return total;
}

int findProduct(int n) {
  int total = 1;

  // Find total product
  for (int i = 1; i <= n; i++) {
    total *= i;
  }
  return total;
}
