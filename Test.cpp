#include "doctest.h"
#include "snowman.hpp"
using namespace ariel;

#include <string>
#include <algorithm>
using namespace std;


/**
 * Returns the input string without the whitespace characters: space, newline and tab.
 * Requires std=c++2a.
 */
string nospaces(string input) {
	std::erase(input, ' ');
	std::erase(input, '\t');
	std::erase(input, '\n');
	std::erase(input, '\r');
	return input;
}

TEST_CASE("Good code") {
    CHECK(nospaces(snowman(41114411)) == nospaces("_\n(*_)\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(21114411)) == nospaces("_\n.....\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(31114411)) == nospaces("\n/\\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(13114411)) == nospaces("===\n(._.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(12114411)) == nospaces("===\n(...)\n( : )\n( : )"));
    CHECK(nospaces(snowman(13314411)) == nospaces("===\n(O_.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(12214411)) == nospaces("===\n(o..)\n( : )\n( : )"));
    CHECK(nospaces(snowman(14414411)) == nospaces("===\n(-.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(14444411)) == nospaces("===\n(--)\n( : )\n( : )"));
    CHECK(nospaces(snowman(12224411)) == nospaces("===\n(o.o)\n( : )\n( : )"));
    CHECK(nospaces(snowman(11111411)) == nospaces("===\n(.,.)\n<( : )\n( : )"));
    CHECK(nospaces(snowman(13333411)) == nospaces("===\n(O_O)\n/( : )\n( : )"));
    CHECK(nospaces(snowman(14444411)) == nospaces("===\n(--)\n( : )\n( : )"));
    CHECK(nospaces(snowman(12224111)) == nospaces("===\n(o.o)\n( : )>\n( : )"));
    CHECK(nospaces(snowman(13334211)) == nospaces("===\n(O_O)/\n( : )\n( : )"));
    CHECK(nospaces(snowman(11114411)) == nospaces("===\n(.,.)\n( : )\n( : )"));
    CHECK(nospaces(snowman(14444441)) == nospaces("===\n(--)\n(   )\n( : )"));
    CHECK(nospaces(snowman(13334431)) == nospaces("===\n(O_O)\n( __ )\n( : )"));
    CHECK(nospaces(snowman(12224421)) == nospaces("===\n(o.o)\n( ][ )\n( : )"));
    CHECK(nospaces(snowman(12224422)) == nospaces("===\n(o.o)\n( ][ )\n( " " )"));
    CHECK(nospaces(snowman(13334433)) == nospaces("===\n(O_O)\n( _ )\n( _ )"));
    CHECK(nospaces(snowman(14444444)) == nospaces("===\n(--)\n(   )\n(   )"));
    CHECK(nospaces(snowman(22222222))==nospaces(" ___\n.....\n\\(o.o)/\n(][)\n(" ")"));
    CHECK(nospaces(snowman(11111111))==nospaces(" _===_\n(.,.)\n<(:)>\n(:)"));
    CHECK(nospaces(snowman(33333333))==nospaces(" _\n/_\\\n(O_O)\n/(><)\\\n(___)"));
    CHECK(nospaces(snowman(44444444))==nospaces("  ___\n(_*_)\n(_ _)\n()\n( )"));

}

//bad snowman code
    
    TEST_CASE("big and small input numbers"){
        CHECK_THROWS(snowman(0));
        CHECK_THROWS(snowman(5855));
        CHECK_THROWS(snowman(1114411)); 
        CHECK_THROWS(snowman(111111111)); 
        
        }
    
      TEST_CASE("negtive number"){
        CHECK_THROWS(snowman(-16));
        CHECK_THROWS(snowman(-15311));
        CHECK_THROWS(snowman(-1823));
        CHECK_THROWS(snowman(-823));
         CHECK_THROWS(snowman(-16774));

    }