### Algorithm
```
classDiagram

class Horse{
    - int position
    - int index
    - int trackLength
    + Horse()
    + int(int index, int trackLength)
    + advance()
    + printLane()
    + isWinner() bool
}

class Race{
    - int NUM_HORSES
    - int TRACK_LENGTH
    + Horse horses[]
    + Race()
    + start()
}

Race --> Horse
```
## Race::Race()
```
Create an array of horses length NUM_HORSES
Initialize all of the horses
for each horse
    initialize that horse with its index and the track length
```
Race::start()
```
Create an array of horses length NUM_HORSES
Initialize all of the horses
for each horse
    initialize that horse with its index and the track length
```
## Horse::Horse()
```
position = 0 
index = 0 
trackLength = 15
```
## void Horse::init(int index, int trackLength)
```
Horse::index = index
Horse::trackLength = trackLength
Horse::position = 0
```
## void Horse::advance()
```
roll a random 0-1 int, put in coin
add coin to position
```
## void Horse::printLane()
```
for pos = 0 to trackLength:
    if Horse::position == pos:
        print Horse::index
    otherwise:
        print '.'
    print a newline at the end
```
## bool Horse::isWinner()
```
    bool win = false
    if position >= trackLength:
        win = true
        print message 
    return win
```
