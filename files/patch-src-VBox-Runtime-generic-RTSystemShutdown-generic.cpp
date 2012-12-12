--- src/VBox/Runtime/generic/RTSystemShutdown-generic.cpp.orig	2012-11-29 21:47:24.000000000 +0900
+++ src/VBox/Runtime/generic/RTSystemShutdown-generic.cpp	2012-11-29 21:49:34.000000000 +0900
@@ -37,6 +37,8 @@
 
 RTDECL(int) RTSystemShutdown(RTMSINTERVAL cMsDelay, uint32_t fFlags, const char *pszLogMsg)
 {
+    (void) cMsDelay;
+
     AssertPtrReturn(pszLogMsg, VERR_INVALID_POINTER);
     AssertReturn(!(fFlags & ~RTSYSTEM_SHUTDOWN_VALID_MASK), VERR_INVALID_PARAMETER);
     return VERR_NOT_SUPPORTED;
