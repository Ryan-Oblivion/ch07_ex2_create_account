//
//  validation.h
//  ch07_ex2_create_account
//
//  Created by ryan johnson on 3/12/26.
//  Copyright © 2026 Mike Murach & Associates. All rights reserved.
//
#ifndef RJ_VALIDATION_H
#define RJ_VALIDATION_H

#include <string>


namespace validation {

bool is_valid_password(std::string password);
bool is_valid_email(std::string email);

}

#endif
