--- src/VBox/Runtime/VBox/logbackdoor.cpp.orig	2012-11-29 21:37:53.000000000 +0900
+++ src/VBox/Runtime/VBox/logbackdoor.cpp	2012-11-29 21:39:39.000000000 +0900
@@ -71,6 +71,8 @@
  */
 static DECLCALLBACK(size_t) rtLogBackdoorOutput(void *pv, const char *pachChars, size_t cbChars)
 {
+    (void) pv;
+
     RTLogWriteUser(pachChars, cbChars);
     return cbChars;
 }
