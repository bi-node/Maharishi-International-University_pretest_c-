#include<iostream>
#include<climits>
using namespace std;


int henry(int i, int j) {
	int henry = 0;
	int max = INT_MAX;
	int perfectCount = 0;
	for (int number = 1; number <= max; number++) 
    {
		int sum = 0;
		for (int divider = 1; divider < number; divider++) 
        {
			if (number % divider == 0) 
            {
				sum += divider;
			}
		}
		if (sum == number) 
		{
			perfectCount++;
			if (perfectCount == i) {
				henry += sum;
			}
			else if (perfectCount == j) {
				henry += sum;
				break;
			}
		}
	}
	return henry;
}

int main() {
	int result = henry(1, 3);
	std::cout << result << std::endl;
	return 0;
}