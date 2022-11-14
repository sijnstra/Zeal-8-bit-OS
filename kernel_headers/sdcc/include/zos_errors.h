/* SPDX-FileCopyrightText: 2022 Zeal 8-bit Computer <contact@zeal8bit.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#pragma once

typedef enum {
    ERR_SUCCESS = 0,
    ERR_FAILURE,
    ERR_NOT_IMPLEMENTED,
    ERR_NOT_SUPPORTED,
    ERR_NO_SUCH_ENTRY,
    ERR_INVALID_SYSCALL,
    ERR_INVALID_PARAMETER,
    ERR_INVALID_VIRT_PAGE,
    ERR_INVALID_PHYS_ADDRESS,
    ERR_INVALID_OFFSET,
    ERR_INVALID_NAME,
    ERR_INVALID_PATH,
    ERR_INVALID_FILESYSTEM,
    ERR_INVALID_FILEDEV,
    ERR_PATH_TOO_LONG,
    ERR_ALREADY_EXIST,
    ERR_ALREADY_OPENED,
    ERR_ALREADY_MOUNTED,
    ERR_READ_ONLY,
    ERR_BAD_MODE,
    ERR_CANNOT_REGISTER_MORE,
    ERR_NO_MORE_ENTRIES,
    ERR_NO_MORE_MEMORY,
} zos_err_t;

