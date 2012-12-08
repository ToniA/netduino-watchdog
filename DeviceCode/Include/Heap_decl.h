////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#ifndef _DRIVERS_HEAP_DECL_H_
#define _DRIVERS_HEAP_DECL_H_ 1

//--//

// This function returns location of the CLR heap. 
void HeapLocation( UINT8*& BaseAddress, UINT32& SizeInBytes );

// This function returns location of custom heap for Porting KIT users. 
// In order to use simple heap this function should be implemented by user.
// See heap.cpp for more details on this function.
void CustomHeapLocation( UINT8*& BaseAddress, UINT32& SizeInBytes );

//--//

#endif // _DRIVERS_HEAP_DECL_H_
