#include <iostream>
using namespace std;

void decimalToBinary(int n){
	int arr[11], i = 0, num = n;
    
    // Until the value of n becomes 0.
	while(n != 0){
		arr[i] = n % 2;
		i++;
		n = n / 2;
	}
	cout << num << " in Binary is ";

	// Printing the array in Reversed Order.
	for(i = i - 1; i >= 0;i--){
		cout << arr[i];
	}
	cout << endl;
}
int main() {
	int n = 88;
	decimalToBinary(n);

	return 0;
}