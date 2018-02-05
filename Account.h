#include <iostream>
class Account;

public:
		Account (std::string, int intialBalance)
		:name{accountName} {
	
	if (initialBalance > 0 ) {
		balance = initalBalance;
		}
		}
		
		void deposit (int depositAmount) {
	if (depositAmount > 0 ) {
		balance = balance + depositAmount ;
		}
		}
		
		int getBalance () const {
		return balance;
		}
		
		void setName (std::accountName) {
			name = accountName;
			};
			
