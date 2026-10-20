#include "race.h"
#include <iostream>

using namespace std;

Race::Race()
{
}

void Race::displayTrack() const
{
    for (int i = 0; i < NUM_HORSES; i++)
    {
        cout << "Horse " << i + 1 << ": ";

        for (int j = 0; j < TRACK_LENGTH; j++)
        {
            if (j == horses[i].getPosition())
                cout << "H";
            else
                cout << "-";
        }

        cout << endl;
    }

    cout << endl;
}

bool Race::raceOver() const
{
    for (int i = 0; i < NUM_HORSES; i++)
    {
        if (horses[i].isWinner(TRACK_LENGTH))
            return true;
    }

    return false;
}

void Race::runRace()
{
    while (!raceOver())
    {
        displayTrack();

        for (int i = 0; i < NUM_HORSES; i++)
        {
            horses[i].advance();
        }
    }

    displayTrack();

    cout << "Winner(s):" << endl;

    for (int i = 0; i < NUM_HORSES; i++)
    {
        if (horses[i].isWinner(TRACK_LENGTH))
        {
            cout << "Horse " << i + 1 << endl;
        }
    }
}
