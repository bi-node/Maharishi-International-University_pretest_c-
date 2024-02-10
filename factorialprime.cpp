// C++ program to check if given
// number is a factorial prime

#include <bits/stdc++.h>
using namespace std;

// Utility function to check
// if a number is prime or not
bool isPrime(int n)
{
	// Corner cases
	if (n <= 1)
		return false;
	if (n <= 3)
		return true;

	// This is checked so that we can skip
	// middle five numbers in below loop
	if (n % 2 == 0 || n % 3 == 0)
		return false;

	for (int i = 5; i * i <= n; i = i + 6)
		if (n % i == 0 || n % (i + 2) == 0)
			return false;

	return true;
}

// Function that returns true if n is a factorial prime
bool isFactorialPrime(long n)
{

	// If n is not prime then return false
	if (!isPrime(n))
		return false;

	long fact = 1;
	int i = 1;
	while (fact <= n + 1) {

		// Calculate factorial
		fact = fact * i;

		// If n is a factorial prime
		if ( n - 1 == fact)
			return true;

		i++;
	}

	// n is not a factorial prime
	return false;
}

// Driver code
int main()
{

	int n = 7;

	if (isFactorialPrime(n))
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
