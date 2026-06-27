#include "random.h"
#include <random>
/// <summary>
/// —”¶¬Ql: https://af-e.net/cpp-random-number-generation/
/// </summary>
/// <returns></returns>
int* _RandomNumberPointer()
{
	int randomNumber;
	std::random_device rb;
	std::mt19937 mt(rb());
	std::uniform_int_distribution<int> dist(0, 9);

	randomNumber = dist(mt);
	return (&randomNumber);
}