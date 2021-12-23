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
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wextern-c-compat"
#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#include "substrate_types.h"
#include "substrate_types_V3.h"
#include <stddef.h>
#include <stdint.h>

#define PD_CALL_SYSTEM_V3 0
#define PD_CALL_TIMESTAMP_V3 1
#define PD_CALL_BALANCES_V3 2
#define PD_CALL_GRANDPA_V3 6
#define PD_CALL_VALIDATORSSET_V3 10
#define PD_CALL_SESSION_V3 12
#define PD_CALL_TECHNICALCOMMITTEE_V3 15
#define PD_CALL_TECHNICALMEMBERSHIP_V3 16
#define PD_CALL_FINANCIALCOMMITTEE_V3 17
#define PD_CALL_FINANCIALMEMBERSHIP_V3 18
#define PD_CALL_ROOTCOMMITTEE_V3 19
#define PD_CALL_ROOTMEMBERSHIP_V3 20
#define PD_CALL_AMENDMENTS_V3 22
#define PD_CALL_MANDATE_V3 23
#define PD_CALL_COMPANYRESERVE_V3 24
#define PD_CALL_INTERNATIONALRESERVE_V3 25
#define PD_CALL_USARESERVE_V3 26
#define PD_CALL_VESTING_V3 27
#define PD_CALL_UTILITY_V3 28
#define PD_CALL_MULTISIG_V3 29
#define PD_CALL_CONTRACTS_V3 30
#define PD_CALL_PKITCR_V3 31
#define PD_CALL_PKIROOTOFTRUST_V3 32
#define PD_CALL_EMERGENCYSHUTDOWN_V3 33
#define PD_CALL_ALLOCATIONS_V3 34
#define PD_CALL_ALLOCATIONSORACLES_V3 35

#ifdef SUBSTRATE_PARSER_FULL
#define PD_CALL_SYSTEM_REMARK_WITH_EVENT_V3 9
typedef struct {
    pd_Vecu8_V3_t remark;
} pd_system_remark_with_event_V3_t;

#define PD_CALL_TIMESTAMP_SET_V3 0
typedef struct {
    pd_Compactu64_V3_t now;
} pd_timestamp_set_V3_t;

#define PD_CALL_BALANCES_TRANSFER_ALL_V3 4
typedef struct {
    pd_LookupasStaticLookupSource_V3_t dest;
    pd_bool_t keep_alive;
} pd_balances_transfer_all_V3_t;

#define PD_CALL_BALANCES_FORCE_UNRESERVE_V3 5
typedef struct {
    pd_LookupasStaticLookupSource_V3_t who;
    pd_Balance_V3_t amount;
} pd_balances_force_unreserve_V3_t;

#define PD_CALL_GRANDPA_NOTE_STALLED_V3 2
typedef struct {
    pd_BlockNumber_V3_t delay;
    pd_BlockNumber_V3_t best_finalized_block_number;
} pd_grandpa_note_stalled_V3_t;

#define PD_CALL_SESSION_SET_KEYS_V3 0
typedef struct {
    pd_Keys_V3_t keys;
    pd_Vecu8_V3_t proof;
} pd_session_set_keys_V3_t;

#define PD_CALL_SESSION_PURGE_KEYS_V3 1
typedef struct {
} pd_session_purge_keys_V3_t;

#define PD_CALL_CONTRACTS_CALL_V3 0
typedef struct {
    pd_LookupasStaticLookupSource_V3_t dest;
    pd_Compactu128_V3_t amount;
    pd_Compactu64_V3_t gas_limit;
    pd_Vecu8_V3_t data;
} pd_contracts_call_V3_t;

#define PD_CALL_CONTRACTS_INSTANTIATE_WITH_CODE_V3 1
typedef struct {
    pd_Compactu128_V3_t endowment;
    pd_Compactu64_V3_t gas_limit;
    pd_Vecu8_V3_t code;
    pd_Vecu8_V3_t data;
    pd_Vecu8_V3_t salt;
} pd_contracts_instantiate_with_code_V3_t;

#define PD_CALL_ALLOCATIONS_ALLOCATE_V3 0
typedef struct {
    pd_AccountId_V3_t to;
    pd_Balance_V3_t amount;
    pd_Vecu8_V3_t proof;
} pd_allocations_allocate_V3_t;

#endif

