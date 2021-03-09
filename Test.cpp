/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: <Oriya Alperin>
 * 
 * Date: 2021-03
 */

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

//HNLRXYTB
TEST_CASE("Good snowman code") {
	CHECK(nospaces(snowman(11111111)) == nospaces(hat1+leye1+nose1+reye1+larm1+torso1+rarm1+base1));
	CHECK(nospaces(snowman(22222222)) == nospaces(hat2+larm2+leye2+nose2+reye2+rarm2+torso2+base2));
	CHECK(nospaces(snowman(33333333)) == nospaces(hat3+leye3+nose3+reye3+larm3+torso3+rarm3+base3));
	CHECK(nospaces(snowman(44444444)) == nospaces(hat4+leye4+nose4+reye4+larm4+torso4+rarm4+base4));
	
	CHECK(nospaces(snowman(11121314)) == nospaces(hat1+leye1+nose1+reye2+larm1+torso1+rarm3+base4));
	CHECK(nospaces(snowman(22234132)) == nospaces(hat2+leye2+nose2+reye3+larm4+torso3+rarm1+base2));
	CHECK(nospaces(snowman(13233343)) == nospaces(hat1+leye2+nose3+reye3+larm3+torso4+rarm3+base3));
	CHECK(nospaces(snowman(24422233)) == nospaces(hat2+larm2+leye4+nose4+reye2+rarm2+torso3+base3));
	
	CHECK(nospaces(snowman(11112211)) == nospaces(hat1+larm2+leye1+nose1+reye1+rarm2+torso1+base1));
	CHECK(nospaces(snowman(11223344)) == nospaces(hat1+leye2+nose1+reye2+larm3+torso4+rarm3+base4));
	CHECK(nospaces(snowman(33332333)) == nospaces(hat3+larm2+leye3+nose3+reye3+torso3+rarm3+base3));
	CHECK(nospaces(snowman(23442432)) == nospaces(hat2+larm2+leye4+nose3+reye4+torso3+rarm4+base2));

	CHECK(nospaces(snowman(43414433)) == nospaces(hat4+leye4+nose3+reye1+larm4+torso3+rarm4+base3));
	CHECK(nospaces(snowman(14322134)) == nospaces(hat1+larm2+leye3+nose4+reye2+torso3+rarm1+base4));
	CHECK(nospaces(snowman(44333233)) == nospaces(hat4+leye3+nose4+reye3+rarm2+larm3+torso3+base3));
	CHECK(nospaces(snowman(12341234)) == nospaces(hat1+leye3+nose2+reye4+rarm2+larm1+torso3+base4));
	
	CHECK(nospaces(snowman(21431432)) == nospaces(hat2+leye4+nose1+reye3+larm1+torso3+rarm4+base2));
	CHECK(nospaces(snowman(14322231)) == nospaces(hat1+larm2+leye3+nose4+reye2+rarm2+torso3+base1));
	CHECK(nospaces(snowman(11323231)) == nospaces(hat1+leye3+nose1+reye2+rarm2+larm3+torso3+base1));
	CHECK(nospaces(snowman(34324231)) == nospaces(hat3+leye3+nose4+reye2+rarm2+larm4+torso3+base1));
	
	CHECK(nospaces(snowman(43214121)) == nospaces(hat4+leye2+nose3+reye1+larm4+torso2+rarm1+base1));
	CHECK(nospaces(snowman(41323234)) == nospaces(hat4+leye3+nose1+reye2+rarm2+larm3+torso3+base4));
	CHECK(nospaces(snowman(43214321)) == nospaces(hat4+leye2+nose3+reye1+larm4+torso2+rarm3+base1));
	CHECK(nospaces(snowman(12342432)) == nospaces(hat1+larm2+leye3+nose2+reye4+torso3+rarm4+base2));
	
	CHECK(nospaces(snowman(13422212)) == nospaces(hat1+larm2+leye4+nose3+reye2+rarm2+torso1+base2));
	CHECK(nospaces(snowman(41233221)) == nospaces(hat4+leye2+nose1+reye3+rarm2+larm3+torso2+base1));
	CHECK(nospaces(snowman(42332233)) == nospaces(hat4+larm2+leye3+nose2+reye3+rarm2+torso3+base3));
	CHECK(nospaces(snowman(43214141)) == nospaces(hat4+leye2+nose3+reye1+larm4+torso4+rarm1+base1));

	CHECK(nospaces(snowman(14233241)) == nospaces(hat1+leye2+nose4+reye3+rarm2+larm3+torso4+base1));
	CHECK(nospaces(snowman(23421232)) == nospaces(hat2+leye4+nose3+reye2+rarm2+larm1+torso3+base2));
	CHECK(nospaces(snowman(23233323)) == nospaces(hat2+leye2+nose3+reye3+larm3+torso2+rarm3+base3));
	CHECK(nospaces(snowman(33233324)) == nospaces(hat3+leye2+nose3+reye3+larm3+torso2+rarm3+base4));
	
	

}

