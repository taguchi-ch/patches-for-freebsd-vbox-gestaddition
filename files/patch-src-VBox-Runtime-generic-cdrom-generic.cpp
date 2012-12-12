--- src/VBox/Runtime/generic/cdrom-generic.cpp.orig	2012-11-29 19:12:44.000000000 +0900
+++ src/VBox/Runtime/generic/cdrom-generic.cpp	2012-11-29 19:28:46.000000000 +0900
@@ -38,48 +38,69 @@
 
 RTDECL(int) RTCdromOpen(const char *psz, uint32_t fFlags, PRTCDROM phCdrom)
 {
+    (void) psz;
+    (void) fFlags;
+    (void) phCdrom;
+
     return VERR_NOT_IMPLEMENTED;
 }
 
 
 RTDECL(uint32_t) RTCdromRetain(RTCDROM hCdrom)
 {
+    (void) hCdrom;
+
     AssertFailedReturn(UINT32_MAX);
 }
 
 
 RTDECL(uint32_t)    RTCdromRelease(RTCDROM hCdrom)
 {
+    (void) hCdrom;
+
     AssertFailedReturn(UINT32_MAX);
 }
 
 
 RTDECL(int) RTCdromQueryMountPoint(RTCDROM hCdrom, char *pszMountPoint, size_t cbMountPoint)
 {
+    (void) hCdrom;
+    (void) pszMountPoint;
+    (void) cbMountPoint;
+
     AssertFailedReturn(VERR_NOT_IMPLEMENTED);
 }
 
 
 RTDECL(int)         RTCdromUnmount(RTCDROM hCdrom)
 {
+    (void) hCdrom;
+
     AssertFailedReturn(VERR_NOT_IMPLEMENTED);
 }
 
 
 RTDECL(int)         RTCdromEject(RTCDROM hCdrom, bool fForce)
 {
+    (void) hCdrom;
+    (void) fForce;
+
     AssertFailedReturn(VERR_NOT_IMPLEMENTED);
 }
 
 
 RTDECL(int)         RTCdromLock(RTCDROM hCdrom)
 {
+    (void) hCdrom;
+
     AssertFailedReturn(VERR_NOT_IMPLEMENTED);
 }
 
 
 RTDECL(int)         RTCdromUnlock(RTCDROM hCdrom)
 {
+    (void) hCdrom;
+
     AssertFailedReturn(VERR_NOT_IMPLEMENTED);
 }
 
@@ -91,6 +112,8 @@
 
 RTDECL(int)         RTCdromOrdinalToName(unsigned iCdrom, char *pszName, size_t cbName)
 {
+    (void) iCdrom;
+
     if (cbName)
         *pszName = '\0';
     return VERR_OUT_OF_RANGE;
@@ -99,6 +122,10 @@
 
 RTDECL(int)         RTCdromOpenByOrdinal(unsigned iCdrom, uint32_t fFlags, PRTCDROM phCdrom)
 {
+    (void) iCdrom;
+    (void) fFlags;
+    (void) phCdrom;
+
     return VERR_OUT_OF_RANGE;
 }
 
