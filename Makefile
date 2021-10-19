EXTENSION = pggraal
DATA = ppgraal--0.1.0.sql
PGFILEDESC = "pgGraal"
MODULE_big = pggraal

REGRESS = test_addthree

SRCS=$(wildcard src/main/java/com/ccleve/pggraal/*.c)
OBJS=$(SRCS:.c=.o)

# postgres build stuff
PG_CONFIG = pg_config
PGXS := $(shell $(PG_CONFIG) --pgxs)
include $(PGXS)
