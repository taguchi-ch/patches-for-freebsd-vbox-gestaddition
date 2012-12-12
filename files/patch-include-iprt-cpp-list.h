--- include/iprt/cpp/list.h.orig	2012-11-26 16:59:42.000000000 +0900
+++ include/iprt/cpp/list.h	2012-11-26 17:03:16.000000000 +0900
@@ -149,7 +149,7 @@
         if (cSize > 0)
             memcpy(&p[iTo], &p1[0], sizeof(T1) * cSize);
     }
-    static inline void      erase(T2 *p, size_t /* i */) { /* Nothing to do here. */ }
+    static inline void      erase(T2 * /* p */, size_t /* i */) { /* Nothing to do here. */ }
     static inline void      eraseRange(T2 * /* p */, size_t /* cFrom */, size_t /* cSize */) { /* Nothing to do here. */ }
 };
 
