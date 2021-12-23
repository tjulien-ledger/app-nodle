# Nodle  3.57.x

## System

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Fill block |    | :heavy_check_mark: | :heavy_check_mark: | `Perbill` ratio <br/> | 
|Remark |    | :heavy_check_mark: | :heavy_check_mark: | `Vecu8` remark <br/> | 
|Set heap pages |    | :heavy_check_mark: | :heavy_check_mark: | `u64` pages <br/> | 
|Set code |    | :heavy_check_mark: | :heavy_check_mark: | `Vecu8` code <br/> | 
|Set code without checks |    | :heavy_check_mark: | :heavy_check_mark: | `Vecu8` code <br/> | 
|Set changes trie config |    |   |   | `OptionChangesTrieConfiguration` changes_trie_config <br/> | 
|Set storage |    |   |   | `VecKeyValue` items <br/> | 
|Kill storage |    |   |   | `VecKey` keys <br/> | 
|Kill prefix |    |   |   | `Key` prefix <br/>`u32` subkeys <br/> | 
|Remark with event |    | :heavy_check_mark: |   | `Vecu8` remark <br/> | 

## Timestamp

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set |    | :heavy_check_mark: |   | `Compactu64` now <br/> | 

## Balances

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Transfer | :heavy_check_mark:  | :heavy_check_mark: | :heavy_check_mark: | `LookupasStaticLookupSource` dest <br/>`Compactu128` amount <br/> | 
|Set balance |    | :heavy_check_mark: | :heavy_check_mark: | `LookupasStaticLookupSource` who <br/>`Compactu128` new_free <br/>`Compactu128` new_reserved <br/> | 
|Force transfer |    | :heavy_check_mark: | :heavy_check_mark: | `LookupasStaticLookupSource` source <br/>`LookupasStaticLookupSource` dest <br/>`Compactu128` amount <br/> | 
|Transfer keep alive | :heavy_check_mark:  | :heavy_check_mark: | :heavy_check_mark: | `LookupasStaticLookupSource` dest <br/>`Compactu128` amount <br/> | 
|Transfer all |    | :heavy_check_mark: |   | `LookupasStaticLookupSource` dest <br/>`bool` keep_alive <br/> | 
|Force unreserve |    | :heavy_check_mark: |   | `LookupasStaticLookupSource` who <br/>`Balance` amount <br/> | 

## Babe

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Report equivocation |    |   |   | `BoxEquivocationProofHeader` equivocation_proof <br/>`KeyOwnerProof` key_owner_proof <br/> | 
|Report equivocation unsigned |    |   |   | `BoxEquivocationProofHeader` equivocation_proof <br/>`KeyOwnerProof` key_owner_proof <br/> | 
|Plan config change |    |   |   | `NextConfigDescriptor` config <br/> | 

## Grandpa

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Report equivocation |    |   |   | `BoxEquivocationProofHashBlockNumber` equivocation_proof <br/>`KeyOwnerProof` key_owner_proof <br/> | 
|Report equivocation unsigned |    |   |   | `BoxEquivocationProofHashBlockNumber` equivocation_proof <br/>`KeyOwnerProof` key_owner_proof <br/> | 
|Note stalled |    | :heavy_check_mark: |   | `BlockNumber` delay <br/>`BlockNumber` best_finalized_block_number <br/> | 

## Authorship

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set uncles |    |   |   | `VecHeader` new_uncles <br/> | 

## ImOnline

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Heartbeat |    |   |   | `HeartbeatBlockNumber` heartbeat <br/>`AuthorityIdasRuntimeAppPublicSignature` signature <br/> | 

## ValidatorsSet

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Add member |    |   |   | `AccountId` who <br/> | 
|Remove member |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` who <br/> | 
|Swap member |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` remove <br/>`AccountId` add <br/> | 
|Reset members |    | :heavy_check_mark: | :heavy_check_mark: | `VecAccountId` members <br/> | 
|Change key |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` new_ <br/> | 
|Set prime |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` who <br/> | 
|Clear prime |    | :heavy_check_mark: | :heavy_check_mark: |  | 