typedef union {
#ifdef SUBSTRATE_PARSER_FULL
    pd_system_remark_with_event_V3_t system_remark_with_event_V3;
    pd_timestamp_set_V3_t timestamp_set_V3;
    pd_balances_transfer_all_V3_t balances_transfer_all_V3;
    pd_balances_force_unreserve_V3_t balances_force_unreserve_V3;
    pd_grandpa_note_stalled_V3_t grandpa_note_stalled_V3;
    pd_session_set_keys_V3_t session_set_keys_V3;
    pd_session_purge_keys_V3_t session_purge_keys_V3;
    pd_contracts_call_V3_t contracts_call_V3;
    pd_contracts_instantiate_with_code_V3_t contracts_instantiate_with_code_V3;
    pd_allocations_allocate_V3_t allocations_allocate_V3;
#endif
} pd_MethodBasic_V3_t;

#define PD_CALL_BALANCES_TRANSFER_V3 0
typedef struct {
    pd_LookupasStaticLookupSource_V3_t dest;
    pd_Compactu128_V3_t amount;
} pd_balances_transfer_V3_t;

#define PD_CALL_UTILITY_BATCH_V3 0
typedef struct {
    pd_VecCall_V3_t calls;
} pd_utility_batch_V3_t;

#ifdef SUBSTRATE_PARSER_FULL
#define PD_CALL_SYSTEM_FILL_BLOCK_V3 0
typedef struct {
    pd_Perbill_V3_t ratio;
} pd_system_fill_block_V3_t;

#define PD_CALL_SYSTEM_REMARK_V3 1
typedef struct {
    pd_Vecu8_V3_t remark;
} pd_system_remark_V3_t;

#define PD_CALL_SYSTEM_SET_HEAP_PAGES_V3 2
typedef struct {
    pd_u64_t pages;
} pd_system_set_heap_pages_V3_t;

#define PD_CALL_SYSTEM_SET_CODE_V3 3
typedef struct {
    pd_Vecu8_V3_t code;
} pd_system_set_code_V3_t;

#define PD_CALL_SYSTEM_SET_CODE_WITHOUT_CHECKS_V3 4
typedef struct {
    pd_Vecu8_V3_t code;
} pd_system_set_code_without_checks_V3_t;

#define PD_CALL_BALANCES_SET_BALANCE_V3 1
typedef struct {
    pd_LookupasStaticLookupSource_V3_t who;
    pd_Compactu128_V3_t new_free;
    pd_Compactu128_V3_t new_reserved;
} pd_balances_set_balance_V3_t;

#define PD_CALL_BALANCES_FORCE_TRANSFER_V3 2
typedef struct {
    pd_LookupasStaticLookupSource_V3_t source;
    pd_LookupasStaticLookupSource_V3_t dest;
    pd_Compactu128_V3_t amount;
} pd_balances_force_transfer_V3_t;

#define PD_CALL_BALANCES_TRANSFER_KEEP_ALIVE_V3 3
typedef struct {
    pd_LookupasStaticLookupSource_V3_t dest;
    pd_Compactu128_V3_t amount;
} pd_balances_transfer_keep_alive_V3_t;

#define PD_CALL_VALIDATORSSET_REMOVE_MEMBER_V3 1
typedef struct {
    pd_AccountId_V3_t who;
} pd_validatorsset_remove_member_V3_t;

#define PD_CALL_VALIDATORSSET_SWAP_MEMBER_V3 2
typedef struct {
    pd_AccountId_V3_t remove;
    pd_AccountId_V3_t add;
} pd_validatorsset_swap_member_V3_t;

#define PD_CALL_VALIDATORSSET_RESET_MEMBERS_V3 3
typedef struct {
    pd_VecAccountId_V3_t members;
} pd_validatorsset_reset_members_V3_t;

#define PD_CALL_VALIDATORSSET_CHANGE_KEY_V3 4
typedef struct {
    pd_AccountId_V3_t new_;
} pd_validatorsset_change_key_V3_t;

#define PD_CALL_VALIDATORSSET_SET_PRIME_V3 5
typedef struct {
    pd_AccountId_V3_t who;
} pd_validatorsset_set_prime_V3_t;

#define PD_CALL_VALIDATORSSET_CLEAR_PRIME_V3 6
typedef struct {
} pd_validatorsset_clear_prime_V3_t;

