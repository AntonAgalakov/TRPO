#include <stdio.h>
#include <stdlib.h>
#include "ctest.h"
#include "deposit.h"

CTEST(Input_data, test1)
{
	ASSERT_EQUAL(-1, proverka(-1, 10000));
}

CTEST(Input_data, test2)
{
	ASSERT_EQUAL(-1, proverka(-1, 9999));
}

CTEST(Input_data, test3)
{
	ASSERT_EQUAL(-1, proverka(10, 9999));
}

CTEST(Input_data, test4)
{
	ASSERT_EQUAL(0, proverka(1, 10000));
}

CTEST(Input_data, test5)
{
	ASSERT_EQUAL(0, proverka(365, 10000));
}

CTEST(Input_data, test6)
{
	ASSERT_EQUAL(-1, proverka(366, 10000));
}