## Session

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set keys | :heavy_check_mark:  | :heavy_check_mark: |   | `Keys` keys <br/>`Vecu8` proof <br/> | 
|Purge keys | :heavy_check_mark:  | :heavy_check_mark: |   |  | 

## TechnicalCommittee

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set members |    |   |   | `VecAccountId` new_members <br/>`OptionAccountId` prime <br/>`MemberCount` old_count <br/> | 
|Execute |    |   |   | `BoxTasConfigIProposal` proposal <br/>`Compactu32` length_bound <br/> | 
|Propose |    |   |   | `Compactu32` threshold <br/>`BoxTasConfigIProposal` proposal <br/>`Compactu32` length_bound <br/> | 
|Vote |    | :heavy_check_mark: | :heavy_check_mark: | `Hash` proposal <br/>`Compactu32` index <br/>`bool` approve <br/> | 
|Close |    | :heavy_check_mark: | :heavy_check_mark: | `Hash` proposal_hash <br/>`Compactu32` index <br/>`Compactu64` proposal_weight_bound <br/>`Compactu32` length_bound <br/> | 
|Disapprove proposal |    | :heavy_check_mark: | :heavy_check_mark: | `Hash` proposal_hash <br/> | 

## TechnicalMembership

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Add member |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` who <br/> | 
|Remove member |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` who <br/> | 
|Swap member |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` remove <br/>`AccountId` add <br/> | 
|Reset members |    | :heavy_check_mark: | :heavy_check_mark: | `VecAccountId` members <br/> | 
|Change key |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` new_ <br/> | 
|Set prime |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` who <br/> | 
|Clear prime |    | :heavy_check_mark: | :heavy_check_mark: |  | 

## FinancialCommittee

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set members |    | :heavy_check_mark: | :heavy_check_mark: | `VecAccountId` new_members <br/>`OptionAccountId` prime <br/>`MemberCount` old_count <br/> | 
|Execute |    |   |   | `BoxTasConfigIProposal` proposal <br/>`Compactu32` length_bound <br/> | 
|Propose |    |   |   | `Compactu32` threshold <br/>`BoxTasConfigIProposal` proposal <br/>`Compactu32` length_bound <br/> | 
|Vote |    | :heavy_check_mark: | :heavy_check_mark: | `Hash` proposal <br/>`Compactu32` index <br/>`bool` approve <br/> | 
|Close |    | :heavy_check_mark: | :heavy_check_mark: | `Hash` proposal_hash <br/>`Compactu32` index <br/>`Compactu64` proposal_weight_bound <br/>`Compactu32` length_bound <br/> | 
|Disapprove proposal |    | :heavy_check_mark: | :heavy_check_mark: | `Hash` proposal_hash <br/> | 

## FinancialMembership

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Add member |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` who <br/> | 
|Remove member |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` who <br/> | 
|Swap member |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` remove <br/>`AccountId` add <br/> | 
|Reset members |    | :heavy_check_mark: | :heavy_check_mark: | `VecAccountId` members <br/> | 
|Change key |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` new_ <br/> | 
|Set prime |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` who <br/> | 
|Clear prime |    | :heavy_check_mark: | :heavy_check_mark: |  | 

