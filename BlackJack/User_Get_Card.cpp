#include "main.h"

int GET_CARD::USER_GET_CARD()
{
	while (TRUE)
	{
		user_card_value = rand() % 13 + 1; 
		if (user_card_value == 10 || user_card_value == 12 || user_card_value == 13)
			user_card_value = 10;
		if (user_card_value == 11 || user_card_value == 1)
		{
			cout << "ACE�� �����̽��ϴ�. 1�� a , 11�� A�� �Է��ϼ��� : ";
			do {
				cin >> &ace_select;
				if (ace_select == 'a') user_card_value = 1;
				else if (ace_select == 'A') user_card_value = 11;
				else cout << "'a'�� 'A'�� �Է����ּ���." << endl;
			} while (!(ace_select == 'a' || ace_select == 'A'));
		}
		user_card_point += user_card_value;
		user_card_count++;
		if (user_card_count > 1)
		{
			cout << user_card_count << "��° ī�� , ���� : " << user_card_point << endl;
			if (user_card_point > 21)return 2;
			do {
				cout << "ī�带 �� �����ðڽ��ϱ� ? (Y/N) ";
				cin >> &yes_or_no;
			} while (!(yes_or_no == 'y' || yes_or_no == 'Y' || yes_or_no == 'n' || yes_or_no == 'N'));

			if (yes_or_no == 'n' || yes_or_no == 'N')return 2;
		}
	}
	return 0;
}