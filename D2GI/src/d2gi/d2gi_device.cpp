
#include "../common.h"

#include "d2gi_device.h"
#include "d2gi_surface.h"
#include "d2gi_enums.h"
#include "d2gi.h"


using namespace D3D7;


D2GIDevice::D2GIDevice(D2GI* pD2GI) : DeviceProxy(), D2GIBase(pD2GI)
{

}


D2GIDevice::~D2GIDevice()
{

}


HRESULT D2GIDevice::SetTexture(DWORD i, LPDIRECTDRAWSURFACE7 lpTex)
{
	/*if (lpTex != NULL)
		lpTex = ((D2GISurface*)lpTex)->GetOriginal();

	return DeviceProxy::SetTexture(i, lpTex);*/

	return DDERR_GENERIC;
}


HRESULT D2GIDevice::EnumTextureFormats(LPD3DENUMPIXELFORMATSCALLBACK pCallback, LPVOID pArg)
{
	INT i;

	for (i = 0; i < (INT)g_uTextureFormatsCount; i++)
	{
		if (!pCallback(g_asTextureFormats + i, pArg))
			break;
	}

	return DD_OK;
}


HRESULT D2GIDevice::SetViewport(D3D7::LPD3DVIEWPORT7 pVP)
{
	m_pD2GI->OnViewportSet(pVP);
	return DD_OK;
}
