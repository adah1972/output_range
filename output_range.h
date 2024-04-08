// This file is for backward compatibility only.  Do not use it in new
// projects.  It might be removed one day.

#ifndef OUTPUT_RANGE_H
#define OUTPUT_RANGE_H

#ifdef OUTPUT_RANGE_NO_ARRAY_OUTPUT
#define OSTREAM_RANGE_NO_ARRAY_OUTPUT
#endif

#ifdef OUTPUT_RANGE_NO_STRING_QUOTE
#define OSTREAM_RANGE_NO_STRING_QUOTE
#endif

#include "ostream_range.h"

namespace output_range {

using namespace ostream_range;

} // namespace output_range

#endif // OUTPUT_RANGE_H
