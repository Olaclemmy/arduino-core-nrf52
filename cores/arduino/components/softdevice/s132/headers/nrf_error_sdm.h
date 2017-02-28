/* Copyright (c) 2010 - 2017, Nordic Semiconductor ASA
 * License Agreement for the Nordic Semiconductor ASA S132 Bluetooth SoftDevice softwar package ("SoftDevice").
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this list
 *    of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form, except as embedded into a Nordic Semiconductor ASA
 *    integrated circuit in a product or a software update for such product, must reproduce
 *    the above copyright notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its contributors may be
 *    used to endorse or promote products derived from this software without specific prior
 *    written permission.
 *
 * 4. This software, with or without modification, must only be used with a Nordic Semiconductor ASA
 *    integrated circuit.
 *
 * 5. Any software provided in binary form under this license must not be reverse engineered,
 *    decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY,
 * NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
 * NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT
 * OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */
 /**
  @addtogroup nrf_sdm_api
  @{
  @defgroup nrf_sdm_error SoftDevice Manager Error Codes
  @{

  @brief Error definitions for the SDM API
*/

/* Header guard */
#ifndef NRF_ERROR_SDM_H__
#define NRF_ERROR_SDM_H__

#include "nrf_error.h"

#ifdef __cplusplus
extern "C" {
#endif

#define NRF_ERROR_SDM_LFCLK_SOURCE_UNKNOWN              (NRF_ERROR_SDM_BASE_NUM + 0)  ///< Unknown lfclk source.
#define NRF_ERROR_SDM_INCORRECT_INTERRUPT_CONFIGURATION (NRF_ERROR_SDM_BASE_NUM + 1)  ///< Incorrect interrupt configuration (can be caused by using illegal priority levels, or having enabled SoftDevice interrupts).
#define NRF_ERROR_SDM_INCORRECT_CLENR0                  (NRF_ERROR_SDM_BASE_NUM + 2)  ///< Incorrect CLENR0 (can be caused by erronous SoftDevice flashing).

#ifdef __cplusplus
}
#endif
#endif // NRF_ERROR_SDM_H__

/**
  @}
  @}
*/
