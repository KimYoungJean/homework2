#include <iostream>
#include <windows.h>
#include <time.h>
/*
	int weaponA;

	srand(time(NULL));

		weaponA = rand() % 6  + 20;
		weaponA = 20 + rand() % 6 ;

		cout << "������ ������ ��:" << weaponA << endl;

		*/

using std::cout;
using std::endl;
void textColor(int font, int backGround);

namespace weapon
{
	namespace eternalBlade
	{
		int dmgeternalBlade = 50;
		int priceneternalBlade = 500;
	}
	namespace dragonClaw
	{

		int dmgdragonClaw = 40;
		int pricebdragonClaw = 600;
	}
	namespace goldenSpear
	{
		int dmggoldenSpeare = 45;
		int pricengoldenSpear = 550;
	}namespace axeOfJudgement
	{
		int dmgaxeOfJudgement = 60;
		int priceaxeOfJudgement = 700;
	}namespace bowOfChaos
	{
		int dmgbowOfChaos = 55;
		int pricebowOfChaos = 650;
	}
	
}
namespace armour
{
	namespace sacredArmor
	{
		int defsacredArmor = 60;
		int pricesacredArmor = 700;
	}
	namespace dragonScalePlate
	{
		int defdragonScalePlate = 55;
		int pricedragonScalePlate = 650;
	}
	namespace mysticCloack
	{
		int defmysticCloack = 50;
		int pricemysticCloack = 600;
	}
	namespace ironwallSheld
	{
		int defironwallSheld = 65;
		int priceironwallSheld = 750;
	}
	namespace guardianPlate
	{
		int defguardianPlate = 70;
		int priceguardianPlate = 800;
	}
}
namespace acc
{
	namespace ringOfImmortality
	{
		int defringOfImmortality = 40;
		int priceringOfImmortality = 1000;
	}
	namespace divineNecklace
	{
		int defdivineNecklace = 35;
		int pricdivineNecklace = 800;
	}
	namespace arcaneGem
	{
		int defarcaneGem = 30;
		int pricearcaneGem = 900;
	}
	namespace braceletOfShadows
	{
		int defbraceletOfShadows = 45;
		int pricebraceletOfShadows = 850;
	}
	namespace earringsOfThunder
	{
		int defearringsOfThunder = 50;
		int priceearringsOfThunder = 950;
	}
}
void main()
{
	
	cout << "������ �佺�� ���尣" << endl;
	cout << "===========================�޴���===========================" << endl;
	
	cout << "�ӹ����" <<"\t\t\t�ӹ���"<< endl;
	cout << "Eternal Blade" << "\t\t\t�������� ����" << endl;
	cout << "������:"<<weapon::eternalBlade::dmgeternalBlade<< "\t\t\t����:"<<armour::sacredArmor::defsacredArmor << endl;
	cout << "����:" << weapon::eternalBlade::priceneternalBlade<<"\t\t\t����:"<<armour::sacredArmor::pricesacredArmor <<  endl<<endl;

	cout << "Dragon's Claw" << "\t\t\t���� ��� ����" << endl;
	cout << "������:" <<weapon::dragonClaw::dmgdragonClaw<< "\t\t\t����:"<<armour::dragonScalePlate::defdragonScalePlate << endl;
	cout << "����:" << weapon::dragonClaw::pricebdragonClaw<<"\t\t\t����:"<<armour::guardianPlate::priceguardianPlate<< endl << endl;

	cout << "Golden Spear" << "\t\t\t�ź��� ����" << endl;
	cout << "������:" <<weapon::goldenSpear::dmggoldenSpeare<< "\t\t\t����:"<<armour::mysticCloack::defmysticCloack << endl;
	cout << "����:" << weapon::goldenSpear::pricengoldenSpear<<"\t\t\t����:"<<armour::mysticCloack::pricemysticCloack << endl << endl;

	cout << "Axe of Judgment" << "\t\t\tö�� ����" << endl;
	cout << "������:" <<weapon::axeOfJudgement::dmgaxeOfJudgement<< "\t\t\t����:"<<armour::ironwallSheld::defironwallSheld << endl;
	cout << "����:" <<weapon::axeOfJudgement::priceaxeOfJudgement<< "\t\t\t����:" <<armour::ironwallSheld::priceironwallSheld<< endl << endl;

	cout << "Bow of Chaos" << "\t\t\t��ȣ���� ����" << endl;
	cout << "������:" <<weapon::bowOfChaos::dmgbowOfChaos<< "\t\t\t����:" <<armour::guardianPlate::defguardianPlate << endl;
	cout << "����:" <<weapon::axeOfJudgement::priceaxeOfJudgement<< "\t\t\t����:"<<armour::guardianPlate::priceguardianPlate << endl << endl;

	cout << "����ű���" << endl;
	cout << "�Ҹ��� ����" << endl;
	cout << "����:" <<acc::ringOfImmortality::defringOfImmortality<< endl;
	cout << "����:" << acc::ringOfImmortality::priceringOfImmortality<< endl << endl;

	cout << "�ż��� �����" << endl;
	cout << "����:" <<acc::divineNecklace::defdivineNecklace<< endl;
	cout << "����:" << acc::divineNecklace::pricdivineNecklace<<endl << endl;

	cout << "���� ����" << endl;
	cout << "����:" <<acc::arcaneGem::defarcaneGem<< endl;
	cout << "����:" << acc::arcaneGem::pricearcaneGem<<endl << endl;

	cout << "����� ���� " << endl;
	cout << "����:" <<acc::braceletOfShadows::defbraceletOfShadows<< endl;
	cout << "����:" << acc::braceletOfShadows::pricebraceletOfShadows<<endl << endl;

	cout << "õ���� �Ͱ���" << endl;
	cout << "����:" <<acc::earringsOfThunder::defearringsOfThunder<< endl;
	cout << "����:" << acc::earringsOfThunder::priceearringsOfThunder<<endl << endl;

	textColor(0 , 15);
	cout<<"           ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 0);
	cout << "    " << endl;
	textColor(0, 15);
	cout << "         ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 15);
	cout << "   ";
	textColor(0, 0);
	cout << " " << endl;
	textColor(0, 15);
	cout << "         ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 15);
	cout << "  ";
	textColor(0, 11);
	cout << " ";
	textColor(0, 3);
	cout << " ";
	textColor(0, 0);
	cout << " " << endl;
	textColor(0, 15);
	cout << "        ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 15);
	cout << "  ";
	textColor(0, 11);
	cout << " ";
	textColor(0, 3);
	cout << " ";
	textColor(0, 7);
	cout << " ";
	textColor(0, 0);
	cout << " " << endl;
	textColor(0, 15);
	cout << "       ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 15);
	cout << "  ";
	textColor(0, 11);
	cout << " ";
	textColor(0, 3);
	cout << " ";
	textColor(0, 7);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 15);
	cout << "" << endl;
	textColor(0, 15);
	cout << "      ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 15);
	cout << "  ";
	textColor(0, 11);
	cout << " ";
	textColor(0, 3);
	cout << " ";
	textColor(0, 7);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 15);
	cout<<" " << endl;
	textColor(0, 15);
	cout << "     ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 15);
	cout << "  ";
	textColor(0, 11);
	cout << " ";
	textColor(0, 3);
	cout << " ";
	textColor(0, 7);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 15);
	cout << "  " << endl;
	textColor(0, 15);
	cout << "    ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 15);
	cout << "  ";
	textColor(0, 11);
	cout << " ";
	textColor(0, 3);
	cout << " ";
	textColor(0, 7);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 15);
	cout << "   " << endl;
	textColor(0, 15);
	cout << "   ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 15);
	cout << "  ";
	textColor(0, 11);
	cout << " ";
	textColor(0, 3);
	cout << " ";
	textColor(0, 7);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 15);
	cout << "    " << endl;
	textColor(0, 15);
	cout << "  ";
	textColor(0, 8);
	cout << "";
	textColor(0, 0);
	cout << "  ";
	textColor(0, 15);
	cout << "  ";
	textColor(0, 11);
	cout << " ";
	textColor(0, 3);
	cout << " ";
	textColor(0, 7);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 15);
	cout << "     " << endl;
	textColor(0, 15);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 14);
	cout << " ";
	textColor(0, 0);
	cout << "";
	textColor(0, 0);
	cout << " ";
	textColor(0, 11);
	cout << " ";
	textColor(0, 3);
	cout << " ";
	textColor(0, 3);
	cout << " ";
	textColor(0, 7);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 15);
	cout << "      "<<endl;
	textColor(0, 8);
	cout << "  ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 14);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 3);
	cout << " ";
	textColor(0, 7);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 15);
	cout << "        "<<endl;
	textColor(0, 15);
	cout << " ";
	textColor(0, 0);
	cout << "  ";
	textColor(0, 6);
	cout << " ";
	textColor(0, 12);
	cout << " ";
	textColor(0, 0);
	cout << "  ";
	textColor(0, 15);
	cout << "         " << endl;
	textColor(0, 0);
	cout << " ";
	textColor(0, 14);
	cout << " ";
	textColor(0, 6);
	cout << " ";
	textColor(0, 0);
	cout << "  ";
	textColor(0, 15);
	cout << "           "<<endl;
	textColor(0, 0);
	cout << " ";
	textColor(0, 14);
	cout << "  ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 15);
	cout << "            "<<endl;
	textColor(0, 15);
	cout << " ";
	textColor(0, 0);
	cout << "  ";
	textColor(0, 15);
	cout << "             "<<endl<<endl<<endl;
	textColor(0, 15);
	cout << "     ";
	textColor(0, 8);
	cout << "     ";
	textColor(0, 15);
	cout << "      "<<endl;
	textColor(0, 15);
	cout << "    ";
	textColor(0, 8);
	cout << "  ";
	textColor(0, 0);
	cout << "    ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 15);
	cout << "     " << endl;
	textColor(0, 15);
	cout << "   ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 0);
	cout << "  ";
	textColor(0, 8);
	cout << "    ";
	textColor(0, 0);
	cout << "  ";
	textColor(0, 8);
	cout << "  ";
	textColor(0, 15);
	cout << "  "<<endl;
	textColor(0, 15);
	cout << "  ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << "  ";
	textColor(0, 7);
	cout << "    ";
	textColor(0, 15);
	cout << "  ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 15);
	cout << " "<<endl;
	textColor(0, 15);
	cout << " ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << "  ";
	textColor(0, 7);
	cout << "       ";
	textColor(0, 15);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << "  "<<endl;
	textColor(0, 15);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 7);
	cout << "          ";
	textColor(0, 15);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << " " << endl;
	textColor(0, 15);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << "";
	textColor(0, 7);
	cout << "            ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << " " << endl;
	textColor(0, 15);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 7);
	cout << " ";
	textColor(0, 8);
	cout << "    ";
	textColor(0, 7);
	cout << "  ";
	textColor(0, 8);
	cout << "    ";
	textColor(0, 15);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << " "<<endl;
	textColor(0, 15);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 7);
	cout << " ";
	textColor(0, 0);
	cout << "    ";
	textColor(0, 8);
	cout << "  ";
	textColor(0, 0);
	cout << "    ";
	textColor(0, 15);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << " "<<endl;
	textColor(0, 15);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 7);
	cout << " ";
	textColor(0, 0);
	cout << "          ";
	textColor(0, 15);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << " "<<endl;
	textColor(0, 15);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 7);
	cout << " ";
	textColor(0, 0);
	cout << "          ";
	textColor(0, 7);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << " "<<endl;
	textColor(0, 15);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 7);
	cout << " ";
	textColor(0, 15);
	cout << " ";
	textColor(0, 0);
	cout << "        ";
	textColor(0, 15);
	cout << " ";
	textColor(0, 7);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << " "<<endl;
	textColor(0, 15);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << "  ";
	textColor(0, 7);
	cout << "   ";
	textColor(0, 0);
	cout << "  ";
	textColor(0, 7);
	cout << "    ";
	textColor(0, 8);
	cout << " ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 15);
	cout << " "<<endl;
	textColor(0, 15);
	cout << "  ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << "    ";
	textColor(0, 0);
	cout << "  ";
	textColor(0, 8);
	cout << "    ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 15);
	cout << "  "<<endl;
	textColor(0, 15);
	cout << "   ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 8);
	cout << "   ";
	textColor(0, 0);
	cout << "  ";
	textColor(0, 8);
	cout << "   ";
	textColor(0, 0);
	cout << " ";
	textColor(0, 15);
	cout << "   "<<endl;
	textColor(0, 15);
	cout << "    ";
	textColor(0, 0);
	cout << "        ";
	textColor(0, 15);
	cout << "    "<<endl;
	
	





	
	



}
void textColor(int font, int backGround)
{
	int Color = font + backGround * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), Color);
}