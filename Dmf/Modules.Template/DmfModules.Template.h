/*++

    Copyright (c) Microsoft Corporation.  All rights reserved.

Module Name:

    DmfModules.Template.h

Abstract:

    Definitions specific for the "Template" DMF Library.

Environment:

    Kernel-mode Driver Framework
    User-mode Driver Framework

--*/

#pragma once

// NOTE: The definitions in this file must be surrounded by this annotation to ensure
//       that both C and C++ Clients can easily compile and link with Modules in this Library.
//
#if defined(__cplusplus)
extern "C"
{
#endif // defined(__cplusplus)

// Include DMF Framework and Public Modules.
//
#include "..\Modules.Library\DmfModules.Library.h"
#include "DmfModules.Template.Public.h"

// Other library specific includes.
//

// All the Modules in this Library.
//

#include "Dmf_Template.h"
#include "Dmf_ToasterBus.h"
#include "Dmf_OsrFx2.h"

// NOTE: The definitions in this file must be surrounded by this annotation to ensure
//       that both C and C++ Clients can easily compile and link with Modules in this Library.
//
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)

// eof: DmfModules.Template.h
//
