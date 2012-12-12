--- src/VBox/Runtime/common/misc/lockvalidator.cpp.orig	2012-11-26 15:09:35.000000000 +0900
+++ src/VBox/Runtime/common/misc/lockvalidator.cpp	2012-11-26 15:14:11.000000000 +0900
@@ -3038,6 +3038,8 @@
 RTDECL(void) RTLockValidatorRecExclSetOwner(PRTLOCKVALRECEXCL pRec, RTTHREAD hThreadSelf,
                                             PCRTLOCKVALSRCPOS pSrcPos, bool fFirstRecursion)
 {
+    (void) fFirstRecursion;
+
     PRTLOCKVALRECUNION pRecU = (PRTLOCKVALRECUNION)pRec;
     if (!pRecU)
         return;
@@ -3079,6 +3081,8 @@
  */
 static void  rtLockValidatorRecExclReleaseOwnerUnchecked(PRTLOCKVALRECUNION pRec, bool fFinalRecursion)
 {
+    (void) fFinalRecursion;
+
     RTTHREADINT *pThread = pRec->Excl.hThread;
     AssertReturnVoid(pThread != NIL_RTTHREAD);
     Assert(pThread == RTThreadSelf());
