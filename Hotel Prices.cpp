#include <iostream>
#include <vector>

using namespace std;

class HotelRoom
{
public:
    HotelRoom(int bedrooms, int bathrooms)
        : bedrooms_(bedrooms), bathrooms_(bathrooms) {}

    int get_price()
    {
        return 50 * bedrooms_ + 100 * bathrooms_;
    }

private:
    int bedrooms_;
    int bathrooms_;
};

class HotelApartment : public HotelRoom
{
    /* Hotel Prices in C++ - Hacker Rank Solution START */
    /* only change this line
        HotelApartment(int bedrooms, int bathrooms)
        : HotelRoom(bedrooms, bathrooms)
      TO
        HotelApartment(int bedrooms, int bathrooms)
        : HotelRoom(bedrooms + 2, bathrooms)
    */
public:
    HotelApartment(int bedrooms, int bathrooms)
        : HotelRoom(bedrooms + 2, bathrooms) {}
    /* END Hotel Prices in C++ - Hacker Rank Solution END */
    int get_price()
    {
        return HotelRoom::get_price() + 100;
    }
};
