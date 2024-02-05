#include <iostream>
#include <vector>
#include <chrono>

int main()
{
	std::vector<int> numbers; //Skapar en vektor som innehåller integers.
	int number; //Ett tal att lägga till i listan.

	std::cout << "Enter a number to add to the vector" << std::endl;

	while (true)
	{
		std::cin >> number;
		
		//start timer
		auto start = std::chrono::high_resolution_clock::now();

		//Add number to list
		numbers.push_back(number);

		//stop timer
		auto end = std::chrono::high_resolution_clock::now();

		std::chrono::duration<double, std::micro> timeTaken = end - start;
		std::cout << "Time taken to add element: " << timeTaken.count() << " microseconds." << std::endl;

		for (size_t i = 0; i < numbers.size(); i++)
		{
			std::cout << "Element " << i << "\tvalue: " << numbers[i] << ", \taddress: " << &numbers[i] << std::endl;
		}
	}

}