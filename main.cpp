#include "race.h"
#include <cstdlib>
#include <ctime>

int main()
{
    srand(time(0));

    Race race;
    race.runRace();

    return 0;
}
