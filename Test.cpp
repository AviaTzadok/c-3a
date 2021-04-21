#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "doctest.h"
#include "NumberWithUnits.hpp"
using namespace std;
using namespace ariel;

 
TEST_CASE("Working codes"){ 
    ifstream units_file{"units.txt"};
    NumberWithUnits::read_units(units_file);
/*km = 1000 m
1 m = 100 cm
1 kg = 1000 g
1 ton = 1000 kg
1 hour = 60 min
1 min = 60 sec
1 USD = 3.33 ILS*/
        NumberWithUnits km{1,"km"};
        NumberWithUnits m{100,"m"};
        NumberWithUnits cm{100,"cm"};
        NumberWithUnits ton{2,"ton"};
        NumberWithUnits kg{500,"kg"};
        NumberWithUnits g{2000,"g"};
        NumberWithUnits hour{2,"hour"};
        NumberWithUnits min{30,"min"};
        NumberWithUnits sec{240,"sec"};
        NumberWithUnits USD{4,"USD"};
        NumberWithUnits ILS{66,"ILS"};

        CHECK(((km+m)==NumberWithUnits{1.1,"km"}));
        CHECK(((km+m)==NumberWithUnits{1100,"m"}));
        CHECK(((m+cm)==NumberWithUnits{1100,"cm"}));

        CHECK(((ton+kg)==NumberWithUnits{2.5,"ton"}));
        CHECK(((ton+kg)==NumberWithUnits{2500,"kg"}));
        CHECK(((kg+g)==NumberWithUnits{502000,"g"}));

        CHECK(((hour+min)==NumberWithUnits{2.5,"hour"}));
        CHECK(((hour+min)==NumberWithUnits{150,"min"}));
        CHECK(((min+sec)==NumberWithUnits{34,"sec"}));

        CHECK(((USD+ILS)==NumberWithUnits{24,"USD"}));
        CHECK(((USD+ILS)==NumberWithUnits{79.2,"ILS"}));
   
}
  TEST_CASE("unworking code") {
        NumberWithUnits km{1,"km"};
        NumberWithUnits m{100,"m"};
        NumberWithUnits cm{100,"cm"};
        NumberWithUnits ton{2,"ton"};
        NumberWithUnits kg{500,"kg"};
        NumberWithUnits g{2000,"g"};
        NumberWithUnits hour{2,"hour"};
        NumberWithUnits min{30,"min"};
        NumberWithUnits sec{240,"sec"};
        NumberWithUnits USD{4,"USD"};
        NumberWithUnits ILS{66,"ILS"};

        CHECK_THROWS((km+ton));
        CHECK_THROWS((km+kg));
        CHECK_THROWS((km+g));
        CHECK_THROWS((km+hour));
        CHECK_THROWS((km+min));
        CHECK_THROWS((km+sec));
        CHECK_THROWS((km+USD));
        CHECK_THROWS((km+ILS));

        CHECK_THROWS((m+ton));
        CHECK_THROWS((m+kg));
        CHECK_THROWS((m+g));
        CHECK_THROWS((m+hour));
        CHECK_THROWS((m+min));
        CHECK_THROWS((m+sec));
        CHECK_THROWS((m+USD));
        CHECK_THROWS((m+ILS));

        CHECK_THROWS((cm+ton));
        CHECK_THROWS((cm+kg));
        CHECK_THROWS((cm+g));
        CHECK_THROWS((cm+hour));
        CHECK_THROWS((cm+min));
        CHECK_THROWS((cm+sec));
        CHECK_THROWS((cm+USD));
        CHECK_THROWS((cm+ILS));

        CHECK_THROWS((ton+hour));
        CHECK_THROWS((ton+min));
        CHECK_THROWS((ton+sec));
        CHECK_THROWS((ton+USD));
        CHECK_THROWS((ton+ILS));

        CHECK_THROWS((kg+hour));
        CHECK_THROWS((kg+min));
        CHECK_THROWS((kg+sec));
        CHECK_THROWS((kg+USD));
        CHECK_THROWS((kg+ILS));

        CHECK_THROWS((g+hour));
        CHECK_THROWS((g+min));
        CHECK_THROWS((g+sec));
        CHECK_THROWS((g+USD));
        CHECK_THROWS((g+ILS));


}