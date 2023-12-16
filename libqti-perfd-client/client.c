/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdint.h>

void perf_get_feedback() {}
void perf_hint() {}
void perf_lock_acq() {}
void perf_lock_cmd() {}
void perf_lock_rel() {}
void perf_lock_use_profile() {}

extern "C" void perf_get_feedback() {}
extern "C" void perf_hint() {}
extern "C" void perf_lock_acq() {}
extern "C" void perf_lock_cmd() {}
extern "C" void perf_lock_rel() {}
extern "C" void perf_lock_use_profile() {}
