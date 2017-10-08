#include "arrayutil.h"
#include "result.h"
#include "debug.h"


Result ArrayUtil::analyseArray(std::vector<int> input)
{
	Result result;
	std::vector<int>::iterator it;


	// <-- Durch den input vector Iterieren -->
	for(it=input.begin();it != input.end(); it++){
		if(*it < 0){
			result.nNegative += 1;
		}
		else if (*it > 0) {
			result.nPositive += 1;
		}else {
			result.nZero += 1;
		}
	}

	// <-- Debug Ausgabe -->
	dout("----------------\n");
	dout("in Arrayutil.cpp");
	dout("----------------\n");

	return result;

}
