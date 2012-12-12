--- src/VBox/Runtime/common/zip/zip.cpp.orig	2012-11-29 16:26:18.000000000 +0900
+++ src/VBox/Runtime/common/zip/zip.cpp	2012-11-29 16:36:06.000000000 +0900
@@ -1701,6 +1701,9 @@
                                void const *pvSrc, size_t cbSrc,
                                void *pvDst, size_t cbDst, size_t *pcbDstActual) RT_NO_THROW
 {
+    (void) enmLevel;
+    (void) fFlags;
+
     /* input validation - the crash and burn approach as speed is essential here. */
     Assert(enmLevel <= RTZIPLEVEL_MAX && enmLevel >= RTZIPLEVEL_STORE);
     Assert(!fFlags);
@@ -1817,6 +1820,8 @@
                                  void const *pvSrc, size_t cbSrc, size_t *pcbSrcActual,
                                  void *pvDst, size_t cbDst, size_t *pcbDstActual) RT_NO_THROW
 {
+    (void) fFlags;
+
     /* input validation - the crash and burn approach as speed is essential here. */
     Assert(!fFlags);
 