#define PD_CALL_TECHNICALCOMMITTEE_VOTE_V3 3
typedef struct {
    pd_Hash_V3_t proposal;
    pd_Compactu32_V3_t index;
    pd_bool_t approve;
} pd_technicalcommittee_vote_V3_t;

#define PD_CALL_TECHNICALCOMMITTEE_CLOSE_V3 4
typedef struct {
    pd_Hash_V3_t proposal_hash;
    pd_Compactu32_V3_t index;
    pd_Compactu64_V3_t proposal_weight_bound;
    pd_Compactu32_V3_t length_bound;
} pd_technicalcommittee_close_V3_t;

#define PD_CALL_TECHNICALCOMMITTEE_DISAPPROVE_PROPOSAL_V3 5
typedef struct {
    pd_Hash_V3_t proposal_hash;
} pd_technicalcommittee_disapprove_proposal_V3_t;

#define PD_CALL_TECHNICALMEMBERSHIP_ADD_MEMBER_V3 0
typedef struct {
    pd_AccountId_V3_t who;
} pd_technicalmembership_add_member_V3_t;

#define PD_CALL_TECHNICALMEMBERSHIP_REMOVE_MEMBER_V3 1
typedef struct {
    pd_AccountId_V3_t who;
} pd_technicalmembership_remove_member_V3_t;

#define PD_CALL_TECHNICALMEMBERSHIP_SWAP_MEMBER_V3 2
typedef struct {
    pd_AccountId_V3_t remove;
    pd_AccountId_V3_t add;
} pd_technicalmembership_swap_member_V3_t;

#define PD_CALL_TECHNICALMEMBERSHIP_RESET_MEMBERS_V3 3
typedef struct {
    pd_VecAccountId_V3_t members;
} pd_technicalmembership_reset_members_V3_t;

#define PD_CALL_TECHNICALMEMBERSHIP_CHANGE_KEY_V3 4
typedef struct {
    pd_AccountId_V3_t new_;
} pd_technicalmembership_change_key_V3_t;

#define PD_CALL_TECHNICALMEMBERSHIP_SET_PRIME_V3 5
typedef struct {
    pd_AccountId_V3_t who;
} pd_technicalmembership_set_prime_V3_t;

#define PD_CALL_TECHNICALMEMBERSHIP_CLEAR_PRIME_V3 6
typedef struct {
} pd_technicalmembership_clear_prime_V3_t;

#define PD_CALL_FINANCIALCOMMITTEE_SET_MEMBERS_V3 0
typedef struct {
    pd_VecAccountId_V3_t new_members;
    pd_OptionAccountId_V3_t prime;
    pd_MemberCount_V3_t old_count;
} pd_financialcommittee_set_members_V3_t;

#define PD_CALL_FINANCIALCOMMITTEE_VOTE_V3 3
typedef struct {
    pd_Hash_V3_t proposal;
    pd_Compactu32_V3_t index;
    pd_bool_t approve;
} pd_financialcommittee_vote_V3_t;

#define PD_CALL_FINANCIALCOMMITTEE_CLOSE_V3 4
typedef struct {
    pd_Hash_V3_t proposal_hash;
    pd_Compactu32_V3_t index;
    pd_Compactu64_V3_t proposal_weight_bound;
    pd_Compactu32_V3_t length_bound;
} pd_financialcommittee_close_V3_t;

#define PD_CALL_FINANCIALCOMMITTEE_DISAPPROVE_PROPOSAL_V3 5
typedef struct {
    pd_Hash_V3_t proposal_hash;
} pd_financialcommittee_disapprove_proposal_V3_t;

#define PD_CALL_FINANCIALMEMBERSHIP_ADD_MEMBER_V3 0
typedef struct {
    pd_AccountId_V3_t who;
} pd_financialmembership_add_member_V3_t;

#define PD_CALL_FINANCIALMEMBERSHIP_REMOVE_MEMBER_V3 1
typedef struct {
    pd_AccountId_V3_t who;
} pd_financialmembership_remove_member_V3_t;

#define PD_CALL_FINANCIALMEMBERSHIP_SWAP_MEMBER_V3 2
typedef struct {
    pd_AccountId_V3_t remove;
    pd_AccountId_V3_t add;
} pd_financialmembership_swap_member_V3_t;

