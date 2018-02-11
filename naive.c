/*
 * naive-search/naive.c --
 *
 * Implementation of naive string search in C together with a
 * collection of test cases.
 */

#include <stdlib.h>
#include <assert.h>

#include "search.h"

static void
check(const char *haystack, const char *needle, int pos)
{
    const char *s = search(haystack, needle);
    int offset = s ? s-haystack : -1;
    assert(offset == pos);
}

int main()
{
    const char *haystack = "find a needle in a haystack";
    check(haystack, "needle", 7);
    check(haystack, "find", 0);
    check(haystack, "ind", 1);
    check(haystack, "stac", 22);
    check(haystack, "tack", 23);
    check(haystack, "", 0);
    check(haystack, "xyz", -1);
    check(haystack, "find two needles in a haystack", -1);
    return 0;
}
