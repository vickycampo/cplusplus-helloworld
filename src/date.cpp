#include "date.h"

// Date::Date() //Date:: -> is to say that it belongs to the date class
// {
//     month = 1;
//     day = 1;
//     year= 2020;
// };

int Date::dateCounter = 0;
std::string Date::getShortDate() const 
{
    return std::to_string( month ) + "/" + std::to_string( day ) + "/" + std::to_string( year );
};

bool Date::operator==( const Date& rhs )
{
    return this->year == rhs.year && this->month == rhs.month && this->day == rhs.day;
}

ostream& operator<<( std::ostream& outStream , const Date& dateToPrint )
{
    return ( outStream << dateToPrint.getShortDate() );
}