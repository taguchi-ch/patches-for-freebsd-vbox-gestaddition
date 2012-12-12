--- src/VBox/Runtime/generic/critsect-generic.cpp.orig	2012-11-29 16:40:13.000000000 +0900
+++ src/VBox/Runtime/generic/critsect-generic.cpp	2012-11-29 16:55:01.000000000 +0900
@@ -51,6 +51,10 @@
 RTDECL(int) RTCritSectInitEx(PRTCRITSECT pCritSect, uint32_t fFlags, RTLOCKVALCLASS hClass, uint32_t uSubClass,
                              const char *pszNameFmt, ...)
 {
+    (void) hClass;
+    (void) uSubClass;
+    (void) pszNameFmt;
+
     AssertReturn(!(fFlags & ~(RTCRITSECT_FLAGS_NO_NESTING | RTCRITSECT_FLAGS_NO_LOCK_VAL | RTCRITSECT_FLAGS_BOOTSTRAP_HACK | RTCRITSECT_FLAGS_NOP)),
                  VERR_INVALID_PARAMETER);
 
@@ -107,6 +111,9 @@
 
 RTDECL(uint32_t) RTCritSectSetSubClass(PRTCRITSECT pCritSect, uint32_t uSubClass)
 {
+    (void) pCritSect;
+    (void) uSubClass;
+
 #ifdef RTCRITSECT_STRICT
     AssertPtrReturn(pCritSect, RTLOCKVAL_SUB_CLASS_INVALID);
     AssertReturn(pCritSect->u32Magic == RTCRITSECT_MAGIC, RTLOCKVAL_SUB_CLASS_INVALID);
@@ -120,6 +127,8 @@
 
 DECL_FORCE_INLINE(int) rtCritSectTryEnter(PRTCRITSECT pCritSect, PCRTLOCKVALSRCPOS pSrcPos)
 {
+    (void) pSrcPos;
+
     Assert(pCritSect);
     Assert(pCritSect->u32Magic == RTCRITSECT_MAGIC);
     /*AssertReturn(pCritSect->u32Magic == RTCRITSECT_MAGIC, VERR_SEM_DESTROYED);*/
@@ -193,6 +202,8 @@
 
 DECL_FORCE_INLINE(int) rtCritSectEnter(PRTCRITSECT pCritSect, PCRTLOCKVALSRCPOS pSrcPos)
 {
+    (void) pSrcPos;
+
     AssertPtr(pCritSect);
     AssertReturn(pCritSect->u32Magic == RTCRITSECT_MAGIC, VERR_SEM_DESTROYED);
 
