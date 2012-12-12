--- src/VBox/Runtime/common/ldr/ldrPE.cpp.orig	2012-11-26 14:55:38.000000000 +0900
+++ src/VBox/Runtime/common/ldr/ldrPE.cpp	2012-11-26 15:03:53.000000000 +0900
@@ -1009,6 +1009,8 @@
  */
 int rtldrPEValidateFileHeader(PIMAGE_FILE_HEADER pFileHdr, const char *pszLogName, PRTLDRARCH penmArch)
 {
+    (void) pszLogName;
+
     size_t cbOptionalHeader;
     switch (pFileHdr->Machine)
     {
@@ -1068,6 +1070,8 @@
 static int rtldrPEValidateOptionalHeader(const IMAGE_OPTIONAL_HEADER64 *pOptHdr, const char *pszLogName, RTFOFF offNtHdrs,
                                          const IMAGE_FILE_HEADER *pFileHdr, RTFOFF cbRawImage)
 {
+    (void) pszLogName;
+
     const uint16_t CorrectMagic = pFileHdr->SizeOfOptionalHeader == sizeof(IMAGE_OPTIONAL_HEADER32)
                                 ? IMAGE_NT_OPTIONAL_HDR32_MAGIC : IMAGE_NT_OPTIONAL_HDR64_MAGIC;
     if (pOptHdr->Magic != CorrectMagic)
@@ -1245,6 +1249,8 @@
 int rtldrPEValidateSectionHeaders(const IMAGE_SECTION_HEADER *paSections, unsigned cSections, const char *pszLogName,
                                   const IMAGE_OPTIONAL_HEADER64 *pOptHdr, RTFOFF cbRawImage)
 {
+    (void) pszLogName;
+
     const uint32_t              cbImage  = pOptHdr->SizeOfImage;
     const IMAGE_SECTION_HEADER *pSH      = &paSections[0];
     uint32_t                    uRvaPrev = pOptHdr->SizeOfHeaders;
