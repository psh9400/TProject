#include "main.h"

int SET_RULE::GET_MONEY()
{

	owner_money -= bet_rate;

	if (user_card_point > dealer_card_point)
	{
		if (user_card_point == 21)
			owner_money += (bet_rate) * 3;
		else if (user_card_point > 21)
			owner_money;
		else
			owner_money += (bet_rate) * 2;
	}
	else if (dealer_card_point > user_card_point)
	{
		if (dealer_card_point == 21)
			owner_money -= bet_rate;
	}
	else if (dealer_card_point == user_card_point)
	{
		owner_money += bet_rate;
	}
	cout << " --------------------------------------------" << endl;
	cout << " ���� �ݾ� : " << owner_money << " $ �Դϴ�." << endl;

	return 0;
}