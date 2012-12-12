--- src/VBox/Runtime/generic/spinlock-generic.cpp.orig	2012-11-29 18:45:41.000000000 +0900
+++ src/VBox/Runtime/generic/spinlock-generic.cpp	2012-11-29 18:47:31.000000000 +0900
@@ -75,6 +75,8 @@
 
 RTDECL(int)  RTSpinlockCreate(PRTSPINLOCK pSpinlock, uint32_t fFlags, const char *pszName)
 {
+    (void) pszName;
+
     PRTSPINLOCKINTERNAL pThis;
     AssertReturn(fFlags == RTSPINLOCK_FLAGS_INTERRUPT_SAFE || fFlags == RTSPINLOCK_FLAGS_INTERRUPT_UNSAFE, VERR_INVALID_PARAMETER);
 
