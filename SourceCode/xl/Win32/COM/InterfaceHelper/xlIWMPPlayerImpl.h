//--------------------------------------------------------------------
//
//    Copyright (C) Streamlet. All rights reserved.
//
//    File Name:   xlIWMPPlayerImpl.h
//    Author:      Streamlet
//    Create Time: 2012-09-01
//    Description: 
//
//    Version history:
//
//
//--------------------------------------------------------------------

#ifndef __XLIWMPPLAYERIMPL_H_1346CAD0_4217_46CB_A45A_C7C6525000FF_INCLUDED__
#define __XLIWMPPLAYERIMPL_H_1346CAD0_4217_46CB_A45A_C7C6525000FF_INCLUDED__


#include <wmp.h>
#include <xl/Win32/COM/xlComDef.h>
#include <xl/Win32/COM/InterfaceHelper/xlIWMPCoreImpl.h>

namespace xl
{
    template <typename T = IWMPPlayer>
    class IWMPPlayerImpl : public IWMPCoreImpl<T>
    {
    public: // IUnknown Methods
        XL_COM_INTERFACE_BEGIN()
            XL_COM_INTERFACE(IWMPPlayer)
            XL_COM_INTERFACE_CHAIN(IWMPCoreImpl<T>)
        XL_COM_INTERFACE_END()

    public:
        STDMETHOD(get_enabled)(VARIANT_BOOL *pbEnabled)
        {
            return E_NOTIMPL;
        }
        
        STDMETHOD(put_enabled)(VARIANT_BOOL bEnabled)
        {
            return E_NOTIMPL;
        }
        
        STDMETHOD(get_fullScreen)(VARIANT_BOOL *pbFullScreen)
        {
            return E_NOTIMPL;
        }
        
        STDMETHOD(put_fullScreen)(VARIANT_BOOL bFullScreen)
        {
            return E_NOTIMPL;
        }
        
        STDMETHOD(get_enableContextMenu)(VARIANT_BOOL *pbEnableContextMenu)
        {
            return E_NOTIMPL;
        }
        
        STDMETHOD(put_enableContextMenu)(VARIANT_BOOL bEnableContextMenu)
        {
            return E_NOTIMPL;
        }
        
        STDMETHOD(put_uiMode)(BSTR bstrMode)
        {
            return E_NOTIMPL;
        }
        
        STDMETHOD(get_uiMode)(BSTR *pbstrMode)
        {
            return E_NOTIMPL;
        }
    };

} // namespace xl

#endif // #ifndef __XLIWMPPLAYERIMPL_H_1346CAD0_4217_46CB_A45A_C7C6525000FF_INCLUDED__
