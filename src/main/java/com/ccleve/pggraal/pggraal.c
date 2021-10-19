#include "postgres.h"
#include "fmgr.h"
#include "utils/builtins.h"
#include "utils/elog.h"

PG_MODULE_MAGIC;

extern void _PG_init(void);
extern void _PG_fini(void);


void _PG_init(void)
{

    elog(INFO, "Initialized pggraal");
}

void _PG_fini(void)
{
}

PG_FUNCTION_INFO_V1(addthree);
Datum addthree(PG_FUNCTION_ARGS)
{
	int arg = PG_GETARG_INT32(0);
	PG_RETURN_INT32(arg + 3);
}
