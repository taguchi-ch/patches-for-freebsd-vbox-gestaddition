--- src/VBox/Runtime/common/net/netaddrstr.cpp.orig	2012-11-26 16:37:06.000000000 +0900
+++ src/VBox/Runtime/common/net/netaddrstr.cpp	2012-11-26 16:46:25.000000000 +0900
@@ -1044,6 +1044,10 @@
     char *pCurrent = NULL;
     char *pOut = NULL;
 
+    (void) pszPortOut;
+    (void) portOutSize;
+    (void) followRfc;
+
     if (!psz || !pszAddrOut)
         return VERR_NOT_SUPPORTED;
 
@@ -1149,6 +1153,8 @@
     int rc2;
     int returnValue;
 
+    (void) addressOnly;
+
     char *p = NULL, *pl = NULL;
 
     size_t memAllocMaxSize = RT_MAX(strlen(psz), resultAddressSize) + 40;
