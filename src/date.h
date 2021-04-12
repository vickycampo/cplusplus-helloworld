// date.h
// Class For handling dates
// by Vicky Campo

#include <string>

class Date
{
    private:
        int month;
        int day;
        int year;

        static int dateCounter;

    public:
        //Date():month(1), day(1), year(2020){}; //CONSTRUCTOR
        Date():Date( 1 , 1 , 2020 ){}; //CONSTRUCTOR

        //CONSTRUCTOR WITH PARAMETERS
        //INITIALIZING PARENT CONSTRUCTORS 
        Date( int theMonth, int theDay ,int theYear ): month( theMonth) , day( theDay ), year( theYear ) { dateCounter++; } 

        //SETTERS AND GETTERS
        int getMonght() const { return month; }
        std::string getShortDate() const; //WE USE THE CONST BECAUSE THIS FUNCTION WON'T MODIFY THE OBJECT, FOR GETTERS 
        void setDate( int day ) { this->day = day; };

        static int getNumDates() { return dateCounter; }

        bool operator==( const Date& rhs );

};

ostream& operator<<( std::ostream& outStream , const Date& dateToPrint );