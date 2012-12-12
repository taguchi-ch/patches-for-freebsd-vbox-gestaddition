--- src/VBox/Runtime/common/dbg/dbgmoddwarf.cpp.orig	2012-11-26 14:36:50.000000000 +0900
+++ src/VBox/Runtime/common/dbg/dbgmoddwarf.cpp	2012-11-26 14:39:38.000000000 +0900
@@ -3318,6 +3318,8 @@
 static DECLCALLBACK(int) rtDbgModDwarf_SymbolByName(PRTDBGMODINT pMod, const char *pszSymbol, size_t cchSymbol,
                                                     PRTDBGSYMBOL pSymInfo)
 {
+    (void) cchSymbol;
+
     PRTDBGMODDWARF pThis = (PRTDBGMODDWARF)pMod->pvDbgPriv;
     Assert(!pszSymbol[cchSymbol]);
     return RTDbgModSymbolByName(pThis->hCnt, pszSymbol/*, cchSymbol*/, pSymInfo);
