//-----------------------------------------------------------------------------
//
//    ** DO NOT EDIT THIS FILE! **
//    This file was generated by a tool
//    re-running the tool will overwrite this file.
//
//-----------------------------------------------------------------------------


#include "SecretLabs_NETMF_Hardware.h"
#include "SecretLabs_NETMF_Hardware_SecretLabs_NETMF_Hardware_PWM.h"

using namespace SecretLabs::NETMF::Hardware;


HRESULT Library_SecretLabs_NETMF_Hardware_SecretLabs_NETMF_Hardware_PWM::PWM_Enable___VOID__U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 1, param0 ) );

        PWM::PWM_Enable( pMngObj,  param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_SecretLabs_NETMF_Hardware_SecretLabs_NETMF_Hardware_PWM::PWM_Disable___VOID__U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 1, param0 ) );

        PWM::PWM_Disable( pMngObj,  param0, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_SecretLabs_NETMF_Hardware_SecretLabs_NETMF_Hardware_PWM::PWM_SetDutyCycle___VOID__U4__U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 1, param0 ) );

        UINT32 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 2, param1 ) );

        PWM::PWM_SetDutyCycle( pMngObj,  param0, param1, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}

HRESULT Library_SecretLabs_NETMF_Hardware_SecretLabs_NETMF_Hardware_PWM::PWM_SetPulse___VOID__U4__U4__U4( CLR_RT_StackFrame& stack )
{
    TINYCLR_HEADER(); hr = S_OK;
    {
        CLR_RT_HeapBlock* pMngObj = Interop_Marshal_RetrieveManagedObject( stack );

        FAULT_ON_NULL(pMngObj);

        UINT32 param0;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 1, param0 ) );

        UINT32 param1;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 2, param1 ) );

        UINT32 param2;
        TINYCLR_CHECK_HRESULT( Interop_Marshal_UINT32( stack, 3, param2 ) );

        PWM::PWM_SetPulse( pMngObj,  param0, param1, param2, hr );
        TINYCLR_CHECK_HRESULT( hr );
    }
    TINYCLR_NOCLEANUP();
}
