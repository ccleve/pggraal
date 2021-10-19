CREATE FUNCTION addthree(integer) RETURNS integer
AS '$libdir/pggraal'
LANGUAGE C IMMUTABLE STRICT;
