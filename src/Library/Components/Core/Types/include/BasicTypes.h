/**
 * \file
 * \brief Some basic type and macro definitions - refactor this
 *
 * Copyright 2019, SICK AG, Waldkirch
 *
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
 */

#pragma once
#include <stdint.h>
#include "Protocol/include/Common/ComObject.h"

namespace ssbl {
/**
 *
 * @def SSBL_UNUSED
 * @brief Helper to mark unused parameters
 *
 */
#define SSBL_UNUSED(expr) \
  do {                    \
    (void)(expr);         \
  } while (0)

/**
 * @brief SOPAS Variable can be read only or r/w
 *
 */
typedef enum { READ_ONLY, READ_WRITE } VariableDirection;

/**
 * @brief Types of ComObj
 *
 */
typedef enum {
  SOPAS_VARIABLE,
  SOPAS_EVENT,
  SOPAS_METHOD,
  SOPAS_METHOD_ARG,
  SOPAS_METHOD_RETURN
} ComObjectType;

/**
 * @brief Access levels for SOPAS devices
 *
 */
typedef enum {
  LEVEL_INVALID,
  LEVEL_RUN,
  LEVEL_MAINTAINANCE,
  LEVEL_AUTHORIZED_CLIENT,
  LEVEL_SERVICE,
  MAX_USER_LEVELS
} AccessLevel;

/**
 * @brief Command Language Protocol Types
 *
 */
typedef enum { COLA_A, COLA_B, COLA_2 } ProtocolType;

/**
 * @brief Command Language Addressing Modes
 *
 */
typedef enum { BY_NAME, BY_INDEX } AddressingMode;

/**
 * @brief the event container forwarded to a user in case of a variable event
 *
 */
struct SsblEventContainer {
  uint64_t CallbackParameter;
  ComObj* pComObj;
  ~SsblEventContainer() { delete pComObj; };
};

typedef uint8_t Enum8_t;
typedef uint16_t Enum16_t;

/**
 * @brief FlexString typedef for DeviceIdent -size of 60 is a guess to match a
 * wide range of devices.
 *
 */
#pragma pack(push, 1)
typedef struct {
  uint16_t length;
  uint8_t Text[60];
} DeviceIdentFlexString_t;
#pragma pack(pop)

/**
 * @brief Variable exists in all SOPAS devices.
 *
 */
#pragma pack(push, 1)
typedef struct {
  DeviceIdentFlexString_t Name;
  DeviceIdentFlexString_t Revision;
} DeviceIdent_t;
#pragma pack(pop)

};  // namespace ssbl
