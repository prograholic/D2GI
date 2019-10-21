#pragma once

#include "../d3d7.h"


extern D3D7::DDSURFACEDESC2 g_asAvailableDisplayModes[];
extern UINT g_uAvailableDisplayModesCount;

extern D3D7::DDCAPS g_sHALCaps;
extern D3D7::DDCAPS g_sHELCaps;

extern D3D7::D3DDEVICEDESC7 g_asDeviceDescs[];
extern CHAR* g_lpszDeviceDescs[];
extern CHAR* g_lpszDeviceNames[];
extern UINT g_uDeviceCount;

extern D3D7::DDPIXELFORMAT g_asTextureFormats[];
extern UINT g_uTextureFormatsCount;

extern D3D7::DDPIXELFORMAT g_pf16_565;
extern D3D7::DDPIXELFORMAT g_pf8_Pal;

extern D3D7::DDPIXELFORMAT g_asZBufferFormats[];
extern UINT g_uZBufferFormatsCount;
