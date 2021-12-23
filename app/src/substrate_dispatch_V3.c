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

#include "substrate_dispatch_V3.h"
#include "substrate_strings.h"
#include "zxmacros.h"
#include <stdint.h>

__Z_INLINE parser_error_t _readMethod_balances_transfer_V3(
    parser_context_t* c, pd_balances_transfer_V3_t* m)
{
    CHECK_ERROR(_readLookupasStaticLookupSource_V3(c, &m->dest))
    CHECK_ERROR(_readCompactu128_V3(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_utility_batch_V3(
    parser_context_t* c, pd_utility_batch_V3_t* m)
{
    CHECK_ERROR(_readVecCall_V3(c, &m->calls))
    return parser_ok;
}

#ifdef SUBSTRATE_PARSER_FULL
__Z_INLINE parser_error_t _readMethod_system_fill_block_V3(
    parser_context_t* c, pd_system_fill_block_V3_t* m)
{
    CHECK_ERROR(_readPerbill_V3(c, &m->ratio))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_remark_V3(
    parser_context_t* c, pd_system_remark_V3_t* m)
{
    CHECK_ERROR(_readVecu8_V3(c, &m->remark))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_set_heap_pages_V3(
    parser_context_t* c, pd_system_set_heap_pages_V3_t* m)
{
    CHECK_ERROR(_readu64(c, &m->pages))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_set_code_V3(
    parser_context_t* c, pd_system_set_code_V3_t* m)
{
    CHECK_ERROR(_readVecu8_V3(c, &m->code))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_set_code_without_checks_V3(
    parser_context_t* c, pd_system_set_code_without_checks_V3_t* m)
{
    CHECK_ERROR(_readVecu8_V3(c, &m->code))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_system_remark_with_event_V3(
    parser_context_t* c, pd_system_remark_with_event_V3_t* m)
{
    CHECK_ERROR(_readVecu8_V3(c, &m->remark))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_timestamp_set_V3(
    parser_context_t* c, pd_timestamp_set_V3_t* m)
{
    CHECK_ERROR(_readCompactu64_V3(c, &m->now))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_balances_set_balance_V3(
    parser_context_t* c, pd_balances_set_balance_V3_t* m)
{
    CHECK_ERROR(_readLookupasStaticLookupSource_V3(c, &m->who))
    CHECK_ERROR(_readCompactu128_V3(c, &m->new_free))
    CHECK_ERROR(_readCompactu128_V3(c, &m->new_reserved))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_balances_force_transfer_V3(
    parser_context_t* c, pd_balances_force_transfer_V3_t* m)
{
    CHECK_ERROR(_readLookupasStaticLookupSource_V3(c, &m->source))
    CHECK_ERROR(_readLookupasStaticLookupSource_V3(c, &m->dest))
    CHECK_ERROR(_readCompactu128_V3(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_balances_transfer_keep_alive_V3(
    parser_context_t* c, pd_balances_transfer_keep_alive_V3_t* m)
{
    CHECK_ERROR(_readLookupasStaticLookupSource_V3(c, &m->dest))
    CHECK_ERROR(_readCompactu128_V3(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_balances_transfer_all_V3(
    parser_context_t* c, pd_balances_transfer_all_V3_t* m)
{
    CHECK_ERROR(_readLookupasStaticLookupSource_V3(c, &m->dest))
    CHECK_ERROR(_readbool(c, &m->keep_alive))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_balances_force_unreserve_V3(
    parser_context_t* c, pd_balances_force_unreserve_V3_t* m)
{
    CHECK_ERROR(_readLookupasStaticLookupSource_V3(c, &m->who))
    CHECK_ERROR(_readBalance_V3(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_grandpa_note_stalled_V3(
    parser_context_t* c, pd_grandpa_note_stalled_V3_t* m)
{
    CHECK_ERROR(_readBlockNumber_V3(c, &m->delay))
    CHECK_ERROR(_readBlockNumber_V3(c, &m->best_finalized_block_number))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_validatorsset_remove_member_V3(
    parser_context_t* c, pd_validatorsset_remove_member_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->who))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_validatorsset_swap_member_V3(
    parser_context_t* c, pd_validatorsset_swap_member_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->remove))
    CHECK_ERROR(_readAccountId_V3(c, &m->add))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_validatorsset_reset_members_V3(
    parser_context_t* c, pd_validatorsset_reset_members_V3_t* m)
{
    CHECK_ERROR(_readVecAccountId_V3(c, &m->members))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_validatorsset_change_key_V3(
    parser_context_t* c, pd_validatorsset_change_key_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->new_))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_validatorsset_set_prime_V3(
    parser_context_t* c, pd_validatorsset_set_prime_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->who))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_validatorsset_clear_prime_V3(
    parser_context_t* c, pd_validatorsset_clear_prime_V3_t* m)
{
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_session_set_keys_V3(
    parser_context_t* c, pd_session_set_keys_V3_t* m)
{
    CHECK_ERROR(_readKeys_V3(c, &m->keys))
    CHECK_ERROR(_readVecu8_V3(c, &m->proof))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_session_purge_keys_V3(
    parser_context_t* c, pd_session_purge_keys_V3_t* m)
{
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_technicalcommittee_vote_V3(
    parser_context_t* c, pd_technicalcommittee_vote_V3_t* m)
{
    CHECK_ERROR(_readHash_V3(c, &m->proposal))
    CHECK_ERROR(_readCompactu32_V3(c, &m->index))
    CHECK_ERROR(_readbool(c, &m->approve))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_technicalcommittee_close_V3(
    parser_context_t* c, pd_technicalcommittee_close_V3_t* m)
{
    CHECK_ERROR(_readHash_V3(c, &m->proposal_hash))
    CHECK_ERROR(_readCompactu32_V3(c, &m->index))
    CHECK_ERROR(_readCompactu64_V3(c, &m->proposal_weight_bound))
    CHECK_ERROR(_readCompactu32_V3(c, &m->length_bound))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_technicalcommittee_disapprove_proposal_V3(
    parser_context_t* c, pd_technicalcommittee_disapprove_proposal_V3_t* m)
{
    CHECK_ERROR(_readHash_V3(c, &m->proposal_hash))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_technicalmembership_add_member_V3(
    parser_context_t* c, pd_technicalmembership_add_member_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->who))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_technicalmembership_remove_member_V3(
    parser_context_t* c, pd_technicalmembership_remove_member_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->who))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_technicalmembership_swap_member_V3(
    parser_context_t* c, pd_technicalmembership_swap_member_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->remove))
    CHECK_ERROR(_readAccountId_V3(c, &m->add))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_technicalmembership_reset_members_V3(
    parser_context_t* c, pd_technicalmembership_reset_members_V3_t* m)
{
    CHECK_ERROR(_readVecAccountId_V3(c, &m->members))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_technicalmembership_change_key_V3(
    parser_context_t* c, pd_technicalmembership_change_key_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->new_))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_technicalmembership_set_prime_V3(
    parser_context_t* c, pd_technicalmembership_set_prime_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->who))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_technicalmembership_clear_prime_V3(
    parser_context_t* c, pd_technicalmembership_clear_prime_V3_t* m)
{
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_financialcommittee_set_members_V3(
    parser_context_t* c, pd_financialcommittee_set_members_V3_t* m)
{
    CHECK_ERROR(_readVecAccountId_V3(c, &m->new_members))
    CHECK_ERROR(_readOptionAccountId_V3(c, &m->prime))
    CHECK_ERROR(_readMemberCount_V3(c, &m->old_count))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_financialcommittee_vote_V3(
    parser_context_t* c, pd_financialcommittee_vote_V3_t* m)
{
    CHECK_ERROR(_readHash_V3(c, &m->proposal))
    CHECK_ERROR(_readCompactu32_V3(c, &m->index))
    CHECK_ERROR(_readbool(c, &m->approve))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_financialcommittee_close_V3(
    parser_context_t* c, pd_financialcommittee_close_V3_t* m)
{
    CHECK_ERROR(_readHash_V3(c, &m->proposal_hash))
    CHECK_ERROR(_readCompactu32_V3(c, &m->index))
    CHECK_ERROR(_readCompactu64_V3(c, &m->proposal_weight_bound))
    CHECK_ERROR(_readCompactu32_V3(c, &m->length_bound))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_financialcommittee_disapprove_proposal_V3(
    parser_context_t* c, pd_financialcommittee_disapprove_proposal_V3_t* m)
{
    CHECK_ERROR(_readHash_V3(c, &m->proposal_hash))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_financialmembership_add_member_V3(
    parser_context_t* c, pd_financialmembership_add_member_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->who))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_financialmembership_remove_member_V3(
    parser_context_t* c, pd_financialmembership_remove_member_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->who))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_financialmembership_swap_member_V3(
    parser_context_t* c, pd_financialmembership_swap_member_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->remove))
    CHECK_ERROR(_readAccountId_V3(c, &m->add))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_financialmembership_reset_members_V3(
    parser_context_t* c, pd_financialmembership_reset_members_V3_t* m)
{
    CHECK_ERROR(_readVecAccountId_V3(c, &m->members))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_financialmembership_change_key_V3(
    parser_context_t* c, pd_financialmembership_change_key_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->new_))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_financialmembership_set_prime_V3(
    parser_context_t* c, pd_financialmembership_set_prime_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->who))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_financialmembership_clear_prime_V3(
    parser_context_t* c, pd_financialmembership_clear_prime_V3_t* m)
{
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_rootcommittee_set_members_V3(
    parser_context_t* c, pd_rootcommittee_set_members_V3_t* m)
{
    CHECK_ERROR(_readVecAccountId_V3(c, &m->new_members))
    CHECK_ERROR(_readOptionAccountId_V3(c, &m->prime))
    CHECK_ERROR(_readMemberCount_V3(c, &m->old_count))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_rootcommittee_vote_V3(
    parser_context_t* c, pd_rootcommittee_vote_V3_t* m)
{
    CHECK_ERROR(_readHash_V3(c, &m->proposal))
    CHECK_ERROR(_readCompactu32_V3(c, &m->index))
    CHECK_ERROR(_readbool(c, &m->approve))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_rootcommittee_close_V3(
    parser_context_t* c, pd_rootcommittee_close_V3_t* m)
{
    CHECK_ERROR(_readHash_V3(c, &m->proposal_hash))
    CHECK_ERROR(_readCompactu32_V3(c, &m->index))
    CHECK_ERROR(_readCompactu64_V3(c, &m->proposal_weight_bound))
    CHECK_ERROR(_readCompactu32_V3(c, &m->length_bound))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_rootcommittee_disapprove_proposal_V3(
    parser_context_t* c, pd_rootcommittee_disapprove_proposal_V3_t* m)
{
    CHECK_ERROR(_readHash_V3(c, &m->proposal_hash))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_rootmembership_add_member_V3(
    parser_context_t* c, pd_rootmembership_add_member_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->who))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_rootmembership_remove_member_V3(
    parser_context_t* c, pd_rootmembership_remove_member_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->who))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_rootmembership_swap_member_V3(
    parser_context_t* c, pd_rootmembership_swap_member_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->remove))
    CHECK_ERROR(_readAccountId_V3(c, &m->add))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_rootmembership_reset_members_V3(
    parser_context_t* c, pd_rootmembership_reset_members_V3_t* m)
{
    CHECK_ERROR(_readVecAccountId_V3(c, &m->members))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_rootmembership_change_key_V3(
    parser_context_t* c, pd_rootmembership_change_key_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->new_))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_rootmembership_set_prime_V3(
    parser_context_t* c, pd_rootmembership_set_prime_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->who))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_rootmembership_clear_prime_V3(
    parser_context_t* c, pd_rootmembership_clear_prime_V3_t* m)
{
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_amendments_veto_V3(
    parser_context_t* c, pd_amendments_veto_V3_t* m)
{
    CHECK_ERROR(_readu64(c, &m->amendment_id))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_mandate_apply_V3(
    parser_context_t* c, pd_mandate_apply_V3_t* m)
{
    CHECK_ERROR(_readCall_V3(c, &m->call))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_companyreserve_spend_V3(
    parser_context_t* c, pd_companyreserve_spend_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->to))
    CHECK_ERROR(_readBalance_V3(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_companyreserve_tip_V3(
    parser_context_t* c, pd_companyreserve_tip_V3_t* m)
{
    CHECK_ERROR(_readBalance_V3(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_internationalreserve_spend_V3(
    parser_context_t* c, pd_internationalreserve_spend_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->to))
    CHECK_ERROR(_readBalance_V3(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_internationalreserve_tip_V3(
    parser_context_t* c, pd_internationalreserve_tip_V3_t* m)
{
    CHECK_ERROR(_readBalance_V3(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_usareserve_spend_V3(
    parser_context_t* c, pd_usareserve_spend_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->to))
    CHECK_ERROR(_readBalance_V3(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_usareserve_tip_V3(
    parser_context_t* c, pd_usareserve_tip_V3_t* m)
{
    CHECK_ERROR(_readBalance_V3(c, &m->amount))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_vesting_cancel_all_vesting_schedules_V3(
    parser_context_t* c, pd_vesting_cancel_all_vesting_schedules_V3_t* m)
{
    CHECK_ERROR(_readLookupasStaticLookupSource_V3(c, &m->who))
    CHECK_ERROR(_readLookupasStaticLookupSource_V3(c, &m->funds_collector))
    CHECK_ERROR(_readbool(c, &m->limit_to_free_balance))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_utility_batch_all_V3(
    parser_context_t* c, pd_utility_batch_all_V3_t* m)
{
    CHECK_ERROR(_readVecCall_V3(c, &m->calls))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_multisig_as_multi_threshold_1_V3(
    parser_context_t* c, pd_multisig_as_multi_threshold_1_V3_t* m)
{
    CHECK_ERROR(_readVecAccountId_V3(c, &m->other_signatories))
    CHECK_ERROR(_readCall_V3(c, &m->call))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_multisig_as_multi_V3(
    parser_context_t* c, pd_multisig_as_multi_V3_t* m)
{
    CHECK_ERROR(_readu16(c, &m->threshold))
    CHECK_ERROR(_readVecAccountId_V3(c, &m->other_signatories))
    CHECK_ERROR(_readOptionTimepoint_V3(c, &m->maybe_timepoint))
    CHECK_ERROR(_readOpaqueCall_V3(c, &m->call))
    CHECK_ERROR(_readbool(c, &m->store_call))
    CHECK_ERROR(_readWeight_V3(c, &m->max_weight))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_multisig_approve_as_multi_V3(
    parser_context_t* c, pd_multisig_approve_as_multi_V3_t* m)
{
    CHECK_ERROR(_readu16(c, &m->threshold))
    CHECK_ERROR(_readVecAccountId_V3(c, &m->other_signatories))
    CHECK_ERROR(_readOptionTimepoint_V3(c, &m->maybe_timepoint))
    CHECK_ERROR(_readH256_V3(c, &m->call_hash))
    CHECK_ERROR(_readWeight_V3(c, &m->max_weight))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_multisig_cancel_as_multi_V3(
    parser_context_t* c, pd_multisig_cancel_as_multi_V3_t* m)
{
    CHECK_ERROR(_readu16(c, &m->threshold))
    CHECK_ERROR(_readVecAccountId_V3(c, &m->other_signatories))
    CHECK_ERROR(_readTimepoint_V3(c, &m->timepoint))
    CHECK_ERROR(_readH256_V3(c, &m->call_hash))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_contracts_call_V3(
    parser_context_t* c, pd_contracts_call_V3_t* m)
{
    CHECK_ERROR(_readLookupasStaticLookupSource_V3(c, &m->dest))
    CHECK_ERROR(_readCompactu128_V3(c, &m->amount))
    CHECK_ERROR(_readCompactu64_V3(c, &m->gas_limit))
    CHECK_ERROR(_readVecu8_V3(c, &m->data))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_contracts_instantiate_with_code_V3(
    parser_context_t* c, pd_contracts_instantiate_with_code_V3_t* m)
{
    CHECK_ERROR(_readCompactu128_V3(c, &m->endowment))
    CHECK_ERROR(_readCompactu64_V3(c, &m->gas_limit))
    CHECK_ERROR(_readVecu8_V3(c, &m->code))
    CHECK_ERROR(_readVecu8_V3(c, &m->data))
    CHECK_ERROR(_readVecu8_V3(c, &m->salt))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_pkitcr_apply_V3(
    parser_context_t* c, pd_pkitcr_apply_V3_t* m)
{
    CHECK_ERROR(_readVecu8_V3(c, &m->metadata))
    CHECK_ERROR(_readBalance_V3(c, &m->deposit))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_pkitcr_counter_V3(
    parser_context_t* c, pd_pkitcr_counter_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->member))
    CHECK_ERROR(_readBalance_V3(c, &m->deposit))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_pkitcr_vote_V3(
    parser_context_t* c, pd_pkitcr_vote_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->member))
    CHECK_ERROR(_readbool(c, &m->supporting))
    CHECK_ERROR(_readBalance_V3(c, &m->deposit))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_pkitcr_challenge_V3(
    parser_context_t* c, pd_pkitcr_challenge_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->member))
    CHECK_ERROR(_readBalance_V3(c, &m->deposit))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_pkirootoftrust_book_slot_V3(
    parser_context_t* c, pd_pkirootoftrust_book_slot_V3_t* m)
{
    CHECK_ERROR(_readCertificateId_V3(c, &m->certificate_id))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_pkirootoftrust_renew_slot_V3(
    parser_context_t* c, pd_pkirootoftrust_renew_slot_V3_t* m)
{
    CHECK_ERROR(_readCertificateId_V3(c, &m->certificate_id))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_pkirootoftrust_revoke_slot_V3(
    parser_context_t* c, pd_pkirootoftrust_revoke_slot_V3_t* m)
{
    CHECK_ERROR(_readCertificateId_V3(c, &m->certificate_id))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_pkirootoftrust_revoke_child_V3(
    parser_context_t* c, pd_pkirootoftrust_revoke_child_V3_t* m)
{
    CHECK_ERROR(_readCertificateId_V3(c, &m->root))
    CHECK_ERROR(_readCertificateId_V3(c, &m->child))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_emergencyshutdown_toggle_V3(
    parser_context_t* c, pd_emergencyshutdown_toggle_V3_t* m)
{
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_allocations_allocate_V3(
    parser_context_t* c, pd_allocations_allocate_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->to))
    CHECK_ERROR(_readBalance_V3(c, &m->amount))
    CHECK_ERROR(_readVecu8_V3(c, &m->proof))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_allocationsoracles_add_member_V3(
    parser_context_t* c, pd_allocationsoracles_add_member_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->who))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_allocationsoracles_remove_member_V3(
    parser_context_t* c, pd_allocationsoracles_remove_member_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->who))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_allocationsoracles_swap_member_V3(
    parser_context_t* c, pd_allocationsoracles_swap_member_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->remove))
    CHECK_ERROR(_readAccountId_V3(c, &m->add))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_allocationsoracles_reset_members_V3(
    parser_context_t* c, pd_allocationsoracles_reset_members_V3_t* m)
{
    CHECK_ERROR(_readVecAccountId_V3(c, &m->members))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_allocationsoracles_change_key_V3(
    parser_context_t* c, pd_allocationsoracles_change_key_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->new_))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_allocationsoracles_set_prime_V3(
    parser_context_t* c, pd_allocationsoracles_set_prime_V3_t* m)
{
    CHECK_ERROR(_readAccountId_V3(c, &m->who))
    return parser_ok;
}

__Z_INLINE parser_error_t _readMethod_allocationsoracles_clear_prime_V3(
    parser_context_t* c, pd_allocationsoracles_clear_prime_V3_t* m)
{
    return parser_ok;
}

#endif

parser_error_t _readMethod_V3(
    parser_context_t* c,
    uint8_t moduleIdx,
    uint8_t callIdx,
    pd_Method_V3_t* method)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {

    case 512: /* module 2 call 0 */
        CHECK_ERROR(_readMethod_balances_transfer_V3(c, &method->nested.balances_transfer_V3))
        break;
    case 7168: /* module 28 call 0 */
        CHECK_ERROR(_readMethod_utility_batch_V3(c, &method->nested.utility_batch_V3))
        break;

#ifdef SUBSTRATE_PARSER_FULL
    case 0: /* module 0 call 0 */
        CHECK_ERROR(_readMethod_system_fill_block_V3(c, &method->nested.system_fill_block_V3))
        break;
    case 1: /* module 0 call 1 */
        CHECK_ERROR(_readMethod_system_remark_V3(c, &method->nested.system_remark_V3))
        break;
    case 2: /* module 0 call 2 */
        CHECK_ERROR(_readMethod_system_set_heap_pages_V3(c, &method->nested.system_set_heap_pages_V3))
        break;
    case 3: /* module 0 call 3 */
        CHECK_ERROR(_readMethod_system_set_code_V3(c, &method->nested.system_set_code_V3))
        break;
    case 4: /* module 0 call 4 */
        CHECK_ERROR(_readMethod_system_set_code_without_checks_V3(c, &method->nested.system_set_code_without_checks_V3))
        break;
    case 9: /* module 0 call 9 */
        CHECK_ERROR(_readMethod_system_remark_with_event_V3(c, &method->basic.system_remark_with_event_V3))
        break;
    case 256: /* module 1 call 0 */
        CHECK_ERROR(_readMethod_timestamp_set_V3(c, &method->basic.timestamp_set_V3))
        break;
    case 513: /* module 2 call 1 */
        CHECK_ERROR(_readMethod_balances_set_balance_V3(c, &method->nested.balances_set_balance_V3))
        break;
    case 514: /* module 2 call 2 */
        CHECK_ERROR(_readMethod_balances_force_transfer_V3(c, &method->nested.balances_force_transfer_V3))
        break;
    case 515: /* module 2 call 3 */
        CHECK_ERROR(_readMethod_balances_transfer_keep_alive_V3(c, &method->nested.balances_transfer_keep_alive_V3))
        break;
    case 516: /* module 2 call 4 */
        CHECK_ERROR(_readMethod_balances_transfer_all_V3(c, &method->basic.balances_transfer_all_V3))
        break;
    case 517: /* module 2 call 5 */
        CHECK_ERROR(_readMethod_balances_force_unreserve_V3(c, &method->basic.balances_force_unreserve_V3))
        break;
    case 1538: /* module 6 call 2 */
        CHECK_ERROR(_readMethod_grandpa_note_stalled_V3(c, &method->basic.grandpa_note_stalled_V3))
        break;
    case 2561: /* module 10 call 1 */
        CHECK_ERROR(_readMethod_validatorsset_remove_member_V3(c, &method->nested.validatorsset_remove_member_V3))
        break;
    case 2562: /* module 10 call 2 */
        CHECK_ERROR(_readMethod_validatorsset_swap_member_V3(c, &method->nested.validatorsset_swap_member_V3))
        break;
    case 2563: /* module 10 call 3 */
        CHECK_ERROR(_readMethod_validatorsset_reset_members_V3(c, &method->nested.validatorsset_reset_members_V3))
        break;
    case 2564: /* module 10 call 4 */
        CHECK_ERROR(_readMethod_validatorsset_change_key_V3(c, &method->nested.validatorsset_change_key_V3))
        break;
    case 2565: /* module 10 call 5 */
        CHECK_ERROR(_readMethod_validatorsset_set_prime_V3(c, &method->nested.validatorsset_set_prime_V3))
        break;
    case 2566: /* module 10 call 6 */
        CHECK_ERROR(_readMethod_validatorsset_clear_prime_V3(c, &method->nested.validatorsset_clear_prime_V3))
        break;
    case 3072: /* module 12 call 0 */
        CHECK_ERROR(_readMethod_session_set_keys_V3(c, &method->basic.session_set_keys_V3))
        break;
    case 3073: /* module 12 call 1 */
        CHECK_ERROR(_readMethod_session_purge_keys_V3(c, &method->basic.session_purge_keys_V3))
        break;
    case 3843: /* module 15 call 3 */
        CHECK_ERROR(_readMethod_technicalcommittee_vote_V3(c, &method->nested.technicalcommittee_vote_V3))
        break;
    case 3844: /* module 15 call 4 */
        CHECK_ERROR(_readMethod_technicalcommittee_close_V3(c, &method->nested.technicalcommittee_close_V3))
        break;
    case 3845: /* module 15 call 5 */
        CHECK_ERROR(_readMethod_technicalcommittee_disapprove_proposal_V3(c, &method->nested.technicalcommittee_disapprove_proposal_V3))
        break;
    case 4096: /* module 16 call 0 */
        CHECK_ERROR(_readMethod_technicalmembership_add_member_V3(c, &method->nested.technicalmembership_add_member_V3))
        break;
    case 4097: /* module 16 call 1 */
        CHECK_ERROR(_readMethod_technicalmembership_remove_member_V3(c, &method->nested.technicalmembership_remove_member_V3))
        break;
    case 4098: /* module 16 call 2 */
        CHECK_ERROR(_readMethod_technicalmembership_swap_member_V3(c, &method->nested.technicalmembership_swap_member_V3))
        break;
    case 4099: /* module 16 call 3 */
        CHECK_ERROR(_readMethod_technicalmembership_reset_members_V3(c, &method->nested.technicalmembership_reset_members_V3))
        break;
    case 4100: /* module 16 call 4 */
        CHECK_ERROR(_readMethod_technicalmembership_change_key_V3(c, &method->nested.technicalmembership_change_key_V3))
        break;
    case 4101: /* module 16 call 5 */
        CHECK_ERROR(_readMethod_technicalmembership_set_prime_V3(c, &method->nested.technicalmembership_set_prime_V3))
        break;
    case 4102: /* module 16 call 6 */
        CHECK_ERROR(_readMethod_technicalmembership_clear_prime_V3(c, &method->nested.technicalmembership_clear_prime_V3))
        break;
    case 4352: /* module 17 call 0 */
        CHECK_ERROR(_readMethod_financialcommittee_set_members_V3(c, &method->nested.financialcommittee_set_members_V3))
        break;
    case 4355: /* module 17 call 3 */
        CHECK_ERROR(_readMethod_financialcommittee_vote_V3(c, &method->nested.financialcommittee_vote_V3))
        break;
    case 4356: /* module 17 call 4 */
        CHECK_ERROR(_readMethod_financialcommittee_close_V3(c, &method->nested.financialcommittee_close_V3))
        break;
    case 4357: /* module 17 call 5 */
        CHECK_ERROR(_readMethod_financialcommittee_disapprove_proposal_V3(c, &method->nested.financialcommittee_disapprove_proposal_V3))
        break;
    case 4608: /* module 18 call 0 */
        CHECK_ERROR(_readMethod_financialmembership_add_member_V3(c, &method->nested.financialmembership_add_member_V3))
        break;
    case 4609: /* module 18 call 1 */
        CHECK_ERROR(_readMethod_financialmembership_remove_member_V3(c, &method->nested.financialmembership_remove_member_V3))
        break;
    case 4610: /* module 18 call 2 */
        CHECK_ERROR(_readMethod_financialmembership_swap_member_V3(c, &method->nested.financialmembership_swap_member_V3))
        break;
    case 4611: /* module 18 call 3 */
        CHECK_ERROR(_readMethod_financialmembership_reset_members_V3(c, &method->nested.financialmembership_reset_members_V3))
        break;
    case 4612: /* module 18 call 4 */
        CHECK_ERROR(_readMethod_financialmembership_change_key_V3(c, &method->nested.financialmembership_change_key_V3))
        break;
    case 4613: /* module 18 call 5 */
        CHECK_ERROR(_readMethod_financialmembership_set_prime_V3(c, &method->nested.financialmembership_set_prime_V3))
        break;
    case 4614: /* module 18 call 6 */
        CHECK_ERROR(_readMethod_financialmembership_clear_prime_V3(c, &method->nested.financialmembership_clear_prime_V3))
        break;
    case 4864: /* module 19 call 0 */
        CHECK_ERROR(_readMethod_rootcommittee_set_members_V3(c, &method->nested.rootcommittee_set_members_V3))
        break;
    case 4867: /* module 19 call 3 */
        CHECK_ERROR(_readMethod_rootcommittee_vote_V3(c, &method->nested.rootcommittee_vote_V3))
        break;
    case 4868: /* module 19 call 4 */
        CHECK_ERROR(_readMethod_rootcommittee_close_V3(c, &method->nested.rootcommittee_close_V3))
        break;
    case 4869: /* module 19 call 5 */
        CHECK_ERROR(_readMethod_rootcommittee_disapprove_proposal_V3(c, &method->nested.rootcommittee_disapprove_proposal_V3))
        break;
    case 5120: /* module 20 call 0 */
        CHECK_ERROR(_readMethod_rootmembership_add_member_V3(c, &method->nested.rootmembership_add_member_V3))
        break;
    case 5121: /* module 20 call 1 */
        CHECK_ERROR(_readMethod_rootmembership_remove_member_V3(c, &method->nested.rootmembership_remove_member_V3))
        break;
    case 5122: /* module 20 call 2 */
        CHECK_ERROR(_readMethod_rootmembership_swap_member_V3(c, &method->nested.rootmembership_swap_member_V3))
        break;
    case 5123: /* module 20 call 3 */
        CHECK_ERROR(_readMethod_rootmembership_reset_members_V3(c, &method->nested.rootmembership_reset_members_V3))
        break;
    case 5124: /* module 20 call 4 */
        CHECK_ERROR(_readMethod_rootmembership_change_key_V3(c, &method->nested.rootmembership_change_key_V3))
        break;
    case 5125: /* module 20 call 5 */
        CHECK_ERROR(_readMethod_rootmembership_set_prime_V3(c, &method->nested.rootmembership_set_prime_V3))
        break;
    case 5126: /* module 20 call 6 */
        CHECK_ERROR(_readMethod_rootmembership_clear_prime_V3(c, &method->nested.rootmembership_clear_prime_V3))
        break;
    case 5633: /* module 22 call 1 */
        CHECK_ERROR(_readMethod_amendments_veto_V3(c, &method->nested.amendments_veto_V3))
        break;
    case 5888: /* module 23 call 0 */
        CHECK_ERROR(_readMethod_mandate_apply_V3(c, &method->nested.mandate_apply_V3))
        break;
    case 6144: /* module 24 call 0 */
        CHECK_ERROR(_readMethod_companyreserve_spend_V3(c, &method->nested.companyreserve_spend_V3))
        break;
    case 6145: /* module 24 call 1 */
        CHECK_ERROR(_readMethod_companyreserve_tip_V3(c, &method->nested.companyreserve_tip_V3))
        break;
    case 6400: /* module 25 call 0 */
        CHECK_ERROR(_readMethod_internationalreserve_spend_V3(c, &method->nested.internationalreserve_spend_V3))
        break;
    case 6401: /* module 25 call 1 */
        CHECK_ERROR(_readMethod_internationalreserve_tip_V3(c, &method->nested.internationalreserve_tip_V3))
        break;
    case 6656: /* module 26 call 0 */
        CHECK_ERROR(_readMethod_usareserve_spend_V3(c, &method->nested.usareserve_spend_V3))
        break;
    case 6657: /* module 26 call 1 */
        CHECK_ERROR(_readMethod_usareserve_tip_V3(c, &method->nested.usareserve_tip_V3))
        break;
    case 6914: /* module 27 call 2 */
        CHECK_ERROR(_readMethod_vesting_cancel_all_vesting_schedules_V3(c, &method->nested.vesting_cancel_all_vesting_schedules_V3))
        break;
    case 7170: /* module 28 call 2 */
        CHECK_ERROR(_readMethod_utility_batch_all_V3(c, &method->nested.utility_batch_all_V3))
        break;
    case 7424: /* module 29 call 0 */
        CHECK_ERROR(_readMethod_multisig_as_multi_threshold_1_V3(c, &method->nested.multisig_as_multi_threshold_1_V3))
        break;
    case 7425: /* module 29 call 1 */
        CHECK_ERROR(_readMethod_multisig_as_multi_V3(c, &method->nested.multisig_as_multi_V3))
        break;
    case 7426: /* module 29 call 2 */
        CHECK_ERROR(_readMethod_multisig_approve_as_multi_V3(c, &method->nested.multisig_approve_as_multi_V3))
        break;
    case 7427: /* module 29 call 3 */
        CHECK_ERROR(_readMethod_multisig_cancel_as_multi_V3(c, &method->nested.multisig_cancel_as_multi_V3))
        break;
    case 7680: /* module 30 call 0 */
        CHECK_ERROR(_readMethod_contracts_call_V3(c, &method->basic.contracts_call_V3))
        break;
    case 7681: /* module 30 call 1 */
        CHECK_ERROR(_readMethod_contracts_instantiate_with_code_V3(c, &method->basic.contracts_instantiate_with_code_V3))
        break;
    case 7936: /* module 31 call 0 */
        CHECK_ERROR(_readMethod_pkitcr_apply_V3(c, &method->nested.pkitcr_apply_V3))
        break;
    case 7937: /* module 31 call 1 */
        CHECK_ERROR(_readMethod_pkitcr_counter_V3(c, &method->nested.pkitcr_counter_V3))
        break;
    case 7938: /* module 31 call 2 */
        CHECK_ERROR(_readMethod_pkitcr_vote_V3(c, &method->nested.pkitcr_vote_V3))
        break;
    case 7939: /* module 31 call 3 */
        CHECK_ERROR(_readMethod_pkitcr_challenge_V3(c, &method->nested.pkitcr_challenge_V3))
        break;
    case 8192: /* module 32 call 0 */
        CHECK_ERROR(_readMethod_pkirootoftrust_book_slot_V3(c, &method->nested.pkirootoftrust_book_slot_V3))
        break;
    case 8193: /* module 32 call 1 */
        CHECK_ERROR(_readMethod_pkirootoftrust_renew_slot_V3(c, &method->nested.pkirootoftrust_renew_slot_V3))
        break;
    case 8194: /* module 32 call 2 */
        CHECK_ERROR(_readMethod_pkirootoftrust_revoke_slot_V3(c, &method->nested.pkirootoftrust_revoke_slot_V3))
        break;
    case 8195: /* module 32 call 3 */
        CHECK_ERROR(_readMethod_pkirootoftrust_revoke_child_V3(c, &method->nested.pkirootoftrust_revoke_child_V3))
        break;
    case 8448: /* module 33 call 0 */
        CHECK_ERROR(_readMethod_emergencyshutdown_toggle_V3(c, &method->nested.emergencyshutdown_toggle_V3))
        break;
    case 8704: /* module 34 call 0 */
        CHECK_ERROR(_readMethod_allocations_allocate_V3(c, &method->basic.allocations_allocate_V3))
        break;
    case 8960: /* module 35 call 0 */
        CHECK_ERROR(_readMethod_allocationsoracles_add_member_V3(c, &method->nested.allocationsoracles_add_member_V3))
        break;
    case 8961: /* module 35 call 1 */
        CHECK_ERROR(_readMethod_allocationsoracles_remove_member_V3(c, &method->nested.allocationsoracles_remove_member_V3))
        break;
    case 8962: /* module 35 call 2 */
        CHECK_ERROR(_readMethod_allocationsoracles_swap_member_V3(c, &method->nested.allocationsoracles_swap_member_V3))
        break;
    case 8963: /* module 35 call 3 */
        CHECK_ERROR(_readMethod_allocationsoracles_reset_members_V3(c, &method->nested.allocationsoracles_reset_members_V3))
        break;
    case 8964: /* module 35 call 4 */
        CHECK_ERROR(_readMethod_allocationsoracles_change_key_V3(c, &method->nested.allocationsoracles_change_key_V3))
        break;
    case 8965: /* module 35 call 5 */
        CHECK_ERROR(_readMethod_allocationsoracles_set_prime_V3(c, &method->nested.allocationsoracles_set_prime_V3))
        break;
    case 8966: /* module 35 call 6 */
        CHECK_ERROR(_readMethod_allocationsoracles_clear_prime_V3(c, &method->nested.allocationsoracles_clear_prime_V3))
        break;
#endif
    default:
        return parser_not_supported;
    }

    return parser_ok;
}

/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////

const char* _getMethod_ModuleName_V3(uint8_t moduleIdx)
{
    switch (moduleIdx) {
    case 2:
        return STR_MO_BALANCES;
    case 28:
        return STR_MO_UTILITY;
#ifdef SUBSTRATE_PARSER_FULL
    case 0:
        return STR_MO_SYSTEM;
    case 1:
        return STR_MO_TIMESTAMP;
    case 6:
        return STR_MO_GRANDPA;
    case 10:
        return STR_MO_VALIDATORSSET;
    case 12:
        return STR_MO_SESSION;
    case 15:
        return STR_MO_TECHNICALCOMMITTEE;
    case 16:
        return STR_MO_TECHNICALMEMBERSHIP;
    case 17:
        return STR_MO_FINANCIALCOMMITTEE;
    case 18:
        return STR_MO_FINANCIALMEMBERSHIP;
    case 19:
        return STR_MO_ROOTCOMMITTEE;
    case 20:
        return STR_MO_ROOTMEMBERSHIP;
    case 22:
        return STR_MO_AMENDMENTS;
    case 23:
        return STR_MO_MANDATE;
    case 24:
        return STR_MO_COMPANYRESERVE;
    case 25:
        return STR_MO_INTERNATIONALRESERVE;
    case 26:
        return STR_MO_USARESERVE;
    case 27:
        return STR_MO_VESTING;
    case 29:
        return STR_MO_MULTISIG;
    case 30:
        return STR_MO_CONTRACTS;
    case 31:
        return STR_MO_PKITCR;
    case 32:
        return STR_MO_PKIROOTOFTRUST;
    case 33:
        return STR_MO_EMERGENCYSHUTDOWN;
    case 34:
        return STR_MO_ALLOCATIONS;
    case 35:
        return STR_MO_ALLOCATIONSORACLES;
#endif
    default:
        return NULL;
    }

    return NULL;
}

const char* _getMethod_Name_V3(uint8_t moduleIdx, uint8_t callIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 512: /* module 2 call 0 */
        return STR_ME_TRANSFER;
    case 7168: /* module 28 call 0 */
        return STR_ME_BATCH;
#ifdef SUBSTRATE_PARSER_FULL
    case 0: /* module 0 call 0 */
        return STR_ME_FILL_BLOCK;
    case 1: /* module 0 call 1 */
        return STR_ME_REMARK;
    case 2: /* module 0 call 2 */
        return STR_ME_SET_HEAP_PAGES;
    case 3: /* module 0 call 3 */
        return STR_ME_SET_CODE;
    case 4: /* module 0 call 4 */
        return STR_ME_SET_CODE_WITHOUT_CHECKS;
    case 5: /* module 0 call 5 */
        return STR_ME_SET_CHANGES_TRIE_CONFIG;
    case 6: /* module 0 call 6 */
        return STR_ME_SET_STORAGE;
    case 7: /* module 0 call 7 */
        return STR_ME_KILL_STORAGE;
    case 8: /* module 0 call 8 */
        return STR_ME_KILL_PREFIX;
    case 9: /* module 0 call 9 */
        return STR_ME_REMARK_WITH_EVENT;
    case 256: /* module 1 call 0 */
        return STR_ME_SET;
    case 513: /* module 2 call 1 */
        return STR_ME_SET_BALANCE;
    case 514: /* module 2 call 2 */
        return STR_ME_FORCE_TRANSFER;
    case 515: /* module 2 call 3 */
        return STR_ME_TRANSFER_KEEP_ALIVE;
    case 516: /* module 2 call 4 */
        return STR_ME_TRANSFER_ALL;
    case 517: /* module 2 call 5 */
        return STR_ME_FORCE_UNRESERVE;
    case 1280: /* module 5 call 0 */
        return STR_ME_REPORT_EQUIVOCATION;
    case 1281: /* module 5 call 1 */
        return STR_ME_REPORT_EQUIVOCATION_UNSIGNED;
    case 1282: /* module 5 call 2 */
        return STR_ME_PLAN_CONFIG_CHANGE;
    case 1536: /* module 6 call 0 */
        return STR_ME_REPORT_EQUIVOCATION;
    case 1537: /* module 6 call 1 */
        return STR_ME_REPORT_EQUIVOCATION_UNSIGNED;
    case 1538: /* module 6 call 2 */
        return STR_ME_NOTE_STALLED;
    case 1792: /* module 7 call 0 */
        return STR_ME_SET_UNCLES;
    case 2048: /* module 8 call 0 */
        return STR_ME_HEARTBEAT;
    case 2560: /* module 10 call 0 */
        return STR_ME_ADD_MEMBER;
    case 2561: /* module 10 call 1 */
        return STR_ME_REMOVE_MEMBER;
    case 2562: /* module 10 call 2 */
        return STR_ME_SWAP_MEMBER;
    case 2563: /* module 10 call 3 */
        return STR_ME_RESET_MEMBERS;
    case 2564: /* module 10 call 4 */
        return STR_ME_CHANGE_KEY;
    case 2565: /* module 10 call 5 */
        return STR_ME_SET_PRIME;
    case 2566: /* module 10 call 6 */
        return STR_ME_CLEAR_PRIME;
    case 3072: /* module 12 call 0 */
        return STR_ME_SET_KEYS;
    case 3073: /* module 12 call 1 */
        return STR_ME_PURGE_KEYS;
    case 3840: /* module 15 call 0 */
        return STR_ME_SET_MEMBERS;
    case 3841: /* module 15 call 1 */
        return STR_ME_EXECUTE;
    case 3842: /* module 15 call 2 */
        return STR_ME_PROPOSE;
    case 3843: /* module 15 call 3 */
        return STR_ME_VOTE;
    case 3844: /* module 15 call 4 */
        return STR_ME_CLOSE;
    case 3845: /* module 15 call 5 */
        return STR_ME_DISAPPROVE_PROPOSAL;
    case 4096: /* module 16 call 0 */
        return STR_ME_ADD_MEMBER;
    case 4097: /* module 16 call 1 */
        return STR_ME_REMOVE_MEMBER;
    case 4098: /* module 16 call 2 */
        return STR_ME_SWAP_MEMBER;
    case 4099: /* module 16 call 3 */
        return STR_ME_RESET_MEMBERS;
    case 4100: /* module 16 call 4 */
        return STR_ME_CHANGE_KEY;
    case 4101: /* module 16 call 5 */
        return STR_ME_SET_PRIME;
    case 4102: /* module 16 call 6 */
        return STR_ME_CLEAR_PRIME;
    case 4352: /* module 17 call 0 */
        return STR_ME_SET_MEMBERS;
    case 4353: /* module 17 call 1 */
        return STR_ME_EXECUTE;
    case 4354: /* module 17 call 2 */
        return STR_ME_PROPOSE;
    case 4355: /* module 17 call 3 */
        return STR_ME_VOTE;
    case 4356: /* module 17 call 4 */
        return STR_ME_CLOSE;
    case 4357: /* module 17 call 5 */
        return STR_ME_DISAPPROVE_PROPOSAL;
    case 4608: /* module 18 call 0 */
        return STR_ME_ADD_MEMBER;
    case 4609: /* module 18 call 1 */
        return STR_ME_REMOVE_MEMBER;
    case 4610: /* module 18 call 2 */
        return STR_ME_SWAP_MEMBER;
    case 4611: /* module 18 call 3 */
        return STR_ME_RESET_MEMBERS;
    case 4612: /* module 18 call 4 */
        return STR_ME_CHANGE_KEY;
    case 4613: /* module 18 call 5 */
        return STR_ME_SET_PRIME;
    case 4614: /* module 18 call 6 */
        return STR_ME_CLEAR_PRIME;
    case 4864: /* module 19 call 0 */
        return STR_ME_SET_MEMBERS;
    case 4865: /* module 19 call 1 */
        return STR_ME_EXECUTE;
    case 4866: /* module 19 call 2 */
        return STR_ME_PROPOSE;
    case 4867: /* module 19 call 3 */
        return STR_ME_VOTE;
    case 4868: /* module 19 call 4 */
        return STR_ME_CLOSE;
    case 4869: /* module 19 call 5 */
        return STR_ME_DISAPPROVE_PROPOSAL;
    case 5120: /* module 20 call 0 */
        return STR_ME_ADD_MEMBER;
    case 5121: /* module 20 call 1 */
        return STR_ME_REMOVE_MEMBER;
    case 5122: /* module 20 call 2 */
        return STR_ME_SWAP_MEMBER;
    case 5123: /* module 20 call 3 */
        return STR_ME_RESET_MEMBERS;
    case 5124: /* module 20 call 4 */
        return STR_ME_CHANGE_KEY;
    case 5125: /* module 20 call 5 */
        return STR_ME_SET_PRIME;
    case 5126: /* module 20 call 6 */
        return STR_ME_CLEAR_PRIME;
    case 5376: /* module 21 call 0 */
        return STR_ME_SCHEDULE;
    case 5377: /* module 21 call 1 */
        return STR_ME_CANCEL;
    case 5378: /* module 21 call 2 */
        return STR_ME_SCHEDULE_NAMED;
    case 5379: /* module 21 call 3 */
        return STR_ME_CANCEL_NAMED;
    case 5380: /* module 21 call 4 */
        return STR_ME_SCHEDULE_AFTER;
    case 5381: /* module 21 call 5 */
        return STR_ME_SCHEDULE_NAMED_AFTER;
    case 5632: /* module 22 call 0 */
        return STR_ME_PROPOSE;
    case 5633: /* module 22 call 1 */
        return STR_ME_VETO;
    case 5888: /* module 23 call 0 */
        return STR_ME_APPLY;
    case 6144: /* module 24 call 0 */
        return STR_ME_SPEND;
    case 6145: /* module 24 call 1 */
        return STR_ME_TIP;
    case 6146: /* module 24 call 2 */
        return STR_ME_APPLY_AS;
    case 6400: /* module 25 call 0 */
        return STR_ME_SPEND;
    case 6401: /* module 25 call 1 */
        return STR_ME_TIP;
    case 6402: /* module 25 call 2 */
        return STR_ME_APPLY_AS;
    case 6656: /* module 26 call 0 */
        return STR_ME_SPEND;
    case 6657: /* module 26 call 1 */
        return STR_ME_TIP;
    case 6658: /* module 26 call 2 */
        return STR_ME_APPLY_AS;
    case 6912: /* module 27 call 0 */
        return STR_ME_CLAIM;
    case 6913: /* module 27 call 1 */
        return STR_ME_ADD_VESTING_SCHEDULE;
    case 6914: /* module 27 call 2 */
        return STR_ME_CANCEL_ALL_VESTING_SCHEDULES;
    case 6915: /* module 27 call 3 */
        return STR_ME_OVERWRITE_VESTING_SCHEDULES;
    case 7169: /* module 28 call 1 */
        return STR_ME_AS_DERIVATIVE;
    case 7170: /* module 28 call 2 */
        return STR_ME_BATCH_ALL;
    case 7424: /* module 29 call 0 */
        return STR_ME_AS_MULTI_THRESHOLD_1;
    case 7425: /* module 29 call 1 */
        return STR_ME_AS_MULTI;
    case 7426: /* module 29 call 2 */
        return STR_ME_APPROVE_AS_MULTI;
    case 7427: /* module 29 call 3 */
        return STR_ME_CANCEL_AS_MULTI;
    case 7680: /* module 30 call 0 */
        return STR_ME_CALL;
    case 7681: /* module 30 call 1 */
        return STR_ME_INSTANTIATE_WITH_CODE;
    case 7682: /* module 30 call 2 */
        return STR_ME_INSTANTIATE;
    case 7936: /* module 31 call 0 */
        return STR_ME_APPLY;
    case 7937: /* module 31 call 1 */
        return STR_ME_COUNTER;
    case 7938: /* module 31 call 2 */
        return STR_ME_VOTE;
    case 7939: /* module 31 call 3 */
        return STR_ME_CHALLENGE;
    case 8192: /* module 32 call 0 */
        return STR_ME_BOOK_SLOT;
    case 8193: /* module 32 call 1 */
        return STR_ME_RENEW_SLOT;
    case 8194: /* module 32 call 2 */
        return STR_ME_REVOKE_SLOT;
    case 8195: /* module 32 call 3 */
        return STR_ME_REVOKE_CHILD;
    case 8448: /* module 33 call 0 */
        return STR_ME_TOGGLE;
    case 8704: /* module 34 call 0 */
        return STR_ME_ALLOCATE;
    case 8960: /* module 35 call 0 */
        return STR_ME_ADD_MEMBER;
    case 8961: /* module 35 call 1 */
        return STR_ME_REMOVE_MEMBER;
    case 8962: /* module 35 call 2 */
        return STR_ME_SWAP_MEMBER;
    case 8963: /* module 35 call 3 */
        return STR_ME_RESET_MEMBERS;
    case 8964: /* module 35 call 4 */
        return STR_ME_CHANGE_KEY;
    case 8965: /* module 35 call 5 */
        return STR_ME_SET_PRIME;
    case 8966: /* module 35 call 6 */
        return STR_ME_CLEAR_PRIME;
#endif
    default:
        return NULL;
    }

    return NULL;
}

uint8_t _getMethod_NumItems_V3(uint8_t moduleIdx, uint8_t callIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 512: /* module 2 call 0 */
        return 2;
    case 7168: /* module 28 call 0 */
        return 1;
#ifdef SUBSTRATE_PARSER_FULL
    case 0: /* module 0 call 0 */
        return 1;
    case 1: /* module 0 call 1 */
        return 1;
    case 2: /* module 0 call 2 */
        return 1;
    case 3: /* module 0 call 3 */
        return 1;
    case 4: /* module 0 call 4 */
        return 1;
    case 9: /* module 0 call 9 */
        return 1;
    case 256: /* module 1 call 0 */
        return 1;
    case 513: /* module 2 call 1 */
        return 3;
    case 514: /* module 2 call 2 */
        return 3;
    case 515: /* module 2 call 3 */
        return 2;
    case 516: /* module 2 call 4 */
        return 2;
    case 517: /* module 2 call 5 */
        return 2;
    case 1538: /* module 6 call 2 */
        return 2;
    case 2561: /* module 10 call 1 */
        return 1;
    case 2562: /* module 10 call 2 */
        return 2;
    case 2563: /* module 10 call 3 */
        return 1;
    case 2564: /* module 10 call 4 */
        return 1;
    case 2565: /* module 10 call 5 */
        return 1;
    case 2566: /* module 10 call 6 */
        return 0;
    case 3072: /* module 12 call 0 */
        return 2;
    case 3073: /* module 12 call 1 */
        return 0;
    case 3843: /* module 15 call 3 */
        return 3;
    case 3844: /* module 15 call 4 */
        return 4;
    case 3845: /* module 15 call 5 */
        return 1;
    case 4096: /* module 16 call 0 */
        return 1;
    case 4097: /* module 16 call 1 */
        return 1;
    case 4098: /* module 16 call 2 */
        return 2;
    case 4099: /* module 16 call 3 */
        return 1;
    case 4100: /* module 16 call 4 */
        return 1;
    case 4101: /* module 16 call 5 */
        return 1;
    case 4102: /* module 16 call 6 */
        return 0;
    case 4352: /* module 17 call 0 */
        return 3;
    case 4355: /* module 17 call 3 */
        return 3;
    case 4356: /* module 17 call 4 */
        return 4;
    case 4357: /* module 17 call 5 */
        return 1;
    case 4608: /* module 18 call 0 */
        return 1;
    case 4609: /* module 18 call 1 */
        return 1;
    case 4610: /* module 18 call 2 */
        return 2;
    case 4611: /* module 18 call 3 */
        return 1;
    case 4612: /* module 18 call 4 */
        return 1;
    case 4613: /* module 18 call 5 */
        return 1;
    case 4614: /* module 18 call 6 */
        return 0;
    case 4864: /* module 19 call 0 */
        return 3;
    case 4867: /* module 19 call 3 */
        return 3;
    case 4868: /* module 19 call 4 */
        return 4;
    case 4869: /* module 19 call 5 */
        return 1;
    case 5120: /* module 20 call 0 */
        return 1;
    case 5121: /* module 20 call 1 */
        return 1;
    case 5122: /* module 20 call 2 */
        return 2;
    case 5123: /* module 20 call 3 */
        return 1;
    case 5124: /* module 20 call 4 */
        return 1;
    case 5125: /* module 20 call 5 */
        return 1;
    case 5126: /* module 20 call 6 */
        return 0;
    case 5633: /* module 22 call 1 */
        return 1;
    case 5888: /* module 23 call 0 */
        return 1;
    case 6144: /* module 24 call 0 */
        return 2;
    case 6145: /* module 24 call 1 */
        return 1;
    case 6400: /* module 25 call 0 */
        return 2;
    case 6401: /* module 25 call 1 */
        return 1;
    case 6656: /* module 26 call 0 */
        return 2;
    case 6657: /* module 26 call 1 */
        return 1;
    case 6914: /* module 27 call 2 */
        return 3;
    case 7170: /* module 28 call 2 */
        return 1;
    case 7424: /* module 29 call 0 */
        return 2;
    case 7425: /* module 29 call 1 */
        return 6;
    case 7426: /* module 29 call 2 */
        return 5;
    case 7427: /* module 29 call 3 */
        return 4;
    case 7680: /* module 30 call 0 */
        return 4;
    case 7681: /* module 30 call 1 */
        return 5;
    case 7936: /* module 31 call 0 */
        return 2;
    case 7937: /* module 31 call 1 */
        return 2;
    case 7938: /* module 31 call 2 */
        return 3;
    case 7939: /* module 31 call 3 */
        return 2;
    case 8192: /* module 32 call 0 */
        return 1;
    case 8193: /* module 32 call 1 */
        return 1;
    case 8194: /* module 32 call 2 */
        return 1;
    case 8195: /* module 32 call 3 */
        return 2;
    case 8448: /* module 33 call 0 */
        return 0;
    case 8704: /* module 34 call 0 */
        return 3;
    case 8960: /* module 35 call 0 */
        return 1;
    case 8961: /* module 35 call 1 */
        return 1;
    case 8962: /* module 35 call 2 */
        return 2;
    case 8963: /* module 35 call 3 */
        return 1;
    case 8964: /* module 35 call 4 */
        return 1;
    case 8965: /* module 35 call 5 */
        return 1;
    case 8966: /* module 35 call 6 */
        return 0;
#endif
    default:
        return 0;
    }

    return 0;
}

const char* _getMethod_ItemName_V3(uint8_t moduleIdx, uint8_t callIdx, uint8_t itemIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 512: /* module 2 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_dest;
        case 1:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 7168: /* module 28 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_calls;
        default:
            return NULL;
        }
#ifdef SUBSTRATE_PARSER_FULL
    case 0: /* module 0 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_ratio;
        default:
            return NULL;
        }
    case 1: /* module 0 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_remark;
        default:
            return NULL;
        }
    case 2: /* module 0 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_pages;
        default:
            return NULL;
        }
    case 3: /* module 0 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_code;
        default:
            return NULL;
        }
    case 4: /* module 0 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_code;
        default:
            return NULL;
        }
    case 9: /* module 0 call 9 */
        switch (itemIdx) {
        case 0:
            return STR_IT_remark;
        default:
            return NULL;
        }
    case 256: /* module 1 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_now;
        default:
            return NULL;
        }
    case 513: /* module 2 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        case 1:
            return STR_IT_new_free;
        case 2:
            return STR_IT_new_reserved;
        default:
            return NULL;
        }
    case 514: /* module 2 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_source;
        case 1:
            return STR_IT_dest;
        case 2:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 515: /* module 2 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_dest;
        case 1:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 516: /* module 2 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_dest;
        case 1:
            return STR_IT_keep_alive;
        default:
            return NULL;
        }
    case 517: /* module 2 call 5 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        case 1:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 1538: /* module 6 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_delay;
        case 1:
            return STR_IT_best_finalized_block_number;
        default:
            return NULL;
        }
    case 2561: /* module 10 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        default:
            return NULL;
        }
    case 2562: /* module 10 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_remove;
        case 1:
            return STR_IT_add;
        default:
            return NULL;
        }
    case 2563: /* module 10 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_members;
        default:
            return NULL;
        }
    case 2564: /* module 10 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_new_;
        default:
            return NULL;
        }
    case 2565: /* module 10 call 5 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        default:
            return NULL;
        }
    case 2566: /* module 10 call 6 */
        switch (itemIdx) {
        default:
            return NULL;
        }
    case 3072: /* module 12 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_keys;
        case 1:
            return STR_IT_proof;
        default:
            return NULL;
        }
    case 3073: /* module 12 call 1 */
        switch (itemIdx) {
        default:
            return NULL;
        }
    case 3843: /* module 15 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_proposal;
        case 1:
            return STR_IT_index;
        case 2:
            return STR_IT_approve;
        default:
            return NULL;
        }
    case 3844: /* module 15 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_proposal_hash;
        case 1:
            return STR_IT_index;
        case 2:
            return STR_IT_proposal_weight_bound;
        case 3:
            return STR_IT_length_bound;
        default:
            return NULL;
        }
    case 3845: /* module 15 call 5 */
        switch (itemIdx) {
        case 0:
            return STR_IT_proposal_hash;
        default:
            return NULL;
        }
    case 4096: /* module 16 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        default:
            return NULL;
        }
    case 4097: /* module 16 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        default:
            return NULL;
        }
    case 4098: /* module 16 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_remove;
        case 1:
            return STR_IT_add;
        default:
            return NULL;
        }
    case 4099: /* module 16 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_members;
        default:
            return NULL;
        }
    case 4100: /* module 16 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_new_;
        default:
            return NULL;
        }
    case 4101: /* module 16 call 5 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        default:
            return NULL;
        }
    case 4102: /* module 16 call 6 */
        switch (itemIdx) {
        default:
            return NULL;
        }
    case 4352: /* module 17 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_new_members;
        case 1:
            return STR_IT_prime;
        case 2:
            return STR_IT_old_count;
        default:
            return NULL;
        }
    case 4355: /* module 17 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_proposal;
        case 1:
            return STR_IT_index;
        case 2:
            return STR_IT_approve;
        default:
            return NULL;
        }
    case 4356: /* module 17 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_proposal_hash;
        case 1:
            return STR_IT_index;
        case 2:
            return STR_IT_proposal_weight_bound;
        case 3:
            return STR_IT_length_bound;
        default:
            return NULL;
        }
    case 4357: /* module 17 call 5 */
        switch (itemIdx) {
        case 0:
            return STR_IT_proposal_hash;
        default:
            return NULL;
        }
    case 4608: /* module 18 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        default:
            return NULL;
        }
    case 4609: /* module 18 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        default:
            return NULL;
        }
    case 4610: /* module 18 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_remove;
        case 1:
            return STR_IT_add;
        default:
            return NULL;
        }
    case 4611: /* module 18 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_members;
        default:
            return NULL;
        }
    case 4612: /* module 18 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_new_;
        default:
            return NULL;
        }
    case 4613: /* module 18 call 5 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        default:
            return NULL;
        }
    case 4614: /* module 18 call 6 */
        switch (itemIdx) {
        default:
            return NULL;
        }
    case 4864: /* module 19 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_new_members;
        case 1:
            return STR_IT_prime;
        case 2:
            return STR_IT_old_count;
        default:
            return NULL;
        }
    case 4867: /* module 19 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_proposal;
        case 1:
            return STR_IT_index;
        case 2:
            return STR_IT_approve;
        default:
            return NULL;
        }
    case 4868: /* module 19 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_proposal_hash;
        case 1:
            return STR_IT_index;
        case 2:
            return STR_IT_proposal_weight_bound;
        case 3:
            return STR_IT_length_bound;
        default:
            return NULL;
        }
    case 4869: /* module 19 call 5 */
        switch (itemIdx) {
        case 0:
            return STR_IT_proposal_hash;
        default:
            return NULL;
        }
    case 5120: /* module 20 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        default:
            return NULL;
        }
    case 5121: /* module 20 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        default:
            return NULL;
        }
    case 5122: /* module 20 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_remove;
        case 1:
            return STR_IT_add;
        default:
            return NULL;
        }
    case 5123: /* module 20 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_members;
        default:
            return NULL;
        }
    case 5124: /* module 20 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_new_;
        default:
            return NULL;
        }
    case 5125: /* module 20 call 5 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        default:
            return NULL;
        }
    case 5126: /* module 20 call 6 */
        switch (itemIdx) {
        default:
            return NULL;
        }
    case 5633: /* module 22 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_amendment_id;
        default:
            return NULL;
        }
    case 5888: /* module 23 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_call;
        default:
            return NULL;
        }
    case 6144: /* module 24 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_to;
        case 1:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 6145: /* module 24 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 6400: /* module 25 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_to;
        case 1:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 6401: /* module 25 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 6656: /* module 26 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_to;
        case 1:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 6657: /* module 26 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_amount;
        default:
            return NULL;
        }
    case 6914: /* module 27 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        case 1:
            return STR_IT_funds_collector;
        case 2:
            return STR_IT_limit_to_free_balance;
        default:
            return NULL;
        }
    case 7170: /* module 28 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_calls;
        default:
            return NULL;
        }
    case 7424: /* module 29 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_other_signatories;
        case 1:
            return STR_IT_call;
        default:
            return NULL;
        }
    case 7425: /* module 29 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_threshold;
        case 1:
            return STR_IT_other_signatories;
        case 2:
            return STR_IT_maybe_timepoint;
        case 3:
            return STR_IT_call;
        case 4:
            return STR_IT_store_call;
        case 5:
            return STR_IT_max_weight;
        default:
            return NULL;
        }
    case 7426: /* module 29 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_threshold;
        case 1:
            return STR_IT_other_signatories;
        case 2:
            return STR_IT_maybe_timepoint;
        case 3:
            return STR_IT_call_hash;
        case 4:
            return STR_IT_max_weight;
        default:
            return NULL;
        }
    case 7427: /* module 29 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_threshold;
        case 1:
            return STR_IT_other_signatories;
        case 2:
            return STR_IT_timepoint;
        case 3:
            return STR_IT_call_hash;
        default:
            return NULL;
        }
    case 7680: /* module 30 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_dest;
        case 1:
            return STR_IT_amount;
        case 2:
            return STR_IT_gas_limit;
        case 3:
            return STR_IT_data;
        default:
            return NULL;
        }
    case 7681: /* module 30 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_endowment;
        case 1:
            return STR_IT_gas_limit;
        case 2:
            return STR_IT_code;
        case 3:
            return STR_IT_data;
        case 4:
            return STR_IT_salt;
        default:
            return NULL;
        }
    case 7936: /* module 31 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_metadata;
        case 1:
            return STR_IT_deposit;
        default:
            return NULL;
        }
    case 7937: /* module 31 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_member;
        case 1:
            return STR_IT_deposit;
        default:
            return NULL;
        }
    case 7938: /* module 31 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_member;
        case 1:
            return STR_IT_supporting;
        case 2:
            return STR_IT_deposit;
        default:
            return NULL;
        }
    case 7939: /* module 31 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_member;
        case 1:
            return STR_IT_deposit;
        default:
            return NULL;
        }
    case 8192: /* module 32 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_certificate_id;
        default:
            return NULL;
        }
    case 8193: /* module 32 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_certificate_id;
        default:
            return NULL;
        }
    case 8194: /* module 32 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_certificate_id;
        default:
            return NULL;
        }
    case 8195: /* module 32 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_root;
        case 1:
            return STR_IT_child;
        default:
            return NULL;
        }
    case 8448: /* module 33 call 0 */
        switch (itemIdx) {
        default:
            return NULL;
        }
    case 8704: /* module 34 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_to;
        case 1:
            return STR_IT_amount;
        case 2:
            return STR_IT_proof;
        default:
            return NULL;
        }
    case 8960: /* module 35 call 0 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        default:
            return NULL;
        }
    case 8961: /* module 35 call 1 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        default:
            return NULL;
        }
    case 8962: /* module 35 call 2 */
        switch (itemIdx) {
        case 0:
            return STR_IT_remove;
        case 1:
            return STR_IT_add;
        default:
            return NULL;
        }
    case 8963: /* module 35 call 3 */
        switch (itemIdx) {
        case 0:
            return STR_IT_members;
        default:
            return NULL;
        }
    case 8964: /* module 35 call 4 */
        switch (itemIdx) {
        case 0:
            return STR_IT_new_;
        default:
            return NULL;
        }
    case 8965: /* module 35 call 5 */
        switch (itemIdx) {
        case 0:
            return STR_IT_who;
        default:
            return NULL;
        }
    case 8966: /* module 35 call 6 */
        switch (itemIdx) {
        default:
            return NULL;
        }
#endif
    default:
        return NULL;
    }

    return NULL;
}

parser_error_t _getMethod_ItemValue_V3(
    pd_Method_V3_t* m,
    uint8_t moduleIdx, uint8_t callIdx, uint8_t itemIdx,
    char* outValue, uint16_t outValueLen,
    uint8_t pageIdx, uint8_t* pageCount)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 512: /* module 2 call 0 */
        switch (itemIdx) {
        case 0: /* balances_transfer_V3 - dest */;
            return _toStringLookupasStaticLookupSource_V3(
                &m->nested.balances_transfer_V3.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_transfer_V3 - amount */;
            return _toStringCompactu128_V3(
                &m->nested.balances_transfer_V3.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 7168: /* module 28 call 0 */
        switch (itemIdx) {
        case 0: /* utility_batch_V3 - calls */;
            return _toStringVecCall_V3(
                &m->nested.utility_batch_V3.calls,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
#ifdef SUBSTRATE_PARSER_FULL
    case 0: /* module 0 call 0 */
        switch (itemIdx) {
        case 0: /* system_fill_block_V3 - ratio */;
            return _toStringPerbill_V3(
                &m->nested.system_fill_block_V3.ratio,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1: /* module 0 call 1 */
        switch (itemIdx) {
        case 0: /* system_remark_V3 - remark */;
            return _toStringVecu8_V3(
                &m->nested.system_remark_V3.remark,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2: /* module 0 call 2 */
        switch (itemIdx) {
        case 0: /* system_set_heap_pages_V3 - pages */;
            return _toStringu64(
                &m->nested.system_set_heap_pages_V3.pages,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 3: /* module 0 call 3 */
        switch (itemIdx) {
        case 0: /* system_set_code_V3 - code */;
            return _toStringVecu8_V3(
                &m->nested.system_set_code_V3.code,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4: /* module 0 call 4 */
        switch (itemIdx) {
        case 0: /* system_set_code_without_checks_V3 - code */;
            return _toStringVecu8_V3(
                &m->nested.system_set_code_without_checks_V3.code,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 9: /* module 0 call 9 */
        switch (itemIdx) {
        case 0: /* system_remark_with_event_V3 - remark */;
            return _toStringVecu8_V3(
                &m->basic.system_remark_with_event_V3.remark,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 256: /* module 1 call 0 */
        switch (itemIdx) {
        case 0: /* timestamp_set_V3 - now */;
            return _toStringCompactu64_V3(
                &m->basic.timestamp_set_V3.now,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 513: /* module 2 call 1 */
        switch (itemIdx) {
        case 0: /* balances_set_balance_V3 - who */;
            return _toStringLookupasStaticLookupSource_V3(
                &m->nested.balances_set_balance_V3.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_set_balance_V3 - new_free */;
            return _toStringCompactu128_V3(
                &m->nested.balances_set_balance_V3.new_free,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* balances_set_balance_V3 - new_reserved */;
            return _toStringCompactu128_V3(
                &m->nested.balances_set_balance_V3.new_reserved,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 514: /* module 2 call 2 */
        switch (itemIdx) {
        case 0: /* balances_force_transfer_V3 - source */;
            return _toStringLookupasStaticLookupSource_V3(
                &m->nested.balances_force_transfer_V3.source,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_force_transfer_V3 - dest */;
            return _toStringLookupasStaticLookupSource_V3(
                &m->nested.balances_force_transfer_V3.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* balances_force_transfer_V3 - amount */;
            return _toStringCompactu128_V3(
                &m->nested.balances_force_transfer_V3.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 515: /* module 2 call 3 */
        switch (itemIdx) {
        case 0: /* balances_transfer_keep_alive_V3 - dest */;
            return _toStringLookupasStaticLookupSource_V3(
                &m->nested.balances_transfer_keep_alive_V3.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_transfer_keep_alive_V3 - amount */;
            return _toStringCompactu128_V3(
                &m->nested.balances_transfer_keep_alive_V3.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 516: /* module 2 call 4 */
        switch (itemIdx) {
        case 0: /* balances_transfer_all_V3 - dest */;
            return _toStringLookupasStaticLookupSource_V3(
                &m->basic.balances_transfer_all_V3.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_transfer_all_V3 - keep_alive */;
            return _toStringbool(
                &m->basic.balances_transfer_all_V3.keep_alive,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 517: /* module 2 call 5 */
        switch (itemIdx) {
        case 0: /* balances_force_unreserve_V3 - who */;
            return _toStringLookupasStaticLookupSource_V3(
                &m->basic.balances_force_unreserve_V3.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* balances_force_unreserve_V3 - amount */;
            return _toStringBalance_V3(
                &m->basic.balances_force_unreserve_V3.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 1538: /* module 6 call 2 */
        switch (itemIdx) {
        case 0: /* grandpa_note_stalled_V3 - delay */;
            return _toStringBlockNumber_V3(
                &m->basic.grandpa_note_stalled_V3.delay,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* grandpa_note_stalled_V3 - best_finalized_block_number */;
            return _toStringBlockNumber_V3(
                &m->basic.grandpa_note_stalled_V3.best_finalized_block_number,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2561: /* module 10 call 1 */
        switch (itemIdx) {
        case 0: /* validatorsset_remove_member_V3 - who */;
            return _toStringAccountId_V3(
                &m->nested.validatorsset_remove_member_V3.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2562: /* module 10 call 2 */
        switch (itemIdx) {
        case 0: /* validatorsset_swap_member_V3 - remove */;
            return _toStringAccountId_V3(
                &m->nested.validatorsset_swap_member_V3.remove,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* validatorsset_swap_member_V3 - add */;
            return _toStringAccountId_V3(
                &m->nested.validatorsset_swap_member_V3.add,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2563: /* module 10 call 3 */
        switch (itemIdx) {
        case 0: /* validatorsset_reset_members_V3 - members */;
            return _toStringVecAccountId_V3(
                &m->nested.validatorsset_reset_members_V3.members,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2564: /* module 10 call 4 */
        switch (itemIdx) {
        case 0: /* validatorsset_change_key_V3 - new_ */;
            return _toStringAccountId_V3(
                &m->nested.validatorsset_change_key_V3.new_,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2565: /* module 10 call 5 */
        switch (itemIdx) {
        case 0: /* validatorsset_set_prime_V3 - who */;
            return _toStringAccountId_V3(
                &m->nested.validatorsset_set_prime_V3.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 2566: /* module 10 call 6 */
        switch (itemIdx) {
        default:
            return parser_no_data;
        }
    case 3072: /* module 12 call 0 */
        switch (itemIdx) {
        case 0: /* session_set_keys_V3 - keys */;
            return _toStringKeys_V3(
                &m->basic.session_set_keys_V3.keys,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* session_set_keys_V3 - proof */;
            return _toStringVecu8_V3(
                &m->basic.session_set_keys_V3.proof,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 3073: /* module 12 call 1 */
        switch (itemIdx) {
        default:
            return parser_no_data;
        }
    case 3843: /* module 15 call 3 */
        switch (itemIdx) {
        case 0: /* technicalcommittee_vote_V3 - proposal */;
            return _toStringHash_V3(
                &m->nested.technicalcommittee_vote_V3.proposal,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* technicalcommittee_vote_V3 - index */;
            return _toStringCompactu32_V3(
                &m->nested.technicalcommittee_vote_V3.index,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* technicalcommittee_vote_V3 - approve */;
            return _toStringbool(
                &m->nested.technicalcommittee_vote_V3.approve,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 3844: /* module 15 call 4 */
        switch (itemIdx) {
        case 0: /* technicalcommittee_close_V3 - proposal_hash */;
            return _toStringHash_V3(
                &m->nested.technicalcommittee_close_V3.proposal_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* technicalcommittee_close_V3 - index */;
            return _toStringCompactu32_V3(
                &m->nested.technicalcommittee_close_V3.index,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* technicalcommittee_close_V3 - proposal_weight_bound */;
            return _toStringCompactu64_V3(
                &m->nested.technicalcommittee_close_V3.proposal_weight_bound,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* technicalcommittee_close_V3 - length_bound */;
            return _toStringCompactu32_V3(
                &m->nested.technicalcommittee_close_V3.length_bound,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 3845: /* module 15 call 5 */
        switch (itemIdx) {
        case 0: /* technicalcommittee_disapprove_proposal_V3 - proposal_hash */;
            return _toStringHash_V3(
                &m->nested.technicalcommittee_disapprove_proposal_V3.proposal_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4096: /* module 16 call 0 */
        switch (itemIdx) {
        case 0: /* technicalmembership_add_member_V3 - who */;
            return _toStringAccountId_V3(
                &m->nested.technicalmembership_add_member_V3.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4097: /* module 16 call 1 */
        switch (itemIdx) {
        case 0: /* technicalmembership_remove_member_V3 - who */;
            return _toStringAccountId_V3(
                &m->nested.technicalmembership_remove_member_V3.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4098: /* module 16 call 2 */
        switch (itemIdx) {
        case 0: /* technicalmembership_swap_member_V3 - remove */;
            return _toStringAccountId_V3(
                &m->nested.technicalmembership_swap_member_V3.remove,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* technicalmembership_swap_member_V3 - add */;
            return _toStringAccountId_V3(
                &m->nested.technicalmembership_swap_member_V3.add,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4099: /* module 16 call 3 */
        switch (itemIdx) {
        case 0: /* technicalmembership_reset_members_V3 - members */;
            return _toStringVecAccountId_V3(
                &m->nested.technicalmembership_reset_members_V3.members,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4100: /* module 16 call 4 */
        switch (itemIdx) {
        case 0: /* technicalmembership_change_key_V3 - new_ */;
            return _toStringAccountId_V3(
                &m->nested.technicalmembership_change_key_V3.new_,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4101: /* module 16 call 5 */
        switch (itemIdx) {
        case 0: /* technicalmembership_set_prime_V3 - who */;
            return _toStringAccountId_V3(
                &m->nested.technicalmembership_set_prime_V3.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4102: /* module 16 call 6 */
        switch (itemIdx) {
        default:
            return parser_no_data;
        }
    case 4352: /* module 17 call 0 */
        switch (itemIdx) {
        case 0: /* financialcommittee_set_members_V3 - new_members */;
            return _toStringVecAccountId_V3(
                &m->nested.financialcommittee_set_members_V3.new_members,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* financialcommittee_set_members_V3 - prime */;
            return _toStringOptionAccountId_V3(
                &m->nested.financialcommittee_set_members_V3.prime,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* financialcommittee_set_members_V3 - old_count */;
            return _toStringMemberCount_V3(
                &m->nested.financialcommittee_set_members_V3.old_count,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4355: /* module 17 call 3 */
        switch (itemIdx) {
        case 0: /* financialcommittee_vote_V3 - proposal */;
            return _toStringHash_V3(
                &m->nested.financialcommittee_vote_V3.proposal,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* financialcommittee_vote_V3 - index */;
            return _toStringCompactu32_V3(
                &m->nested.financialcommittee_vote_V3.index,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* financialcommittee_vote_V3 - approve */;
            return _toStringbool(
                &m->nested.financialcommittee_vote_V3.approve,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4356: /* module 17 call 4 */
        switch (itemIdx) {
        case 0: /* financialcommittee_close_V3 - proposal_hash */;
            return _toStringHash_V3(
                &m->nested.financialcommittee_close_V3.proposal_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* financialcommittee_close_V3 - index */;
            return _toStringCompactu32_V3(
                &m->nested.financialcommittee_close_V3.index,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* financialcommittee_close_V3 - proposal_weight_bound */;
            return _toStringCompactu64_V3(
                &m->nested.financialcommittee_close_V3.proposal_weight_bound,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* financialcommittee_close_V3 - length_bound */;
            return _toStringCompactu32_V3(
                &m->nested.financialcommittee_close_V3.length_bound,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4357: /* module 17 call 5 */
        switch (itemIdx) {
        case 0: /* financialcommittee_disapprove_proposal_V3 - proposal_hash */;
            return _toStringHash_V3(
                &m->nested.financialcommittee_disapprove_proposal_V3.proposal_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4608: /* module 18 call 0 */
        switch (itemIdx) {
        case 0: /* financialmembership_add_member_V3 - who */;
            return _toStringAccountId_V3(
                &m->nested.financialmembership_add_member_V3.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4609: /* module 18 call 1 */
        switch (itemIdx) {
        case 0: /* financialmembership_remove_member_V3 - who */;
            return _toStringAccountId_V3(
                &m->nested.financialmembership_remove_member_V3.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4610: /* module 18 call 2 */
        switch (itemIdx) {
        case 0: /* financialmembership_swap_member_V3 - remove */;
            return _toStringAccountId_V3(
                &m->nested.financialmembership_swap_member_V3.remove,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* financialmembership_swap_member_V3 - add */;
            return _toStringAccountId_V3(
                &m->nested.financialmembership_swap_member_V3.add,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4611: /* module 18 call 3 */
        switch (itemIdx) {
        case 0: /* financialmembership_reset_members_V3 - members */;
            return _toStringVecAccountId_V3(
                &m->nested.financialmembership_reset_members_V3.members,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4612: /* module 18 call 4 */
        switch (itemIdx) {
        case 0: /* financialmembership_change_key_V3 - new_ */;
            return _toStringAccountId_V3(
                &m->nested.financialmembership_change_key_V3.new_,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4613: /* module 18 call 5 */
        switch (itemIdx) {
        case 0: /* financialmembership_set_prime_V3 - who */;
            return _toStringAccountId_V3(
                &m->nested.financialmembership_set_prime_V3.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4614: /* module 18 call 6 */
        switch (itemIdx) {
        default:
            return parser_no_data;
        }
    case 4864: /* module 19 call 0 */
        switch (itemIdx) {
        case 0: /* rootcommittee_set_members_V3 - new_members */;
            return _toStringVecAccountId_V3(
                &m->nested.rootcommittee_set_members_V3.new_members,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* rootcommittee_set_members_V3 - prime */;
            return _toStringOptionAccountId_V3(
                &m->nested.rootcommittee_set_members_V3.prime,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* rootcommittee_set_members_V3 - old_count */;
            return _toStringMemberCount_V3(
                &m->nested.rootcommittee_set_members_V3.old_count,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4867: /* module 19 call 3 */
        switch (itemIdx) {
        case 0: /* rootcommittee_vote_V3 - proposal */;
            return _toStringHash_V3(
                &m->nested.rootcommittee_vote_V3.proposal,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* rootcommittee_vote_V3 - index */;
            return _toStringCompactu32_V3(
                &m->nested.rootcommittee_vote_V3.index,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* rootcommittee_vote_V3 - approve */;
            return _toStringbool(
                &m->nested.rootcommittee_vote_V3.approve,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4868: /* module 19 call 4 */
        switch (itemIdx) {
        case 0: /* rootcommittee_close_V3 - proposal_hash */;
            return _toStringHash_V3(
                &m->nested.rootcommittee_close_V3.proposal_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* rootcommittee_close_V3 - index */;
            return _toStringCompactu32_V3(
                &m->nested.rootcommittee_close_V3.index,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* rootcommittee_close_V3 - proposal_weight_bound */;
            return _toStringCompactu64_V3(
                &m->nested.rootcommittee_close_V3.proposal_weight_bound,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* rootcommittee_close_V3 - length_bound */;
            return _toStringCompactu32_V3(
                &m->nested.rootcommittee_close_V3.length_bound,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 4869: /* module 19 call 5 */
        switch (itemIdx) {
        case 0: /* rootcommittee_disapprove_proposal_V3 - proposal_hash */;
            return _toStringHash_V3(
                &m->nested.rootcommittee_disapprove_proposal_V3.proposal_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 5120: /* module 20 call 0 */
        switch (itemIdx) {
        case 0: /* rootmembership_add_member_V3 - who */;
            return _toStringAccountId_V3(
                &m->nested.rootmembership_add_member_V3.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 5121: /* module 20 call 1 */
        switch (itemIdx) {
        case 0: /* rootmembership_remove_member_V3 - who */;
            return _toStringAccountId_V3(
                &m->nested.rootmembership_remove_member_V3.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 5122: /* module 20 call 2 */
        switch (itemIdx) {
        case 0: /* rootmembership_swap_member_V3 - remove */;
            return _toStringAccountId_V3(
                &m->nested.rootmembership_swap_member_V3.remove,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* rootmembership_swap_member_V3 - add */;
            return _toStringAccountId_V3(
                &m->nested.rootmembership_swap_member_V3.add,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 5123: /* module 20 call 3 */
        switch (itemIdx) {
        case 0: /* rootmembership_reset_members_V3 - members */;
            return _toStringVecAccountId_V3(
                &m->nested.rootmembership_reset_members_V3.members,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 5124: /* module 20 call 4 */
        switch (itemIdx) {
        case 0: /* rootmembership_change_key_V3 - new_ */;
            return _toStringAccountId_V3(
                &m->nested.rootmembership_change_key_V3.new_,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 5125: /* module 20 call 5 */
        switch (itemIdx) {
        case 0: /* rootmembership_set_prime_V3 - who */;
            return _toStringAccountId_V3(
                &m->nested.rootmembership_set_prime_V3.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 5126: /* module 20 call 6 */
        switch (itemIdx) {
        default:
            return parser_no_data;
        }
    case 5633: /* module 22 call 1 */
        switch (itemIdx) {
        case 0: /* amendments_veto_V3 - amendment_id */;
            return _toStringu64(
                &m->nested.amendments_veto_V3.amendment_id,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 5888: /* module 23 call 0 */
        switch (itemIdx) {
        case 0: /* mandate_apply_V3 - call */;
            return _toStringCall_V3(
                &m->nested.mandate_apply_V3.call,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 6144: /* module 24 call 0 */
        switch (itemIdx) {
        case 0: /* companyreserve_spend_V3 - to */;
            return _toStringAccountId_V3(
                &m->nested.companyreserve_spend_V3.to,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* companyreserve_spend_V3 - amount */;
            return _toStringBalance_V3(
                &m->nested.companyreserve_spend_V3.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 6145: /* module 24 call 1 */
        switch (itemIdx) {
        case 0: /* companyreserve_tip_V3 - amount */;
            return _toStringBalance_V3(
                &m->nested.companyreserve_tip_V3.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 6400: /* module 25 call 0 */
        switch (itemIdx) {
        case 0: /* internationalreserve_spend_V3 - to */;
            return _toStringAccountId_V3(
                &m->nested.internationalreserve_spend_V3.to,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* internationalreserve_spend_V3 - amount */;
            return _toStringBalance_V3(
                &m->nested.internationalreserve_spend_V3.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 6401: /* module 25 call 1 */
        switch (itemIdx) {
        case 0: /* internationalreserve_tip_V3 - amount */;
            return _toStringBalance_V3(
                &m->nested.internationalreserve_tip_V3.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 6656: /* module 26 call 0 */
        switch (itemIdx) {
        case 0: /* usareserve_spend_V3 - to */;
            return _toStringAccountId_V3(
                &m->nested.usareserve_spend_V3.to,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* usareserve_spend_V3 - amount */;
            return _toStringBalance_V3(
                &m->nested.usareserve_spend_V3.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 6657: /* module 26 call 1 */
        switch (itemIdx) {
        case 0: /* usareserve_tip_V3 - amount */;
            return _toStringBalance_V3(
                &m->nested.usareserve_tip_V3.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 6914: /* module 27 call 2 */
        switch (itemIdx) {
        case 0: /* vesting_cancel_all_vesting_schedules_V3 - who */;
            return _toStringLookupasStaticLookupSource_V3(
                &m->nested.vesting_cancel_all_vesting_schedules_V3.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* vesting_cancel_all_vesting_schedules_V3 - funds_collector */;
            return _toStringLookupasStaticLookupSource_V3(
                &m->nested.vesting_cancel_all_vesting_schedules_V3.funds_collector,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* vesting_cancel_all_vesting_schedules_V3 - limit_to_free_balance */;
            return _toStringbool(
                &m->nested.vesting_cancel_all_vesting_schedules_V3.limit_to_free_balance,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 7170: /* module 28 call 2 */
        switch (itemIdx) {
        case 0: /* utility_batch_all_V3 - calls */;
            return _toStringVecCall_V3(
                &m->nested.utility_batch_all_V3.calls,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 7424: /* module 29 call 0 */
        switch (itemIdx) {
        case 0: /* multisig_as_multi_threshold_1_V3 - other_signatories */;
            return _toStringVecAccountId_V3(
                &m->nested.multisig_as_multi_threshold_1_V3.other_signatories,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* multisig_as_multi_threshold_1_V3 - call */;
            return _toStringCall_V3(
                &m->nested.multisig_as_multi_threshold_1_V3.call,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 7425: /* module 29 call 1 */
        switch (itemIdx) {
        case 0: /* multisig_as_multi_V3 - threshold */;
            return _toStringu16(
                &m->nested.multisig_as_multi_V3.threshold,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* multisig_as_multi_V3 - other_signatories */;
            return _toStringVecAccountId_V3(
                &m->nested.multisig_as_multi_V3.other_signatories,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* multisig_as_multi_V3 - maybe_timepoint */;
            return _toStringOptionTimepoint_V3(
                &m->nested.multisig_as_multi_V3.maybe_timepoint,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* multisig_as_multi_V3 - call */;
            return _toStringOpaqueCall_V3(
                &m->nested.multisig_as_multi_V3.call,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 4: /* multisig_as_multi_V3 - store_call */;
            return _toStringbool(
                &m->nested.multisig_as_multi_V3.store_call,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 5: /* multisig_as_multi_V3 - max_weight */;
            return _toStringWeight_V3(
                &m->nested.multisig_as_multi_V3.max_weight,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 7426: /* module 29 call 2 */
        switch (itemIdx) {
        case 0: /* multisig_approve_as_multi_V3 - threshold */;
            return _toStringu16(
                &m->nested.multisig_approve_as_multi_V3.threshold,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* multisig_approve_as_multi_V3 - other_signatories */;
            return _toStringVecAccountId_V3(
                &m->nested.multisig_approve_as_multi_V3.other_signatories,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* multisig_approve_as_multi_V3 - maybe_timepoint */;
            return _toStringOptionTimepoint_V3(
                &m->nested.multisig_approve_as_multi_V3.maybe_timepoint,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* multisig_approve_as_multi_V3 - call_hash */;
            return _toStringH256_V3(
                &m->nested.multisig_approve_as_multi_V3.call_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 4: /* multisig_approve_as_multi_V3 - max_weight */;
            return _toStringWeight_V3(
                &m->nested.multisig_approve_as_multi_V3.max_weight,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 7427: /* module 29 call 3 */
        switch (itemIdx) {
        case 0: /* multisig_cancel_as_multi_V3 - threshold */;
            return _toStringu16(
                &m->nested.multisig_cancel_as_multi_V3.threshold,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* multisig_cancel_as_multi_V3 - other_signatories */;
            return _toStringVecAccountId_V3(
                &m->nested.multisig_cancel_as_multi_V3.other_signatories,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* multisig_cancel_as_multi_V3 - timepoint */;
            return _toStringTimepoint_V3(
                &m->nested.multisig_cancel_as_multi_V3.timepoint,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* multisig_cancel_as_multi_V3 - call_hash */;
            return _toStringH256_V3(
                &m->nested.multisig_cancel_as_multi_V3.call_hash,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 7680: /* module 30 call 0 */
        switch (itemIdx) {
        case 0: /* contracts_call_V3 - dest */;
            return _toStringLookupasStaticLookupSource_V3(
                &m->basic.contracts_call_V3.dest,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* contracts_call_V3 - amount */;
            return _toStringCompactu128_V3(
                &m->basic.contracts_call_V3.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* contracts_call_V3 - gas_limit */;
            return _toStringCompactu64_V3(
                &m->basic.contracts_call_V3.gas_limit,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* contracts_call_V3 - data */;
            return _toStringVecu8_V3(
                &m->basic.contracts_call_V3.data,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 7681: /* module 30 call 1 */
        switch (itemIdx) {
        case 0: /* contracts_instantiate_with_code_V3 - endowment */;
            return _toStringCompactu128_V3(
                &m->basic.contracts_instantiate_with_code_V3.endowment,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* contracts_instantiate_with_code_V3 - gas_limit */;
            return _toStringCompactu64_V3(
                &m->basic.contracts_instantiate_with_code_V3.gas_limit,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* contracts_instantiate_with_code_V3 - code */;
            return _toStringVecu8_V3(
                &m->basic.contracts_instantiate_with_code_V3.code,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 3: /* contracts_instantiate_with_code_V3 - data */;
            return _toStringVecu8_V3(
                &m->basic.contracts_instantiate_with_code_V3.data,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 4: /* contracts_instantiate_with_code_V3 - salt */;
            return _toStringVecu8_V3(
                &m->basic.contracts_instantiate_with_code_V3.salt,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 7936: /* module 31 call 0 */
        switch (itemIdx) {
        case 0: /* pkitcr_apply_V3 - metadata */;
            return _toStringVecu8_V3(
                &m->nested.pkitcr_apply_V3.metadata,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* pkitcr_apply_V3 - deposit */;
            return _toStringBalance_V3(
                &m->nested.pkitcr_apply_V3.deposit,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 7937: /* module 31 call 1 */
        switch (itemIdx) {
        case 0: /* pkitcr_counter_V3 - member */;
            return _toStringAccountId_V3(
                &m->nested.pkitcr_counter_V3.member,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* pkitcr_counter_V3 - deposit */;
            return _toStringBalance_V3(
                &m->nested.pkitcr_counter_V3.deposit,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 7938: /* module 31 call 2 */
        switch (itemIdx) {
        case 0: /* pkitcr_vote_V3 - member */;
            return _toStringAccountId_V3(
                &m->nested.pkitcr_vote_V3.member,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* pkitcr_vote_V3 - supporting */;
            return _toStringbool(
                &m->nested.pkitcr_vote_V3.supporting,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* pkitcr_vote_V3 - deposit */;
            return _toStringBalance_V3(
                &m->nested.pkitcr_vote_V3.deposit,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 7939: /* module 31 call 3 */
        switch (itemIdx) {
        case 0: /* pkitcr_challenge_V3 - member */;
            return _toStringAccountId_V3(
                &m->nested.pkitcr_challenge_V3.member,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* pkitcr_challenge_V3 - deposit */;
            return _toStringBalance_V3(
                &m->nested.pkitcr_challenge_V3.deposit,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 8192: /* module 32 call 0 */
        switch (itemIdx) {
        case 0: /* pkirootoftrust_book_slot_V3 - certificate_id */;
            return _toStringCertificateId_V3(
                &m->nested.pkirootoftrust_book_slot_V3.certificate_id,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 8193: /* module 32 call 1 */
        switch (itemIdx) {
        case 0: /* pkirootoftrust_renew_slot_V3 - certificate_id */;
            return _toStringCertificateId_V3(
                &m->nested.pkirootoftrust_renew_slot_V3.certificate_id,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 8194: /* module 32 call 2 */
        switch (itemIdx) {
        case 0: /* pkirootoftrust_revoke_slot_V3 - certificate_id */;
            return _toStringCertificateId_V3(
                &m->nested.pkirootoftrust_revoke_slot_V3.certificate_id,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 8195: /* module 32 call 3 */
        switch (itemIdx) {
        case 0: /* pkirootoftrust_revoke_child_V3 - root */;
            return _toStringCertificateId_V3(
                &m->nested.pkirootoftrust_revoke_child_V3.root,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* pkirootoftrust_revoke_child_V3 - child */;
            return _toStringCertificateId_V3(
                &m->nested.pkirootoftrust_revoke_child_V3.child,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 8448: /* module 33 call 0 */
        switch (itemIdx) {
        default:
            return parser_no_data;
        }
    case 8704: /* module 34 call 0 */
        switch (itemIdx) {
        case 0: /* allocations_allocate_V3 - to */;
            return _toStringAccountId_V3(
                &m->basic.allocations_allocate_V3.to,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* allocations_allocate_V3 - amount */;
            return _toStringBalance_V3(
                &m->basic.allocations_allocate_V3.amount,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 2: /* allocations_allocate_V3 - proof */;
            return _toStringVecu8_V3(
                &m->basic.allocations_allocate_V3.proof,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 8960: /* module 35 call 0 */
        switch (itemIdx) {
        case 0: /* allocationsoracles_add_member_V3 - who */;
            return _toStringAccountId_V3(
                &m->nested.allocationsoracles_add_member_V3.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 8961: /* module 35 call 1 */
        switch (itemIdx) {
        case 0: /* allocationsoracles_remove_member_V3 - who */;
            return _toStringAccountId_V3(
                &m->nested.allocationsoracles_remove_member_V3.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 8962: /* module 35 call 2 */
        switch (itemIdx) {
        case 0: /* allocationsoracles_swap_member_V3 - remove */;
            return _toStringAccountId_V3(
                &m->nested.allocationsoracles_swap_member_V3.remove,
                outValue, outValueLen,
                pageIdx, pageCount);
        case 1: /* allocationsoracles_swap_member_V3 - add */;
            return _toStringAccountId_V3(
                &m->nested.allocationsoracles_swap_member_V3.add,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 8963: /* module 35 call 3 */
        switch (itemIdx) {
        case 0: /* allocationsoracles_reset_members_V3 - members */;
            return _toStringVecAccountId_V3(
                &m->nested.allocationsoracles_reset_members_V3.members,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 8964: /* module 35 call 4 */
        switch (itemIdx) {
        case 0: /* allocationsoracles_change_key_V3 - new_ */;
            return _toStringAccountId_V3(
                &m->nested.allocationsoracles_change_key_V3.new_,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 8965: /* module 35 call 5 */
        switch (itemIdx) {
        case 0: /* allocationsoracles_set_prime_V3 - who */;
            return _toStringAccountId_V3(
                &m->nested.allocationsoracles_set_prime_V3.who,
                outValue, outValueLen,
                pageIdx, pageCount);
        default:
            return parser_no_data;
        }
    case 8966: /* module 35 call 6 */
        switch (itemIdx) {
        default:
            return parser_no_data;
        }
#endif
    default:
        return parser_ok;
    }

    return parser_ok;
}

bool _getMethod_ItemIsExpert_V3(uint8_t moduleIdx, uint8_t callIdx, uint8_t itemIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {

    default:
        return false;
    }
}

bool _getMethod_IsNestingSupported_V3(uint8_t moduleIdx, uint8_t callIdx)
{
    uint16_t callPrivIdx = ((uint16_t)moduleIdx << 8u) + callIdx;

    switch (callPrivIdx) {
    case 9: // System:Remark with event
    case 256: // Timestamp:Set
    case 516: // Balances:Transfer all
    case 517: // Balances:Force unreserve
    case 1538: // Grandpa:Note stalled
    case 3072: // Session:Set keys
    case 3073: // Session:Purge keys
    case 7680: // Contracts:Call
    case 7681: // Contracts:Instantiate with code
    case 8704: // Allocations:Allocate
        return false;
    default:
        return true;
    }
}
