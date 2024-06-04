/************************************************************************
* Copyright 2006-2020 Silicon Software GmbH, 2021-2024 Basler AG
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License (version 2) as
* published by the Free Software Foundation.
*/


#ifndef LIB_OS_ASSERT_H_
#define LIB_OS_ASSERT_H_

#if defined(__linux__)

#include "linux/assert.h"

#elif defined(_WIN32) || defined(_WIN64)

#include "win/assert.h"

#endif

#endif /* LIB_OS_ASSERT_H_ */
