#include "converters.h"

float fahrenheit_to_celsius(float fahr)
{
    return (fahr - 32.0f) * (5.0f / 9.0f);
}

float celsius_to_fahrenheit(float cel)
{
    return (cel * 1.8f) + 32.0f;
}