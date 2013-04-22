#include "Coordinates.h"

Coordinates::Coordinates(int xx, int yy)
{
    std::cout << "Creating Coordinates: " << xx << " " << yy << std::endl;
    if(xx <= 1024) x = xx;
    else x = 0;

    if (yy <= 768) y = yy;
    else y = 0;
}

Coordinates::Coordinates(const Coordinates& coor) : x(coor.x), y(coor.y)
{
    std::cout << "Creating Coordinates (copy)" << std::endl;
}

bool operator==(const Coordinates& c1, const Coordinates& c2)
{
    if(c1 == c2) return true;
    else return false;
}

Coordinates& Coordinates::operator=(const Coordinates& coor)
{
    this->x = coor.x;
    this->y = coor.y;
    return *this;
}