TEST_CASE("Bad snowman code") {
    //digits in the range
		//length != 8
	CHECK_THROWS(snowman(1));
	CHECK_THROWS(snowman(24));
	CHECK_THROWS(snowman(321));
	CHECK_THROWS(snowman(1331));
    CHECK_THROWS(snowman(43214));
	CHECK_THROWS(snowman(121123));
	CHECK_THROWS(snowman(3421423));
	CHECK_THROWS(snowman(234221211));
			
			//negative
	CHECK_THROWS(snowman(-2));
	CHECK_THROWS(snowman(-34));
	CHECK_THROWS(snowman(-421));
	CHECK_THROWS(snowman(-3214));
    CHECK_THROWS(snowman(-44313));
	CHECK_THROWS(snowman(-112134));
	CHECK_THROWS(snowman(-3241234));
	CHECK_THROWS(snowman(-234111112));
		
		//length = 8
			//negative
	CHECK_THROWS(snowman(-11111111));
	CHECK_THROWS(snowman(-22222222));
	CHECK_THROWS(snowman(-33333333));
	CHECK_THROWS(snowman(-44444444));
	CHECK_THROWS(snowman(-13312113));
	CHECK_THROWS(snowman(-23324122));
	CHECK_THROWS(snowman(-33324122));
	CHECK_THROWS(snowman(-14223113));
	CHECK_THROWS(snowman(-13324122));
	CHECK_THROWS(snowman(-42341234));
	
	//digits not in the range		
		//length = 8
			//one digit worng
	CHECK_THROWS(snowman(01223242));
	CHECK_THROWS(snowman(25223421));
	CHECK_THROWS(snowman(12722134));
	CHECK_THROWS(snowman(34261232));
	CHECK_THROWS(snowman(14229231));
	CHECK_THROWS(snowman(33341822));
	CHECK_THROWS(snowman(12111203));
	CHECK_THROWS(snowman(31124126));
	
			//few digits worng
	CHECK_THROWS(snowman(11683232));
	CHECK_THROWS(snowman(27288321));
	CHECK_THROWS(snowman(32792636));
	CHECK_THROWS(snowman(31812999));
	CHECK_THROWS(snowman(62226581));
	CHECK_THROWS(snowman(31899840));
	CHECK_THROWS(snowman(23555142));
	CHECK_THROWS(snowman(21250100));

			//all digits worng
	CHECK_THROWS(snowman(00000000));
	CHECK_THROWS(snowman(55555555));
	CHECK_THROWS(snowman(66666666));
	CHECK_THROWS(snowman(77777777));
	CHECK_THROWS(snowman(88888888));
	CHECK_THROWS(snowman(99999999));
	CHECK_THROWS(snowman(55678999));
	CHECK_THROWS(snowman(85670056));
	
			//negative
	CHECK_THROWS(snowman(-89796785));
	CHECK_THROWS(snowman(-22222222));
	CHECK_THROWS(snowman(-33358113));
	CHECK_THROWS(snowman(-44792248));
	CHECK_THROWS(snowman(-87624383));
	CHECK_THROWS(snowman(-99752372));
	CHECK_THROWS(snowman(-98777563));
	CHECK_THROWS(snowman(-12618873));
	CHECK_THROWS(snowman(-12304988));
	CHECK_THROWS(snowman(-42181647));
	
		//length != 8
	CHECK_THROWS(snowman(9));
	CHECK_THROWS(snowman(97));
	CHECK_THROWS(snowman(661));
	CHECK_THROWS(snowman(8631));
    CHECK_THROWS(snowman(77614));
	CHECK_THROWS(snowman(127586));
	CHECK_THROWS(snowman(5285230));
	CHECK_THROWS(snowman(230022921));
			
			//negative
	CHECK_THROWS(snowman(-7));
	CHECK_THROWS(snowman(-35));
	CHECK_THROWS(snowman(-458));
	CHECK_THROWS(snowman(-3889));
    CHECK_THROWS(snowman(-2903));
	CHECK_THROWS(snowman(-17356));
	CHECK_THROWS(snowman(-668728));
	CHECK_THROWS(snowman(-25170146));
	

}


/* Add more test cases here */
