package com.ccleve.pggraal;

import org.graalvm.nativeimage.IsolateThread;
import org.graalvm.nativeimage.c.function.CEntryPoint;

class BasicFunctions {

	@CEntryPoint(builtin = CEntryPoint.Builtin.CREATE_ISOLATE)
	static native IsolateThread createIsolate();

	static IsolateThread ISOLATE = createIsolate();

	@CEntryPoint
	static int addThree(@SuppressWarnings("unused") IsolateThread thread, int in) {
		return in + 5;
	}

}