#define PD_CALL_FINANCIALMEMBERSHIP_RESET_MEMBERS_V3 3
typedef struct {
    pd_VecAccountId_V3_t members;
} pd_financialmembership_reset_members_V3_t;

#define PD_CALL_FINANCIALMEMBERSHIP_CHANGE_KEY_V3 4
typedef struct {
    pd_AccountId_V3_t new_;
} pd_financialmembership_change_key_V3_t;

#define PD_CALL_FINANCIALMEMBERSHIP_SET_PRIME_V3 5
typedef struct {
    pd_AccountId_V3_t who;
} pd_financialmembership_set_prime_V3_t;

#define PD_CALL_FINANCIALMEMBERSHIP_CLEAR_PRIME_V3 6
typedef struct {
} pd_financialmembership_clear_prime_V3_t;

#define PD_CALL_ROOTCOMMITTEE_SET_MEMBERS_V3 0
typedef struct {
    pd_VecAccountId_V3_t new_members;
    pd_OptionAccountId_V3_t prime;
    pd_MemberCount_V3_t old_count;
} pd_rootcommittee_set_members_V3_t;

#define PD_CALL_ROOTCOMMITTEE_VOTE_V3 3
typedef struct {
    pd_Hash_V3_t proposal;
    pd_Compactu32_V3_t index;
    pd_bool_t approve;
} pd_rootcommittee_vote_V3_t;

#define PD_CALL_ROOTCOMMITTEE_CLOSE_V3 4
typedef struct {
    pd_Hash_V3_t proposal_hash;
    pd_Compactu32_V3_t index;
    pd_Compactu64_V3_t proposal_weight_bound;
    pd_Compactu32_V3_t length_bound;
} pd_rootcommittee_close_V3_t;

#define PD_CALL_ROOTCOMMITTEE_DISAPPROVE_PROPOSAL_V3 5
typedef struct {
    pd_Hash_V3_t proposal_hash;
} pd_rootcommittee_disapprove_proposal_V3_t;

#define PD_CALL_ROOTMEMBERSHIP_ADD_MEMBER_V3 0
typedef struct {
    pd_AccountId_V3_t who;
} pd_rootmembership_add_member_V3_t;

#define PD_CALL_ROOTMEMBERSHIP_REMOVE_MEMBER_V3 1
typedef struct {
    pd_AccountId_V3_t who;
} pd_rootmembership_remove_member_V3_t;

#define PD_CALL_ROOTMEMBERSHIP_SWAP_MEMBER_V3 2
typedef struct {
    pd_AccountId_V3_t remove;
    pd_AccountId_V3_t add;
} pd_rootmembership_swap_member_V3_t;

#define PD_CALL_ROOTMEMBERSHIP_RESET_MEMBERS_V3 3
typedef struct {
    pd_VecAccountId_V3_t members;
} pd_rootmembership_reset_members_V3_t;

#define PD_CALL_ROOTMEMBERSHIP_CHANGE_KEY_V3 4
typedef struct {
    pd_AccountId_V3_t new_;
} pd_rootmembership_change_key_V3_t;

#define PD_CALL_ROOTMEMBERSHIP_SET_PRIME_V3 5
typedef struct {
    pd_AccountId_V3_t who;
} pd_rootmembership_set_prime_V3_t;

#define PD_CALL_ROOTMEMBERSHIP_CLEAR_PRIME_V3 6
typedef struct {
} pd_rootmembership_clear_prime_V3_t;

#define PD_CALL_AMENDMENTS_VETO_V3 1
typedef struct {
    pd_u64_t amendment_id;
} pd_amendments_veto_V3_t;

#define PD_CALL_MANDATE_APPLY_V3 0
typedef struct {
    pd_Call_V3_t call;
} pd_mandate_apply_V3_t;

#define PD_CALL_COMPANYRESERVE_SPEND_V3 0
typedef struct {
    pd_AccountId_V3_t to;
    pd_Balance_V3_t amount;
} pd_companyreserve_spend_V3_t;

#define PD_CALL_COMPANYRESERVE_TIP_V3 1
typedef struct {
    pd_Balance_V3_t amount;
} pd_companyreserve_tip_V3_t;

#define PD_CALL_INTERNATIONALRESERVE_SPEND_V3 0
typedef struct {
    pd_AccountId_V3_t to;
    pd_Balance_V3_t amount;
} pd_internationalreserve_spend_V3_t;

