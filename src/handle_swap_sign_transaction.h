#pragma once

#include "swap_lib_calls.h"
#include "chainConfig.h"

bool copy_transaction_parameters(create_transaction_parameters_t* sign_transaction_params,
                                 chain_config_t* config);

void handle_swap_sign_transaction(chain_config_t* config);

void __attribute__((noreturn)) finalize_exchange_sign_transaction(bool is_success);
