/** @file

Module Name:

  Test.h

  initial version - dmazar

**/

EFI_STATUS
EFIAPI
GetVolumeHandleWithDir(CHAR16 *SearchDir, OUT EFI_HANDLE *Handle);

EFI_STATUS
EFIAPI
InstallTestFSinjection(CHAR16 *TargetDir, CHAR16 *InjectionDir, BOOLEAN SkipCache);
