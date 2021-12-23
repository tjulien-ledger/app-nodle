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

#include "parser_common.h"
#include "substrate_methods_V3.h"
#include "substrate_types_V3.h"
#include <stddef.h>
#include <stdint.h>

// Read functions
parser_error_t _readAccountId_V3(parser_context_t* c, pd_AccountId_V3_t* v);
parser_error_t _readAuthorityIdasRuntimeAppPublicSignature_V3(parser_context_t* c, pd_AuthorityIdasRuntimeAppPublicSignature_V3_t* v);
parser_error_t _readBalance_V3(parser_context_t* c, pd_Balance_V3_t* v);
parser_error_t _readBlockNumber_V3(parser_context_t* c, pd_BlockNumber_V3_t* v);
parser_error_t _readBoxAmendment_V3(parser_context_t* c, pd_BoxAmendment_V3_t* v);
parser_error_t _readBoxEquivocationProofHashBlockNumber_V3(parser_context_t* c, pd_BoxEquivocationProofHashBlockNumber_V3_t* v);
parser_error_t _readBoxEquivocationProofHeader_V3(parser_context_t* c, pd_BoxEquivocationProofHeader_V3_t* v);
parser_error_t _readBoxTasConfigICall_V3(parser_context_t* c, pd_BoxTasConfigICall_V3_t* v);
parser_error_t _readBoxTasConfigIProposal_V3(parser_context_t* c, pd_BoxTasConfigIProposal_V3_t* v);
parser_error_t _readCallIndex_V3(parser_context_t* c, pd_CallIndex_V3_t* v);
parser_error_t _readCall_V3(parser_context_t* c, pd_Call_V3_t* v);
parser_error_t _readCertificateId_V3(parser_context_t* c, pd_CertificateId_V3_t* v);
parser_error_t _readChangesTrieConfiguration_V3(parser_context_t* c, pd_ChangesTrieConfiguration_V3_t* v);
parser_error_t _readCodeHashT_V3(parser_context_t* c, pd_CodeHashT_V3_t* v);
parser_error_t _readCompactu128_V3(parser_context_t* c, pd_Compactu128_V3_t* v);
parser_error_t _readCompactu32_V3(parser_context_t* c, pd_Compactu32_V3_t* v);
parser_error_t _readCompactu64_V3(parser_context_t* c, pd_Compactu64_V3_t* v);
parser_error_t _readH256_V3(parser_context_t* c, pd_H256_V3_t* v);
parser_error_t _readHash_V3(parser_context_t* c, pd_Hash_V3_t* v);
parser_error_t _readHeader_V3(parser_context_t* c, pd_Header_V3_t* v);
parser_error_t _readHeartbeatBlockNumber_V3(parser_context_t* c, pd_HeartbeatBlockNumber_V3_t* v);
parser_error_t _readKeyOwnerProof_V3(parser_context_t* c, pd_KeyOwnerProof_V3_t* v);
parser_error_t _readKeyValue_V3(parser_context_t* c, pd_KeyValue_V3_t* v);
parser_error_t _readKey_V3(parser_context_t* c, pd_Key_V3_t* v);
parser_error_t _readKeys_V3(parser_context_t* c, pd_Keys_V3_t* v);
parser_error_t _readLookupasStaticLookupSource_V3(parser_context_t* c, pd_LookupasStaticLookupSource_V3_t* v);
parser_error_t _readMemberCount_V3(parser_context_t* c, pd_MemberCount_V3_t* v);
parser_error_t _readNestCallIdx_V3(parser_context_t* c, pd_NestCallIdx_V3_t* v);
parser_error_t _readNextConfigDescriptor_V3(parser_context_t* c, pd_NextConfigDescriptor_V3_t* v);
parser_error_t _readOpaqueCall_V3(parser_context_t* c, pd_OpaqueCall_V3_t* v);
parser_error_t _readOptionAccountId_V3(parser_context_t* c, pd_OptionAccountId_V3_t* v);
parser_error_t _readOptionChangesTrieConfiguration_V3(parser_context_t* c, pd_OptionChangesTrieConfiguration_V3_t* v);
parser_error_t _readOptionTimepoint_V3(parser_context_t* c, pd_OptionTimepoint_V3_t* v);
parser_error_t _readOptionschedulePeriodBlockNumber_V3(parser_context_t* c, pd_OptionschedulePeriodBlockNumber_V3_t* v);
parser_error_t _readPerbill_V3(parser_context_t* c, pd_Perbill_V3_t* v);
parser_error_t _readTimepoint_V3(parser_context_t* c, pd_Timepoint_V3_t* v);
parser_error_t _readVecAccountId_V3(parser_context_t* c, pd_VecAccountId_V3_t* v);
parser_error_t _readVecCall_V3(parser_context_t* c, pd_VecCall_V3_t* v);
parser_error_t _readVecHeader_V3(parser_context_t* c, pd_VecHeader_V3_t* v);
parser_error_t _readVecKeyValue_V3(parser_context_t* c, pd_VecKeyValue_V3_t* v);
parser_error_t _readVecKey_V3(parser_context_t* c, pd_VecKey_V3_t* v);
parser_error_t _readVecVestingScheduleOfT_V3(parser_context_t* c, pd_VecVestingScheduleOfT_V3_t* v);
parser_error_t _readVecu8_V3(parser_context_t* c, pd_Vecu8_V3_t* v);
parser_error_t _readVestingScheduleOfT_V3(parser_context_t* c, pd_VestingScheduleOfT_V3_t* v);
parser_error_t _readWeight_V3(parser_context_t* c, pd_Weight_V3_t* v);
parser_error_t _readschedulePeriodBlockNumber_V3(parser_context_t* c, pd_schedulePeriodBlockNumber_V3_t* v);
parser_error_t _readschedulePriority_V3(parser_context_t* c, pd_schedulePriority_V3_t* v);

