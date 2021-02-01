#include "module_a.h"
/*!
  \param a Integer 1
  \param b Integer 2
  \param c Integer 3
  \return The test results
*/
int8_t AverageThreeBytes(int8_t a, int8_t b, int8_t c)
{
    return (int8_t)(((int16_t)a + (int16_t)b + (int16_t)c) / 3);
}
