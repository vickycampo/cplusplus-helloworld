#include "date.h"

// Date::Date() //Date:: -> is to say that it belongs to the date class
// {
//     month = 1;
//     day = 1;
//     year= 2020;
// };

std::string Date::getShortDate()const
{
    return std::to_string( month ) + "/" + std::to_string( day ) + "/" + std::to_string( year );
};