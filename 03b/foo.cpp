
#include <algorithm>
#include "../foo.h"

#define STATIC_ASSERT(key, x) enum \
{                                  \
    key = 1 / ((x) ? 1 : 0)        \
};

#define COUNTOF(x) (sizeof(x) / sizeof(*(x)))

template <typename T, size_t size>
inline T *endof(T (&ary)[size])
{
    return ary + size;
}

foo::foo()
{
    int initial_values[] = {11, 222, 333};
    STATIC_ASSERT(array_count_should_be_same, COUNTOF(initial_values) == COUNTOF(ary_));
    std::copy(initial_values, endof(initial_values), ary_);
}
