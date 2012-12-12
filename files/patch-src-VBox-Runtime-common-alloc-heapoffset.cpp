--- src/VBox/Runtime/common/alloc/heapoffset.cpp.orig	2012-11-26 14:17:58.000000000 +0900
+++ src/VBox/Runtime/common/alloc/heapoffset.cpp	2012-11-26 14:21:56.000000000 +0900
@@ -649,6 +649,8 @@
     PRTHEAPOFFSETINTERNAL pHeapInt;
     PRTHEAPOFFSETBLOCK pBlock;
 
+    (void) hHeap;
+
     /*
      * Validate input.
      */
@@ -843,6 +845,8 @@
     PRTHEAPOFFSETBLOCK pBlock;
     size_t cbBlock;
 
+    (void) hHeap;
+
     /*
      * Validate input.
      */
