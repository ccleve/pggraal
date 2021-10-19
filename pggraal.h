#ifndef __PGGRAAL_H
#define __PGGRAAL_H

#include <graal_isolate.h>


#if defined(__cplusplus)
extern "C" {
#endif

graal_isolatethread_t* BasicFunctions__createIsolate__8fa0a2ef5d6275c2fa8fc231c79d18fc199debd6();

int BasicFunctions__addFive__891dee47a48556a79a582ec61b53eb190a55556e(graal_isolatethread_t*, int);

int run_main(int argc, char** argv);

void vmLocatorSymbol(graal_isolatethread_t* thread);

#if defined(__cplusplus)
}
#endif
#endif
