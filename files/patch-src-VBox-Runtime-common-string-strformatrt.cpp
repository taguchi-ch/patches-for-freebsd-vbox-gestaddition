--- src/VBox/Runtime/common/string/strformatrt.cpp.orig	2012-11-26 16:50:43.000000000 +0900
+++ src/VBox/Runtime/common/string/strformatrt.cpp	2012-11-26 16:53:53.000000000 +0900
@@ -80,6 +80,8 @@
     size_t      cch;
     char        szBuf[80];
 
+    (void) chArgSize;
+
     if (ch == 'R')
     {
         ch = *(*ppszFormat)++;
