/**
 * \file
 * \brief Definition of Enum SensorResult
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

namespace ssbl {

enum SensorResult {
  SSBL_SUCCESS = 0,
  SSBL_COLA_ERR_METHODIN_ACCESSDENIED,
  SSBL_COLA_ERR_METHODIN_UNKNOWNINDEX,
  SSBL_COLA_ERR_VARIABLE_UNKNOWNINDEX,
  SSBL_COLA_ERR_LOCALCONDITIONFAILED,
  SSBL_COLA_ERR_INVALID_DATA,
  SSBL_COLA_ERR_UNKNOWN_ERROR,
  SSBL_COLA_ERR_BUFFER_OVERFLOW,
  SSBL_COLA_ERR_BUFFER_UNDERFLOW,
  SSBL_COLA_ERR_ERROR_UNKNOWN_TYPE,
  SSBL_COLA_ERR_VARIABLE_WRITE_ACCESSDENIED,
  SSBL_COLA_ERR_UNKNOWN_CMD_FOR_NAMESERVER,
  SSBL_COLA_ERR_UNKNOWN_COLA_COMMAND,
  SSBL_COLA_ERR_METHODIN_SERVER_BUSY,
  SSBL_COLA_ERR_FLEX_OUT_OF_BOUNDS,
  SSBL_COLA_ERR_EVENTREG_UNKNOWNINDEX,
  SSBL_COLA_ERR_COLA_A_VALUE_OVERFLOW,
  SSBL_COLA_ERR_COLA_A_INVALID_CHARACTER,
  SSBL_COLA_ERR_OSAI_NO_MESSAGE,
  SSBL_COLA_ERR_OSAI_NO_ANSWER_MESSAGE,
  SSBL_COLA_ERR_INTERNAL,
  SSBL_COLA_ERR_HUBADDRESSCORRUPTED,
  SSBL_COLA_ERR_HUBADDRESSDECODING,
  SSBL_COLA_ERR_HUBADDRESSADDRESSEXEEDED,
  SSBL_COLA_ERR_HUBADDRESSBLANKEXPECTED,
  SSBL_COLA_ERR_ASYNCMETHODSARESUPPRESSED,
  SSBL_COLA_ERR_COMPLEXARRAYSARENOTSUPPORTED,
  SSBL_COLA_ERR_SESSION_NORESOURCES,
  SSBL_COLA_ERR_SESSION_UNKNOWNID,
  SSBL_COLA_ERR_CANNOT_CONNECT,
  SSBL_COLA_ERR_INVALIDPORTID,
  SSBL_COLA_ERR_SCANALREADYACTIVE,
  SSBL_COLA_ERR_OUTOFTIMERS,
  SSBL_COLA_ERR_WRITEMODE_NOTENABLED,
  SSBL_COLA_ERR_SETPORTFAILED,
  SSBL_ERR_ALLOCATE_MEMORY,
  SSBL_ERR_ALLOCATE_SOCKET,
  SSBL_ERR_OPEN_SOCKET,
  SSBL_ERR_SOCKET_IS_CLOSED,
  SSBL_ERR_SEND_FAILED,
  SSBL_ERR_ALLOC_RESSOURCE,
  SSBL_ERR_INIT_NOT_CALLED,
  SSBL_ERR_TRANSMIT_FAILED,
  SSBL_ERR_CONNECT,
  SSBL_ERR_INVALID_PARAM,
  SSBL_ERR_SENSOR_INTERFACE_NOT_SUPPORTED,
  SSBL_ERR_SENSOR_PROTOCOL_NOT_SUPPORTED,
  SSBL_ERR_SENSOR_NOT_IN_DISCONNECTED_STATE,
  SSBL_ERR_SENSOR_NOT_IN_READY_FOR_REQUEST_STATE,
  SSBL_ERR_SENSOR_REQUEST_PENDING,
  SSBL_ERR_SENSOR_REQUEST_FAILED,
  SSBL_ERR_MUTEX_LOCK,
  SSBL_ERR_MUTEX_UNLOCK,
  SSBL_ERR_INVALID_USER_LEVEL,
  SSBL_ERR_TIMEOUT_DURING_REQUEST,
  SSBL_ERR_ACCESS_DENIED,
  SSBL_ERR_DESERIALIZATION,
  SSBL_ERR_SERIALIZATION,
  SSBL_ERR_ATTEMPT_TO_WRITE_READONLY_VAR,
  SSBL_ERR_VARIABLE_DOES_NOT_PROVIDE_EVENT,
  SSBL_ERR_VARIABLE_DOES_NOT_BELONG_TO_THIS_SENSOR,
  SSBL_ERR_FUNCTION_DOES_NOT_BELONG_TO_THIS_SENSOR,
  SSBL_ERR_EVENT_ALREADY_REGISTERED_FAILED,
  SSBL_ERR_EVENT_ALREADY_UNREGISTERED,
  SSBL_ERR_PROTOCOL_NOT_SUPPORTED,
  SSBL_ERR_INVALID_ARGUMENT,
  SSBL_ERR_VARIABLE_ELEMENT_NOT_FOUND,
  SSBL_ERR_VALUE_OUT_OF_RANGE,
  SSBL_ERR_CFG_FILE_NOT_OPEN,
  SSBL_ERR_PARSING_CFG_FILE,
  SSBL_ERR_PROTOCOL_NOT_DETECTED,
  SSBL_ERR_FEATURE_NOT_SUPPORTED,
  SSBL_ERR_INVALID_STATE,
  SSBL_ERR_EVENT_QUEUE,
  SSBL_ERR_CREATING_FAMILY_DEVICE,
  SSBL_RES_NO_PENDING_DATA,
  
};
}
