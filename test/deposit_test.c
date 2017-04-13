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

CTEST(itogi, test1)
{
	ASSERT_EQUAL(9000, itog(1, 10000));
}

CTEST(itogi, test2)
{
	ASSERT_EQUAL(-1, itog(0, 10000));
}

CTEST(itogi, test3)
{
	ASSERT_EQUAL(-1, itog(1, 9999));
}

CTEST(itogi, test4)
{
	ASSERT_EQUAL(103000, itog(100, 100000));
}

CTEST(itogi, test5)
{
	ASSERT_EQUAL(-1, itog(100, 9999));
}

CTEST(itogi, test6)
{
	ASSERT_EQUAL(11200, itog(365, 10000));
}

CTEST(itogi, test7)
{
	ASSERT_EQUAL(103000, itog(31, 100000));
}

CTEST(itogi, test8)
{
	ASSERT_EQUAL(81000, itog(30, 100000));
}

CTEST(itogi, test9)
{
	ASSERT_EQUAL(108000, itog(240, 100000));
}

CTEST(itogi, test10)
{
	ASSERT_EQUAL(115000, itog(241, 100000));
}

CTEST(itogi, test11)
{
	ASSERT_EQUAL(10200, itog(31, 10000));
}

CTEST(itogi, test12)
{
	ASSERT_EQUAL(10600, itog(121, 10000));
}

CTEST(itogi, test13)
{
	ASSERT_EQUAL(10200, itog(120, 10000));
}

CTEST(itogi, test14)
{
	ASSERT_EQUAL(10600, itog(240, 10000));
}

CTEST(itogi, test15)
{
	ASSERT_EQUAL(11200, itog(241, 10000));
}

CTEST(itogi, test16)
{
	ASSERT_EQUAL(11200, itog(365, 10000));
}

CTEST(itogi, test17)
{
	ASSERT_EQUAL(-1, itog(366, 10000));
}