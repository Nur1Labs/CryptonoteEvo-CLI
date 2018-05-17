#pragma once

// defines are for Windows resource compiler
#define cryptonote_VERSION_WINDOWS_COMMA 2, 1, 4, 67
#define cryptonote_VERSION_STRING "2.1.4-The Suniaster"

#ifndef RC_INVOKED  // Windows resource compiler

namespace cryptonote {
inline const char *app_version() { return cryptonote_VERSION_STRING; }
}

#endif