#define PD_CALL_INTERNATIONALRESERVE_TIP_V3 1
typedef struct {
    pd_Balance_V3_t amount;
} pd_internationalreserve_tip_V3_t;

#define PD_CALL_USARESERVE_SPEND_V3 0
typedef struct {
    pd_AccountId_V3_t to;
    pd_Balance_V3_t amount;
} pd_usareserve_spend_V3_t;

#define PD_CALL_USARESERVE_TIP_V3 1
typedef struct {
    pd_Balance_V3_t amount;
} pd_usareserve_tip_V3_t;

#define PD_CALL_VESTING_CANCEL_ALL_VESTING_SCHEDULES_V3 2
typedef struct {
    pd_LookupasStaticLookupSource_V3_t who;
    pd_LookupasStaticLookupSource_V3_t funds_collector;
    pd_bool_t limit_to_free_balance;
} pd_vesting_cancel_all_vesting_schedules_V3_t;

#define PD_CALL_UTILITY_BATCH_ALL_V3 2
typedef struct {
    pd_VecCall_V3_t calls;
} pd_utility_batch_all_V3_t;

#define PD_CALL_MULTISIG_AS_MULTI_THRESHOLD_1_V3 0
typedef struct {
    pd_VecAccountId_V3_t other_signatories;
    pd_Call_V3_t call;
} pd_multisig_as_multi_threshold_1_V3_t;

#define PD_CALL_MULTISIG_AS_MULTI_V3 1
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_V3_t other_signatories;
    pd_OptionTimepoint_V3_t maybe_timepoint;
    pd_OpaqueCall_V3_t call;
    pd_bool_t store_call;
    pd_Weight_V3_t max_weight;
} pd_multisig_as_multi_V3_t;

#define PD_CALL_MULTISIG_APPROVE_AS_MULTI_V3 2
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_V3_t other_signatories;
    pd_OptionTimepoint_V3_t maybe_timepoint;
    pd_H256_V3_t call_hash;
    pd_Weight_V3_t max_weight;
} pd_multisig_approve_as_multi_V3_t;

#define PD_CALL_MULTISIG_CANCEL_AS_MULTI_V3 3
typedef struct {
    pd_u16_t threshold;
    pd_VecAccountId_V3_t other_signatories;
    pd_Timepoint_V3_t timepoint;
    pd_H256_V3_t call_hash;
} pd_multisig_cancel_as_multi_V3_t;

#define PD_CALL_PKITCR_APPLY_V3 0
typedef struct {
    pd_Vecu8_V3_t metadata;
    pd_Balance_V3_t deposit;
} pd_pkitcr_apply_V3_t;

#define PD_CALL_PKITCR_COUNTER_V3 1
typedef struct {
    pd_AccountId_V3_t member;
    pd_Balance_V3_t deposit;
} pd_pkitcr_counter_V3_t;

#define PD_CALL_PKITCR_VOTE_V3 2
typedef struct {
    pd_AccountId_V3_t member;
    pd_bool_t supporting;
    pd_Balance_V3_t deposit;
} pd_pkitcr_vote_V3_t;

#define PD_CALL_PKITCR_CHALLENGE_V3 3
typedef struct {
    pd_AccountId_V3_t member;
    pd_Balance_V3_t deposit;
} pd_pkitcr_challenge_V3_t;

#define PD_CALL_PKIROOTOFTRUST_BOOK_SLOT_V3 0
typedef struct {
    pd_CertificateId_V3_t certificate_id;
} pd_pkirootoftrust_book_slot_V3_t;

#define PD_CALL_PKIROOTOFTRUST_RENEW_SLOT_V3 1
typedef struct {
    pd_CertificateId_V3_t certificate_id;
} pd_pkirootoftrust_renew_slot_V3_t;

#define PD_CALL_PKIROOTOFTRUST_REVOKE_SLOT_V3 2
typedef struct {
    pd_CertificateId_V3_t certificate_id;
} pd_pkirootoftrust_revoke_slot_V3_t;

#define PD_CALL_PKIROOTOFTRUST_REVOKE_CHILD_V3 3
typedef struct {
    pd_CertificateId_V3_t root;
    pd_CertificateId_V3_t child;
} pd_pkirootoftrust_revoke_child_V3_t;

