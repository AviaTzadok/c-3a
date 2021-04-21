#include <iostream>

using namespace std;
namespace ariel{
    class NumberWithUnits{
        public:
        NumberWithUnits(double a, string s){
                        a=0;
                        s="avia"; 
        }
        static void read_units(ifstream& infile);
        NumberWithUnits operator+(const NumberWithUnits& c) const;
        NumberWithUnits& operator+=(const NumberWithUnits& c);
        NumberWithUnits operator+() const;
        NumberWithUnits operator-(const NumberWithUnits& c);
        NumberWithUnits& operator-=(const NumberWithUnits& c);
        NumberWithUnits operator-() const;
        friend bool operator>(const NumberWithUnits& c1, const NumberWithUnits& c2);
        friend bool operator>=(const NumberWithUnits& c1, const NumberWithUnits& c2);
        friend bool operator<(const NumberWithUnits& c1, const NumberWithUnits& c2);
        friend bool operator<=(const NumberWithUnits& c1, const NumberWithUnits& c2);
        friend bool operator==(const NumberWithUnits& c1, const NumberWithUnits& c2);
        friend bool operator!=(const NumberWithUnits& c1, const NumberWithUnits& c2);
        NumberWithUnits& operator++();
        NumberWithUnits operator++(int c);
        NumberWithUnits& operator--();
        NumberWithUnits operator--(int c);
        friend  NumberWithUnits operator* (double c1,const NumberWithUnits& c2);
        friend std::ostream& operator<< (std::ostream& output, const NumberWithUnits& c);
        friend std::istream& operator>> (std::istream& input , NumberWithUnits& c);
        
    };
}