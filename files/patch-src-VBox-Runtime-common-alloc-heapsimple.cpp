--- src/VBox/Runtime/common/alloc/heapsimple.cpp.orig	2012-11-26 13:58:16.000000000 +0900
+++ src/VBox/Runtime/common/alloc/heapsimple.cpp	2012-11-26 14:04:24.000000000 +0900
@@ -641,6 +641,8 @@
     PRTHEAPSIMPLEINTERNAL pHeapInt;
     PRTHEAPSIMPLEBLOCK pBlock;
 
+    (void) hHeap;
+
     /*
      * Validate input.
      */
@@ -835,6 +837,8 @@
     PRTHEAPSIMPLEBLOCK pBlock;
     size_t cbBlock;
 
+    (void) hHeap;
+
     /*
      * Validate input.
      */
