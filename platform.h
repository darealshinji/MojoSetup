#ifndef _INCL_PLATFORM_H_
#define _INCL_PLATFORM_H_

#include "universal.h"

#ifdef __cplusplus
extern "C" {
#endif

// this is called by your mainline.
int MojoSetup_main(int argc, char **argv);

// Caller should _NOT_ free returned string...it's calculated on the first
//  call and reused for future calls.
// !!! FIXME: is that a good idea?
const char *MojoPlatform_appBinaryPath(void);

#ifdef __cplusplus
}
#endif

#endif

// end of platform.h ...