// toString functions
parser_error_t _toStringAccountId_V3(
    const pd_AccountId_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringAuthorityIdasRuntimeAppPublicSignature_V3(
    const pd_AuthorityIdasRuntimeAppPublicSignature_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBalance_V3(
    const pd_Balance_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBlockNumber_V3(
    const pd_BlockNumber_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBoxAmendment_V3(
    const pd_BoxAmendment_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBoxEquivocationProofHashBlockNumber_V3(
    const pd_BoxEquivocationProofHashBlockNumber_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBoxEquivocationProofHeader_V3(
    const pd_BoxEquivocationProofHeader_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBoxTasConfigICall_V3(
    const pd_BoxTasConfigICall_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringBoxTasConfigIProposal_V3(
    const pd_BoxTasConfigIProposal_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCallIndex_V3(
    const pd_CallIndex_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCall_V3(
    const pd_Call_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCertificateId_V3(
    const pd_CertificateId_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringChangesTrieConfiguration_V3(
    const pd_ChangesTrieConfiguration_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCodeHashT_V3(
    const pd_CodeHashT_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactu128_V3(
    const pd_Compactu128_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactu32_V3(
    const pd_Compactu32_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringCompactu64_V3(
    const pd_Compactu64_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringH256_V3(
    const pd_H256_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringHash_V3(
    const pd_Hash_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringHeader_V3(
    const pd_Header_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringHeartbeatBlockNumber_V3(
    const pd_HeartbeatBlockNumber_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKeyOwnerProof_V3(
    const pd_KeyOwnerProof_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKeyValue_V3(
    const pd_KeyValue_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKey_V3(
    const pd_Key_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringKeys_V3(
    const pd_Keys_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringLookupasStaticLookupSource_V3(
    const pd_LookupasStaticLookupSource_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringMemberCount_V3(
    const pd_MemberCount_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringNestCallIdx_V3(
    const pd_NestCallIdx_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringNextConfigDescriptor_V3(
    const pd_NextConfigDescriptor_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOpaqueCall_V3(
    const pd_OpaqueCall_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionAccountId_V3(
    const pd_OptionAccountId_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionChangesTrieConfiguration_V3(
    const pd_OptionChangesTrieConfiguration_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionTimepoint_V3(
    const pd_OptionTimepoint_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringOptionschedulePeriodBlockNumber_V3(
    const pd_OptionschedulePeriodBlockNumber_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringPerbill_V3(
    const pd_Perbill_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringTimepoint_V3(
    const pd_Timepoint_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecAccountId_V3(
    const pd_VecAccountId_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecCall_V3(
    const pd_VecCall_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecHeader_V3(
    const pd_VecHeader_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecKeyValue_V3(
    const pd_VecKeyValue_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecKey_V3(
    const pd_VecKey_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecVestingScheduleOfT_V3(
    const pd_VecVestingScheduleOfT_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVecu8_V3(
    const pd_Vecu8_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringVestingScheduleOfT_V3(
    const pd_VestingScheduleOfT_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringWeight_V3(
    const pd_Weight_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringschedulePeriodBlockNumber_V3(
    const pd_schedulePeriodBlockNumber_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

parser_error_t _toStringschedulePriority_V3(
    const pd_schedulePriority_V3_t* v,
    char* outValue,
    uint16_t outValueLen,
    uint8_t pageIdx,
    uint8_t* pageCount);

#ifdef __cplusplus
}
#endif
