#pragma once
#include <random>
#include <time.h>

class Randomness {
private:
	Randomness();
	Randomness(const Randomness& other);
	~Randomness();
public:
	static float dist_1_0();
	static int dist_8_0();
	static int dist_custom(const int& begin, const int& end);

private:
	static std::mt19937_64 generator;
	static std::uniform_real_distribution<float> distribution_1_0;
	static std::uniform_int_distribution<int> distribution_direction;
};