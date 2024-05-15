#include "Key.h"
#include <array>
#include <random>
#include <stdexcept>
#include <stdint.h>


uint32_t randomUInt(uint32_t lowerLimit, uint32_t upperLimit)
{
    std::random_device rd;
    std::uniform_int_distribution<uint32_t> dist(lowerLimit, upperLimit);
    return dist(rd);
}


void Key::generateRandomKey() 
{
    for (uint8_t i = 0; i < this->key.size(); i++) {
        this->key[i] = randomUInt(1, UINT32_MAX);
    }
}


void Key::setKey(const std::array<uint32_t, 8>& key) 
{
    for (uint8_t i = 0; i < this->key.size(); i++) {
        if (key[i] == 0) {
            throw std::invalid_argument("Each value in the key must be non-zero.");
        }
        this->key[i] = key[i];
    }
}


std::array<uint32_t, 8> Key::getKey() 
{
    return this->key;
}


void Key::operator++(int)
{

}