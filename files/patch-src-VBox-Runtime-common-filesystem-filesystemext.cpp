--- src/VBox/Runtime/common/filesystem/filesystemext.cpp.orig	2012-11-26 14:44:50.000000000 +0900
+++ src/VBox/Runtime/common/filesystem/filesystemext.cpp	2012-11-26 14:51:17.000000000 +0900
@@ -325,6 +325,9 @@
 
 static DECLCALLBACK(int) rtFsExtOpenRoot(void *pvThis, PRTVFSDIR phVfsDir)
 {
+    (void) pvThis;
+    (void) phVfsDir;
+
     return VERR_NOT_IMPLEMENTED;
 }
 
