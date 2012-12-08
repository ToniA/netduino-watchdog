////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


#include "spot_io_native.h"


static const CLR_RT_MethodHandler method_lookup[] =
{
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_spot_io_native_Microsoft_SPOT_IO_NativeFileStream::_ctor___VOID__STRING__I4,
    Library_spot_io_native_Microsoft_SPOT_IO_NativeFileStream::Read___I4__SZARRAY_U1__I4__I4__I4,
    Library_spot_io_native_Microsoft_SPOT_IO_NativeFileStream::Write___I4__SZARRAY_U1__I4__I4__I4,
    Library_spot_io_native_Microsoft_SPOT_IO_NativeFileStream::Seek___I8__I8__U4,
    Library_spot_io_native_Microsoft_SPOT_IO_NativeFileStream::Flush___VOID,
    Library_spot_io_native_Microsoft_SPOT_IO_NativeFileStream::GetLength___I8,
    Library_spot_io_native_Microsoft_SPOT_IO_NativeFileStream::SetLength___VOID__I8,
    Library_spot_io_native_Microsoft_SPOT_IO_NativeFileStream::GetStreamProperties___VOID__BYREF_BOOLEAN__BYREF_BOOLEAN__BYREF_BOOLEAN,
    Library_spot_io_native_Microsoft_SPOT_IO_NativeFileStream::Close___VOID,
    Library_spot_io_native_Microsoft_SPOT_IO_NativeFindFile::_ctor___VOID__STRING__STRING,
    Library_spot_io_native_Microsoft_SPOT_IO_NativeFindFile::GetNext___MicrosoftSPOTIONativeFileInfo,
    Library_spot_io_native_Microsoft_SPOT_IO_NativeFindFile::Close___VOID,
    Library_spot_io_native_Microsoft_SPOT_IO_NativeFindFile::GetFileInfo___STATIC__MicrosoftSPOTIONativeFileInfo__STRING,
    Library_spot_io_native_Microsoft_SPOT_IO_NativeIO::Format___STATIC__VOID__STRING__STRING__U4,
    Library_spot_io_native_Microsoft_SPOT_IO_NativeIO::Delete___STATIC__VOID__STRING,
    Library_spot_io_native_Microsoft_SPOT_IO_NativeIO::Move___STATIC__BOOLEAN__STRING__STRING,
    Library_spot_io_native_Microsoft_SPOT_IO_NativeIO::CreateDirectory___STATIC__VOID__STRING,
    Library_spot_io_native_Microsoft_SPOT_IO_NativeIO::GetAttributes___STATIC__U4__STRING,
    Library_spot_io_native_Microsoft_SPOT_IO_NativeIO::SetAttributes___STATIC__VOID__STRING__U4,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_spot_io_native_Microsoft_SPOT_IO_RemovableMedia::MountRemovableVolumes___STATIC__VOID,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_spot_io_native_Microsoft_SPOT_IO_VolumeInfo::_ctor___VOID__STRING,
    Library_spot_io_native_Microsoft_SPOT_IO_VolumeInfo::_ctor___VOID__U4,
    NULL,
    Library_spot_io_native_Microsoft_SPOT_IO_VolumeInfo::Refresh___VOID,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_spot_io_native_Microsoft_SPOT_IO_VolumeInfo::FlushAll___VOID,
    Library_spot_io_native_Microsoft_SPOT_IO_VolumeInfo::GetVolumes___STATIC__SZARRAY_MicrosoftSPOTIOVolumeInfo,
    Library_spot_io_native_Microsoft_SPOT_IO_VolumeInfo::GetFileSystems___STATIC__SZARRAY_STRING,
};

const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_Microsoft_SPOT_IO =
{
    "Microsoft.SPOT.IO", 
    0x21770FF8,
    method_lookup
};
