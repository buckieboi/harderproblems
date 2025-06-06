#include "watermelon.h"

bool watermelon(int weight) {
    // It must be even and not equal to 2 (because 1+1 is not even enough)
    return weight % 2 == 0 && weight != 2;
}
