/*******************************************************************************
 *  (c) 2019 Zondax GmbH
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 ********************************************************************************/
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "substrate_types.h"
#include <stddef.h>
#include <stdint.h>

// Based
// https://github.com/paritytech/substrate/blob/master/node/primitives/src/lib.rs

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_BlockNumber_V3_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_CallIndex_V3_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_NestCallIdx_V3_t;

typedef struct {
    const uint8_t* _ptr;
} pd_AccountId_V3_t;

typedef struct {
    pd_CallIndex_V3_t callIndex;
    const uint32_t* _txVerPtr;
    pd_NestCallIdx_V3_t nestCallIdx;
} pd_Call_V3_t;

typedef struct {
    pd_u32_t digest_interval;
    pd_u32_t digest_levels;
} pd_ChangesTrieConfiguration_V3_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_Header_V3_t;

typedef struct {
    const uint8_t* _ptr;
} pd_KeyValue_V3_t;

typedef struct {
    const uint8_t* _ptr;
} pd_Key_V3_t;

typedef struct {
    pd_BlockNumber_V3_t height;
    uint32_t index;
} pd_Timepoint_V3_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_VestingScheduleOfT_V3_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_schedulePeriodBlockNumber_V3_t;

typedef struct {
    pd_Call_V3_t call;
} pd_OpaqueCall_V3_t;

typedef struct {
    uint8_t some;
    pd_ChangesTrieConfiguration_V3_t contained;
} pd_OptionChangesTrieConfiguration_V3_t;

typedef struct {
    uint8_t some;
    pd_Timepoint_V3_t contained;
} pd_OptionTimepoint_V3_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecCall_V3_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_AuthorityIdasRuntimeAppPublicSignature_V3_t;

typedef struct {
    const uint8_t* _ptr;
} pd_Balance_V3_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_BoxAmendment_V3_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_BoxEquivocationProofHashBlockNumber_V3_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_BoxEquivocationProofHeader_V3_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_BoxTasConfigICall_V3_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_BoxTasConfigIProposal_V3_t;

typedef struct {
    const uint8_t* _ptr;
} pd_CertificateId_V3_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_CodeHashT_V3_t;

typedef compactInt_t pd_Compactu128_V3_t;

typedef compactInt_t pd_Compactu32_V3_t;

typedef compactInt_t pd_Compactu64_V3_t;

typedef struct {
    const uint8_t* _ptr;
} pd_H256_V3_t;

typedef struct {
    const uint8_t* _ptr;
} pd_Hash_V3_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_HeartbeatBlockNumber_V3_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_KeyOwnerProof_V3_t;

typedef struct {
    const uint8_t* _ptr;
} pd_Keys_V3_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_LookupasStaticLookupSource_V3_t;

typedef struct {
    uint32_t value;
} pd_MemberCount_V3_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_NextConfigDescriptor_V3_t;

typedef struct {
    uint8_t some;
    pd_AccountId_V3_t contained;
} pd_OptionAccountId_V3_t;

typedef struct {
    uint8_t some;
    pd_schedulePeriodBlockNumber_V3_t contained;
} pd_OptionschedulePeriodBlockNumber_V3_t;

typedef struct {
    uint32_t value;
} pd_Perbill_V3_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecAccountId_V3_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecHeader_V3_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecKeyValue_V3_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecKey_V3_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_VecVestingScheduleOfT_V3_t;

typedef struct {
    uint64_t _len;
    const uint8_t* _ptr;
    uint64_t _lenBuffer;
} pd_Vecu8_V3_t;

typedef struct {
    uint64_t value;
} pd_Weight_V3_t;

typedef struct {
    // TODO: Not implemented
    uint8_t _NOT_IMPLEMENTED__DO_NOT_USE;
} pd_schedulePriority_V3_t;

#ifdef __cplusplus
}
#endif
