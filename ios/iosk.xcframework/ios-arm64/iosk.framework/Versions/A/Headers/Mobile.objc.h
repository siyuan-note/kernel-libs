// Objective-C API for talking to github.com/siyuan-note/siyuan-src/kernel/mobile Go package.
//   gobind -lang=objc github.com/siyuan-note/siyuan-src/kernel/mobile
//
// File is generated by gobind. Do not edit.

#ifndef __Mobile_H__
#define __Mobile_H__

@import Foundation;
#include "ref.h"
#include "Universe.objc.h"


FOUNDATION_EXPORT BOOL MobileIsHttpServing(void);

FOUNDATION_EXPORT NSString* _Nonnull MobileLanguage(long num);

FOUNDATION_EXPORT void MobileSetDefaultLang(NSString* _Nullable lang);

FOUNDATION_EXPORT void MobileSetTimezone(NSString* _Nullable container, NSString* _Nullable appDir, NSString* _Nullable timezoneID);

FOUNDATION_EXPORT void MobileShowMsg(NSString* _Nullable msg, long timeout);

FOUNDATION_EXPORT void MobileStartKernel(NSString* _Nullable container, NSString* _Nullable appDir, NSString* _Nullable workspaceDir, NSString* _Nullable nativeLibDir, NSString* _Nullable privateDataDir, NSString* _Nullable localIP, NSString* _Nullable timezoneID);

FOUNDATION_EXPORT void MobileStartKernelFast(NSString* _Nullable container, NSString* _Nullable appDir, NSString* _Nullable workspaceDir, NSString* _Nullable nativeLibDir, NSString* _Nullable privateDataDir, NSString* _Nullable localIP);

#endif
