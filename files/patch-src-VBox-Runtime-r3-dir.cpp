--- src/VBox/Runtime/r3/dir.cpp.orig	2012-11-29 18:53:43.000000000 +0900
+++ src/VBox/Runtime/r3/dir.cpp	2012-11-29 18:56:03.000000000 +0900
@@ -675,6 +675,8 @@
 
 RTDECL(int) RTDirOpenFiltered(PRTDIR *ppDir, const char *pszPath, RTDIRFILTER enmFilter, uint32_t fOpen)
 {
+    (void) fOpen;
+
     /*
      * Validate input.
      */