## RootCommittee

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Set members |    | :heavy_check_mark: | :heavy_check_mark: | `VecAccountId` new_members <br/>`OptionAccountId` prime <br/>`MemberCount` old_count <br/> | 
|Execute |    |   |   | `BoxTasConfigIProposal` proposal <br/>`Compactu32` length_bound <br/> | 
|Propose |    |   |   | `Compactu32` threshold <br/>`BoxTasConfigIProposal` proposal <br/>`Compactu32` length_bound <br/> | 
|Vote |    | :heavy_check_mark: | :heavy_check_mark: | `Hash` proposal <br/>`Compactu32` index <br/>`bool` approve <br/> | 
|Close |    | :heavy_check_mark: | :heavy_check_mark: | `Hash` proposal_hash <br/>`Compactu32` index <br/>`Compactu64` proposal_weight_bound <br/>`Compactu32` length_bound <br/> | 
|Disapprove proposal |    | :heavy_check_mark: | :heavy_check_mark: | `Hash` proposal_hash <br/> | 

## RootMembership

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Add member |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` who <br/> | 
|Remove member |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` who <br/> | 
|Swap member |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` remove <br/>`AccountId` add <br/> | 
|Reset members |    | :heavy_check_mark: | :heavy_check_mark: | `VecAccountId` members <br/> | 
|Change key |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` new_ <br/> | 
|Set prime |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` who <br/> | 
|Clear prime |    | :heavy_check_mark: | :heavy_check_mark: |  | 

## Scheduler

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Schedule |    |   |   | `BlockNumber` when <br/>`OptionschedulePeriodBlockNumber` maybe_periodic <br/>`schedulePriority` priority <br/>`Call` call <br/> | 
|Cancel |    |   |   | `BlockNumber` when <br/>`u32` index <br/> | 
|Schedule named |    |   |   | `Vecu8` id <br/>`BlockNumber` when <br/>`OptionschedulePeriodBlockNumber` maybe_periodic <br/>`schedulePriority` priority <br/>`Call` call <br/> | 
|Cancel named |    |   |   | `Vecu8` id <br/> | 
|Schedule after |    |   |   | `BlockNumber` after <br/>`OptionschedulePeriodBlockNumber` maybe_periodic <br/>`schedulePriority` priority <br/>`Call` call <br/> | 
|Schedule named after |    |   |   | `Vecu8` id <br/>`BlockNumber` after <br/>`OptionschedulePeriodBlockNumber` maybe_periodic <br/>`schedulePriority` priority <br/>`Call` call <br/> | 

## Amendments

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Propose |    |   |   | `BoxAmendment` amendment <br/> | 
|Veto |    | :heavy_check_mark: | :heavy_check_mark: | `u64` amendment_id <br/> | 

## Mandate

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Apply |    | :heavy_check_mark: | :heavy_check_mark: | `Call` call <br/> | 

## CompanyReserve

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Spend |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` to <br/>`Balance` amount <br/> | 
|Tip |    | :heavy_check_mark: | :heavy_check_mark: | `Balance` amount <br/> | 
|Apply as |    |   |   | `BoxTasConfigICall` call <br/> | 

## InternationalReserve

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Spend |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` to <br/>`Balance` amount <br/> | 
|Tip |    | :heavy_check_mark: | :heavy_check_mark: | `Balance` amount <br/> | 
|Apply as |    |   |   | `BoxTasConfigICall` call <br/> | 

## UsaReserve

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Spend |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` to <br/>`Balance` amount <br/> | 
|Tip |    | :heavy_check_mark: | :heavy_check_mark: | `Balance` amount <br/> | 
|Apply as |    |   |   | `BoxTasConfigICall` call <br/> | 

## Vesting

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Claim |    |   |   |  | 
|Add vesting schedule |    |   |   | `LookupasStaticLookupSource` dest <br/>`VestingScheduleOfT` schedule <br/> | 
|Cancel all vesting schedules |    | :heavy_check_mark: | :heavy_check_mark: | `LookupasStaticLookupSource` who <br/>`LookupasStaticLookupSource` funds_collector <br/>`bool` limit_to_free_balance <br/> | 
|Overwrite vesting schedules |    |   |   | `LookupasStaticLookupSource` who <br/>`VecVestingScheduleOfT` new_schedules <br/> | 

