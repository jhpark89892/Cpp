#ifndef __ACCOUNTHANDLER_H_
#define __ACCOUNTHANDLER_H_

#include "Account.h"

class AccountHandler
{
private:
	int accNum;
	Account *accArr[100];

public:
	AccountHandler();
	void AddAccount(Account *acc);
	void ShowMenu(void)	const;
	void MakeAccount(void);
	void MakeNormalAccount(void);
	void MakeCreditAccount(void);
	void DepositMoney(void);
	void WithdrawMoney(void);
	void ShowAllAccInfo(void) const;
	~AccountHandler();

};


#endif