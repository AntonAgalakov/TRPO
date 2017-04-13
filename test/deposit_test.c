#include <stdio.h>
#include <stdlib.h>
#include <ctest.h>
#include "deposit.h"

CTEST(proverka, test1)
{
	ASSERT_EQUAL(-1, proverka(-1, 10000));
}

CTEST(proverka, test2)
{
	ASSERT_EQUAL(-1, p_srok(-1, 9999));
}

CTEST(proverka, test3)
{
	ASSERT_EQUAL(-1, p_srok(10, 9999));
}

CTEST(proverka, test4)
{
	ASSERT_EQUAL(0, p_srok(1, 10000));
}

CTEST(proverka, test5)
{
	ASSERT_EQUAL(0, p_srok(365, 10000));
}

CTEST(proverka, test6)
{
	ASSERT_EQUAL(-1, p_srok(366, 10000));
}
