/*
 * NASA Docket No. GSC-18,587-1 and identified as “The Bundle Protocol Core Flight
 * System Application (BP) v6.5”
 *
 * Copyright © 2020 United States Government as represented by the Administrator of
 * the National Aeronautics and Space Administration. All Rights Reserved.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

/**
 * @file
 *   Specification for the CFS Bundle Protocol (BP) routines that
 *   handle command processing
 */
#ifndef BP_DISPATCH_H
#define BP_DISPATCH_H

/*************************************************************************
 * Includes
 ************************************************************************/
#include "cfe_sb_api_typedefs.h"

/*************************************************************************
 * Exported Functions
 ************************************************************************/

/**
 * \brief Process a command pipe message
 *
 *  \par Description
 *       Processes a single software bus command pipe message. Checks
 *       the message and command IDs and calls the appropriate routine
 *       to handle the message.
 *
 *  \par Assumptions, External Events, and Notes:
 *       None
 *
 *  \param[in] BufPtr Pointer to Software Bus buffer
 */
void BP_AppPipe(const CFE_SB_Buffer_t *BufPtr);

#endif
