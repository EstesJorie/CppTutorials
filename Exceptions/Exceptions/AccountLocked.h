#pragma once

#include <stdexcept>

class AccountLocked : public std::exception
{
public:
	const char* what() const noexcept override
	{
		return "Account Locked.";
	}

};
