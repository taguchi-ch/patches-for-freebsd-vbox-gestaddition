--- src/VBox/Additions/x11/vboxvideo/vboxvideo_dri.c.orig	2012-11-30 17:07:33.000000000 +0900
+++ src/VBox/Additions/x11/vboxvideo/vboxvideo_dri.c	2012-11-30 17:18:25.000000000 +0900
@@ -68,10 +68,10 @@
                    DRIContextType oldContextType, void *oldContext,
                    DRIContextType newContextType, void *newContext);
 static void
-VBOXDRIInitBuffers(WindowPtr pWin, RegionPtr prgn, CARD32 index);
+VBOXDRIInitBuffers(WindowPtr pWin, RegionPtr prgn, CARD32 c32index);
 static void
 VBOXDRIMoveBuffers(WindowPtr pParent, DDXPointRec ptOldOrg,
-                   RegionPtr prgnSrc, CARD32 index);
+                   RegionPtr prgnSrc, CARD32 c32index);
 static Bool
 VBOXDRIOpenFullScreen(ScreenPtr pScreen);
 static Bool
@@ -362,13 +362,13 @@
 }
 
 static void
-VBOXDRIInitBuffers(WindowPtr pWin, RegionPtr prgn, CARD32 index)
+VBOXDRIInitBuffers(WindowPtr pWin, RegionPtr prgn, CARD32 c32index)
 {
 }
 
 static void
 VBOXDRIMoveBuffers(WindowPtr pParent, DDXPointRec ptOldOrg,
-                   RegionPtr prgnSrc, CARD32 index)
+                   RegionPtr prgnSrc, CARD32 c32index)
 {
 }
 
