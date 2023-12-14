#include "helpers.hpp"

#include <cstdlib>
#include <random>

std::random_device rd;
std::mt19937 rng(rd());

double default_probability_generator() {
    // Generuj liczby pseudolosowe z przedzialu [0, 1); 10 bitow losowosci.
    return std::generate_canonical<double, 10>(rng);
}

std::function<double()> probability_generator = default_probability_generator;
