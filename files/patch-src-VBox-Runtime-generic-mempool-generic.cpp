--- src/VBox/Runtime/generic/mempool-generic.cpp.orig	2012-11-29 18:36:17.000000000 +0900
+++ src/VBox/Runtime/generic/mempool-generic.cpp	2012-11-29 18:37:54.000000000 +0900
@@ -372,6 +372,8 @@
 
 RTDECL(uint32_t) RTMemPoolRelease(RTMEMPOOL hMemPool, void *pv) RT_NO_THROW
 {
+    (void) hMemPool;
+
     if (!pv)
         return 0;
 