#define PD_CALL_EMERGENCYSHUTDOWN_TOGGLE_V3 0
typedef struct {
} pd_emergencyshutdown_toggle_V3_t;

#define PD_CALL_ALLOCATIONSORACLES_ADD_MEMBER_V3 0
typedef struct {
    pd_AccountId_V3_t who;
} pd_allocationsoracles_add_member_V3_t;

#define PD_CALL_ALLOCATIONSORACLES_REMOVE_MEMBER_V3 1
typedef struct {
    pd_AccountId_V3_t who;
} pd_allocationsoracles_remove_member_V3_t;

#define PD_CALL_ALLOCATIONSORACLES_SWAP_MEMBER_V3 2
typedef struct {
    pd_AccountId_V3_t remove;
    pd_AccountId_V3_t add;
} pd_allocationsoracles_swap_member_V3_t;

#define PD_CALL_ALLOCATIONSORACLES_RESET_MEMBERS_V3 3
typedef struct {
    pd_VecAccountId_V3_t members;
} pd_allocationsoracles_reset_members_V3_t;

#define PD_CALL_ALLOCATIONSORACLES_CHANGE_KEY_V3 4
typedef struct {
    pd_AccountId_V3_t new_;
} pd_allocationsoracles_change_key_V3_t;

#define PD_CALL_ALLOCATIONSORACLES_SET_PRIME_V3 5
typedef struct {
    pd_AccountId_V3_t who;
} pd_allocationsoracles_set_prime_V3_t;

#define PD_CALL_ALLOCATIONSORACLES_CLEAR_PRIME_V3 6
typedef struct {
} pd_allocationsoracles_clear_prime_V3_t;

#endif

