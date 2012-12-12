--- src/VBox/Runtime/generic/RTFileReadAllFree-generic.cpp.orig	2012-11-29 17:00:26.000000000 +0900
+++ src/VBox/Runtime/generic/RTFileReadAllFree-generic.cpp	2012-11-29 18:31:56.000000000 +0900
@@ -37,6 +37,8 @@
 
 RTDECL(void) RTFileReadAllFree(void *pvFile, size_t cbFile)
 {
+    (void) cbFile;
+
     AssertPtrReturnVoid(pvFile);
 
     /*
