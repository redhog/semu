#ifdef COMMON_H
#else
#define COMMON_H

#include "feature.h"

#define unlikely(x) __builtin_expect((x), 0)
#define likely(x) __builtin_expect((x), 1)

#define UNUSED
/* __attribute__((unused)) */

#define MASK(n) (~((~((unsigned int) 0) << (n))))

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(*(a)))

int ilog2(int x);

/* Range check
 * For any variable range checking:
 *     if (x >= minx && x <= maxx) ...
 * it is faster to use bit operation:
 *     if ((signed)((x - minx) | (maxx - x)) >= 0) ...
 */
#define RANGE_CHECK(x, minx, size) \
    ((int32_t) ((x - minx) | (minx + size - 1 - x)) >= 0)

typedef unsigned int uint32_t;

#endif