typedef union {
    pd_balances_transfer_V3_t balances_transfer_V3;
    pd_utility_batch_V3_t utility_batch_V3;
#ifdef SUBSTRATE_PARSER_FULL
    pd_system_fill_block_V3_t system_fill_block_V3;
    pd_system_remark_V3_t system_remark_V3;
    pd_system_set_heap_pages_V3_t system_set_heap_pages_V3;
    pd_system_set_code_V3_t system_set_code_V3;
    pd_system_set_code_without_checks_V3_t system_set_code_without_checks_V3;
    pd_balances_set_balance_V3_t balances_set_balance_V3;
    pd_balances_force_transfer_V3_t balances_force_transfer_V3;
    pd_balances_transfer_keep_alive_V3_t balances_transfer_keep_alive_V3;
    pd_validatorsset_remove_member_V3_t validatorsset_remove_member_V3;
    pd_validatorsset_swap_member_V3_t validatorsset_swap_member_V3;
    pd_validatorsset_reset_members_V3_t validatorsset_reset_members_V3;
    pd_validatorsset_change_key_V3_t validatorsset_change_key_V3;
    pd_validatorsset_set_prime_V3_t validatorsset_set_prime_V3;
    pd_validatorsset_clear_prime_V3_t validatorsset_clear_prime_V3;
    pd_technicalcommittee_vote_V3_t technicalcommittee_vote_V3;
    pd_technicalcommittee_close_V3_t technicalcommittee_close_V3;
    pd_technicalcommittee_disapprove_proposal_V3_t technicalcommittee_disapprove_proposal_V3;
    pd_technicalmembership_add_member_V3_t technicalmembership_add_member_V3;
    pd_technicalmembership_remove_member_V3_t technicalmembership_remove_member_V3;
    pd_technicalmembership_swap_member_V3_t technicalmembership_swap_member_V3;
    pd_technicalmembership_reset_members_V3_t technicalmembership_reset_members_V3;
    pd_technicalmembership_change_key_V3_t technicalmembership_change_key_V3;
    pd_technicalmembership_set_prime_V3_t technicalmembership_set_prime_V3;
    pd_technicalmembership_clear_prime_V3_t technicalmembership_clear_prime_V3;
    pd_financialcommittee_set_members_V3_t financialcommittee_set_members_V3;
    pd_financialcommittee_vote_V3_t financialcommittee_vote_V3;
    pd_financialcommittee_close_V3_t financialcommittee_close_V3;
    pd_financialcommittee_disapprove_proposal_V3_t financialcommittee_disapprove_proposal_V3;
    pd_financialmembership_add_member_V3_t financialmembership_add_member_V3;
    pd_financialmembership_remove_member_V3_t financialmembership_remove_member_V3;
    pd_financialmembership_swap_member_V3_t financialmembership_swap_member_V3;
    pd_financialmembership_reset_members_V3_t financialmembership_reset_members_V3;
    pd_financialmembership_change_key_V3_t financialmembership_change_key_V3;
    pd_financialmembership_set_prime_V3_t financialmembership_set_prime_V3;
    pd_financialmembership_clear_prime_V3_t financialmembership_clear_prime_V3;
    pd_rootcommittee_set_members_V3_t rootcommittee_set_members_V3;
    pd_rootcommittee_vote_V3_t rootcommittee_vote_V3;
    pd_rootcommittee_close_V3_t rootcommittee_close_V3;
    pd_rootcommittee_disapprove_proposal_V3_t rootcommittee_disapprove_proposal_V3;
    pd_rootmembership_add_member_V3_t rootmembership_add_member_V3;
    pd_rootmembership_remove_member_V3_t rootmembership_remove_member_V3;
    pd_rootmembership_swap_member_V3_t rootmembership_swap_member_V3;
    pd_rootmembership_reset_members_V3_t rootmembership_reset_members_V3;
    pd_rootmembership_change_key_V3_t rootmembership_change_key_V3;
    pd_rootmembership_set_prime_V3_t rootmembership_set_prime_V3;
    pd_rootmembership_clear_prime_V3_t rootmembership_clear_prime_V3;
    pd_amendments_veto_V3_t amendments_veto_V3;
    pd_mandate_apply_V3_t mandate_apply_V3;
    pd_companyreserve_spend_V3_t companyreserve_spend_V3;
    pd_companyreserve_tip_V3_t companyreserve_tip_V3;
    pd_internationalreserve_spend_V3_t internationalreserve_spend_V3;
    pd_internationalreserve_tip_V3_t internationalreserve_tip_V3;
    pd_usareserve_spend_V3_t usareserve_spend_V3;
    pd_usareserve_tip_V3_t usareserve_tip_V3;
    pd_vesting_cancel_all_vesting_schedules_V3_t vesting_cancel_all_vesting_schedules_V3;
    pd_utility_batch_all_V3_t utility_batch_all_V3;
    pd_multisig_as_multi_threshold_1_V3_t multisig_as_multi_threshold_1_V3;
    pd_multisig_as_multi_V3_t multisig_as_multi_V3;
    pd_multisig_approve_as_multi_V3_t multisig_approve_as_multi_V3;
    pd_multisig_cancel_as_multi_V3_t multisig_cancel_as_multi_V3;
    pd_pkitcr_apply_V3_t pkitcr_apply_V3;
    pd_pkitcr_counter_V3_t pkitcr_counter_V3;
    pd_pkitcr_vote_V3_t pkitcr_vote_V3;
    pd_pkitcr_challenge_V3_t pkitcr_challenge_V3;
    pd_pkirootoftrust_book_slot_V3_t pkirootoftrust_book_slot_V3;
    pd_pkirootoftrust_renew_slot_V3_t pkirootoftrust_renew_slot_V3;
    pd_pkirootoftrust_revoke_slot_V3_t pkirootoftrust_revoke_slot_V3;
    pd_pkirootoftrust_revoke_child_V3_t pkirootoftrust_revoke_child_V3;
    pd_emergencyshutdown_toggle_V3_t emergencyshutdown_toggle_V3;
    pd_allocationsoracles_add_member_V3_t allocationsoracles_add_member_V3;
    pd_allocationsoracles_remove_member_V3_t allocationsoracles_remove_member_V3;
    pd_allocationsoracles_swap_member_V3_t allocationsoracles_swap_member_V3;
    pd_allocationsoracles_reset_members_V3_t allocationsoracles_reset_members_V3;
    pd_allocationsoracles_change_key_V3_t allocationsoracles_change_key_V3;
    pd_allocationsoracles_set_prime_V3_t allocationsoracles_set_prime_V3;
    pd_allocationsoracles_clear_prime_V3_t allocationsoracles_clear_prime_V3;
#endif
} pd_MethodNested_V3_t;

typedef union {
    pd_MethodBasic_V3_t basic;
    pd_MethodNested_V3_t nested;
} pd_Method_V3_t;

#ifdef __cplusplus
}
#endif

#pragma clang diagnostic pop
