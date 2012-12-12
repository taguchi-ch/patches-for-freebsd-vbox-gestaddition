--- src/VBox/Runtime/common/checksum/manifest2.cpp.orig	2012-11-26 14:28:25.000000000 +0900
+++ src/VBox/Runtime/common/checksum/manifest2.cpp	2012-11-26 14:32:00.000000000 +0900
@@ -295,6 +295,8 @@
  */
 RTDECL(int) RTManifestDup(RTMANIFEST hManifestSrc, PRTMANIFEST phManifestDst)
 {
+    (void) phManifestDst;
+
     RTMANIFESTINT *pThis = hManifestSrc;
     AssertPtrReturn(pThis, VERR_INVALID_HANDLE);
     AssertReturn(pThis->u32Magic == RTMANIFEST_MAGIC, VERR_INVALID_HANDLE);
