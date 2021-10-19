# pggraal
An attempt to combine Postgres and Graal

The idea is to create a Postgres extension in Graal. There isn't much documentation on how to do this. Here's the best
we've got:

https://github.com/oracle/graal/blob/master/substratevm/src/com.oracle.svm.jvmtiagentbase/src/com/oracle/svm/jvmtiagentbase/AgentIsolate.java

https://github.com/kirillp/graalSamples/tree/master/simpleApp

https://cornerwings.github.io/2018/07/graal-native-methods/

https://github.com/cornerwings/graal-native-interaction

Big example of C/Java interfaces:
https://github.com/oracle/graal/blob/master/substratevm/src/com.oracle.svm.tutorial/src/com/oracle/svm/tutorial/CInterfaceTutorial.java

None of this works yet. Here are the problems:

First, here: https://stackoverflow.com/questions/69623475/possible-to-create-graal-native-function-callable-from-c-without-isolate

Second, Graal creates silly function names that have to be called from within C. They end up in the .h file
that Graal creates. For example: int BasicFunctions__addFive__891dee47a48556a79a582ec61b53eb190a55556e(graal_isolatethread_t*, int);

Third, Graal takes a full 25 seconds to compile this toy project.

Fourth, as I suggested in the StackOverflow post, unless you can create a simple function in Graal that can
be called directly from Postgres (after a CREATE FUNCTION call), this is pointless.

Hoping the GraalVM team will clean things up.


