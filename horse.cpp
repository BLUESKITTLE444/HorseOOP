#include "horse.h"
#include <cstdlib>

Horse::Horse()
{
    position = 0;
}

bool Horse::advance()
{
    if (rand() % 2 == 0)
    {
        position++;
        return true;
    }
    return false;
}

int Horse::getPosition() const
{
    return position;
}

bool Horse::isWinner(int trackLength) const
{
    return position >= trackLength;
}

void Horse::reset()
{
    position = 0;
}
