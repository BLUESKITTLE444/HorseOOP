#ifndef HORSE_H
#define HORSE_H

class Horse
{
private:
    int position;

public:
    Horse();
    bool advance();
    int getPosition() const;
    bool isWinner(int trackLength) const;
    void reset();
};

#endif
