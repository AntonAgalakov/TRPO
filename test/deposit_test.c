#include <stdio.h>
#include <stdlib.h>
#include "ctest.h"
#include "deposit.h"

CTEST(proverka, test1)
{
	ASSERT_EQUAL(-1, proverka(-1))
}

CTEST(proverka, test2)
{
	ASSERT_EQUAL(0, p_srok(-1))
}

CTEST(proverka, test2)
{
	ASSERT_EQUAL(5, p_srok(0))
}
