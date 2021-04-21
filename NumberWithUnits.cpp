#include "NumberWithUnits.hpp"

using namespace std;

namespace ariel{


     void NumberWithUnits::read_units(ifstream& infile){}
        NumberWithUnits NumberWithUnits::operator+(const NumberWithUnits& c) const{
            return NumberWithUnits{1, "avia"};
        }
        NumberWithUnits& NumberWithUnits::operator+=(const NumberWithUnits& c){
            return *this;
        }
        NumberWithUnits NumberWithUnits::operator+() const{
            return NumberWithUnits{1,"avia"};
        }
        NumberWithUnits NumberWithUnits::operator-(const NumberWithUnits& c){
            return NumberWithUnits{1,"avia"};
        }
        NumberWithUnits& NumberWithUnits::operator-=(const NumberWithUnits& c){
            return *this;
        }
        NumberWithUnits NumberWithUnits::operator-() const{
            return NumberWithUnits{1,"avia"};
        }

        bool operator>(const NumberWithUnits& c1, const NumberWithUnits& c2){
            return false;
        }
        bool operator>=(const NumberWithUnits& c1, const NumberWithUnits& c2){
            return false;
        }
        bool operator<(const NumberWithUnits& c1, const NumberWithUnits& c2){
            return false;
        }
        bool operator<=(const NumberWithUnits& c1, const NumberWithUnits& c2){
            return false;
        }
        bool operator==(const NumberWithUnits& c1, const NumberWithUnits& c2){
            return false;
        }
        bool operator!=(const NumberWithUnits& c1, const NumberWithUnits& c2){
            return false;
        }
        
         NumberWithUnits& NumberWithUnits::operator++(){
            return *this;
        }
         NumberWithUnits NumberWithUnits::operator++(int dummy_flag_for_postfix_increment){
            return NumberWithUnits{1,"avia"};
        }
        NumberWithUnits& NumberWithUnits::operator--(){
            return *this;
        }
          NumberWithUnits NumberWithUnits::operator--(int dummy_flag_for_postfix_increment){
            return NumberWithUnits{1,"avia"};
        }

           NumberWithUnits operator* (double c1,const NumberWithUnits& c2){
                       return NumberWithUnits{1,"avia"};
        }
        
          std::ostream& operator<< (std::ostream& output, const NumberWithUnits& c){
            return output;
        }
          std::istream& operator>> (std::istream& input , NumberWithUnits& c){
            return input;
        }
}