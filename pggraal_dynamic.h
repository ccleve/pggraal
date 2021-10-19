#ifndef __PGGRAAL_H
#define __PGGRAAL_H

#include <graal_isolate_dynamic.h>


#if defined(__cplusplus)
extern "C" {
#endif

typedef graal_isolatethread_t* (*BasicFunctions__createIsolate__8fa0a2ef5d6275c2fa8fc231c79d18fc199debd6_fn_t)();

typedef int (*BasicFunctions__addFive__891dee47a48556a79a582ec61b53eb190a55556e_fn_t)(graal_isolatethread_t*, int);

typedef int (*run_main_fn_t)(int argc, char** argv);

typedef void (*vmLocatorSymbol_fn_t)(graal_isolatethread_t* thread);

#if defined(__cplusplus)
}
#endif
#endif
