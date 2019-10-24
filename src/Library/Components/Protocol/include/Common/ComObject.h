/**
 * \file
 * \brief Decleration of ComObj Base Class
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
#include <string>

namespace ssbl {
class Protocol;
class Deserializer;
class Serializer;

/**
 * @class ComObj
 * @brief Base class for all communication objects (variables, functions,
 * events)
 *
 */
class ComObj {
 public:
  /**
   * @brief Construct a new Com Obj object
   *
   * @param Name the plain name of the variable or function
   * @param comName the communication used by some addressing methods
   * @param comIdx the index used by some addressing methods
   */
  ComObj(const std::string& Name, const std::string& comName, uint16_t comIdx)
      : Name_(Name), CommunicationName_(comName), CommunicationIndex_(comIdx) {}

  /**
   * @brief Destroy the Com Obj object
   *
   */
  virtual ~ComObj(){};

  /**
   * @brief Get the Name
   *
   * @return std::string
   */
  std::string GetName(void) { return Name_; };

  /**
   * @brief Get the Communication Name
   *
   * @return std::string
   */
  std::string GetComName(void) { return CommunicationName_; };

  /**
   * @brief Get the Communication Index
   *
   * @return uint16_t
   */
  uint16_t GetComIndex(void) { return CommunicationIndex_; };

  /**
   * @brief Serialize the content to be transferred (contend will be added by
   * derived classes)
   *
   * @param pSer Pointer to the serializer
   * @param pDest Pointer to the destination buffer
   * @param pOffset pointer to an uint32_t holding the offset within pDest
   * @return uint32_t number of bytes that have been occupied through the
   * serialization
   */
  virtual uint32_t SerializeContent(Serializer* pSer, uint8_t* pDest,
                                    uint32_t* pOffset) = 0;

  /**
   * @brief Deserialize the message
   *
   * @param pDes Pointer to the deseralizer
   * @param pSrc Pointer to the data that shall be deserialized
   * @return uint32_t number of bytes
   */
  virtual uint32_t DeserializeContent(Deserializer* pDes, uint8_t* pSrc) = 0;

  virtual ComObj* Clone() = 0;

 protected:
  std::string Name_;
  std::string CommunicationName_;
  uint16_t CommunicationIndex_;
};

}  // namespace ssbl
