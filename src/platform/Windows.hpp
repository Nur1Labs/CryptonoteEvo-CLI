#pragma once

// including windows.h requires usual damage prevention.
// Always include this header after all other platform-specific windows headers

#include <windows.h>
#undef ERROR
#undef min
#undef max