## Utility

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Batch | :heavy_check_mark:  | :heavy_check_mark: | :heavy_check_mark: | `VecCall` calls <br/> | 
|As derivative |    |   |   | `u16` index <br/>`Call` call <br/> | 
|Batch all | :heavy_check_mark:  | :heavy_check_mark: | :heavy_check_mark: | `VecCall` calls <br/> | 

## Multisig

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|As multi threshold 1 |    | :heavy_check_mark: | :heavy_check_mark: | `VecAccountId` other_signatories <br/>`Call` call <br/> | 
|As multi |    | :heavy_check_mark: | :heavy_check_mark: | `u16` threshold <br/>`VecAccountId` other_signatories <br/>`OptionTimepoint` maybe_timepoint <br/>`OpaqueCall` call <br/>`bool` store_call <br/>`Weight` max_weight <br/> | 
|Approve as multi |    | :heavy_check_mark: | :heavy_check_mark: | `u16` threshold <br/>`VecAccountId` other_signatories <br/>`OptionTimepoint` maybe_timepoint <br/>`H256` call_hash <br/>`Weight` max_weight <br/> | 
|Cancel as multi |    | :heavy_check_mark: | :heavy_check_mark: | `u16` threshold <br/>`VecAccountId` other_signatories <br/>`Timepoint` timepoint <br/>`H256` call_hash <br/> | 

## Contracts

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Call |    | :heavy_check_mark: |   | `LookupasStaticLookupSource` dest <br/>`Compactu128` amount <br/>`Compactu64` gas_limit <br/>`Vecu8` data <br/> | 
|Instantiate with code |    | :heavy_check_mark: |   | `Compactu128` endowment <br/>`Compactu64` gas_limit <br/>`Vecu8` code <br/>`Vecu8` data <br/>`Vecu8` salt <br/> | 
|Instantiate |    |   |   | `Compactu128` endowment <br/>`Compactu64` gas_limit <br/>`CodeHashT` code_hash <br/>`Vecu8` data <br/>`Vecu8` salt <br/> | 

## PkiTcr

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Apply |    | :heavy_check_mark: | :heavy_check_mark: | `Vecu8` metadata <br/>`Balance` deposit <br/> | 
|Counter |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` member <br/>`Balance` deposit <br/> | 
|Vote |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` member <br/>`bool` supporting <br/>`Balance` deposit <br/> | 
|Challenge |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` member <br/>`Balance` deposit <br/> | 

## PkiRootOfTrust

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Book slot |    | :heavy_check_mark: | :heavy_check_mark: | `CertificateId` certificate_id <br/> | 
|Renew slot |    | :heavy_check_mark: | :heavy_check_mark: | `CertificateId` certificate_id <br/> | 
|Revoke slot |    | :heavy_check_mark: | :heavy_check_mark: | `CertificateId` certificate_id <br/> | 
|Revoke child |    | :heavy_check_mark: | :heavy_check_mark: | `CertificateId` root <br/>`CertificateId` child <br/> | 

## EmergencyShutdown

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Toggle |    | :heavy_check_mark: | :heavy_check_mark: |  | 

## Allocations

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Allocate |    | :heavy_check_mark: |   | `AccountId` to <br/>`Balance` amount <br/>`Vecu8` proof <br/> | 

## AllocationsOracles

| Name        | Light | XL | Nesting | Arguments | 
| :---------- |:------------:|:--------:|:--------:|:--------|
|Add member |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` who <br/> | 
|Remove member |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` who <br/> | 
|Swap member |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` remove <br/>`AccountId` add <br/> | 
|Reset members |    | :heavy_check_mark: | :heavy_check_mark: | `VecAccountId` members <br/> | 
|Change key |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` new_ <br/> | 
|Set prime |    | :heavy_check_mark: | :heavy_check_mark: | `AccountId` who <br/> | 
|Clear prime |    | :heavy_check_mark: | :heavy_check_mark: |  | 

