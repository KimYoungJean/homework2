#include <iostream>
#include <windows.h>
#include <time.h>
/*
	int weaponA;

	srand(time(NULL));

		weaponA = rand() % 6  + 20;
		weaponA = 20 + rand() % 6 ;

		cout << "무기의 데미지 값:" << weaponA << endl;

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
	
	cout << "헤파이 토스의 대장간" << endl;
	cout << "===========================메뉴판===========================" << endl;
	
	cout << "ㅣ무기ㅣ" <<"\t\t\tㅣ방어구ㅣ"<< endl;
	cout << "Eternal Blade" << "\t\t\t성스러운 갑옷" << endl;
	cout << "데미지:"<<weapon::eternalBlade::dmgeternalBlade<< "\t\t\t방어력:"<<armour::sacredArmor::defsacredArmor << endl;
	cout << "가격:" << weapon::eternalBlade::priceneternalBlade<<"\t\t\t가격:"<<armour::sacredArmor::pricesacredArmor <<  endl<<endl;

	cout << "Dragon's Claw" << "\t\t\t용의 비늘 갑옷" << endl;
	cout << "데미지:" <<weapon::dragonClaw::dmgdragonClaw<< "\t\t\t방어력:"<<armour::dragonScalePlate::defdragonScalePlate << endl;
	cout << "가격:" << weapon::dragonClaw::pricebdragonClaw<<"\t\t\t가격:"<<armour::guardianPlate::priceguardianPlate<< endl << endl;

	cout << "Golden Spear" << "\t\t\t신비한 망토" << endl;
	cout << "데미지:" <<weapon::goldenSpear::dmggoldenSpeare<< "\t\t\t방어력:"<<armour::mysticCloack::defmysticCloack << endl;
	cout << "가격:" << weapon::goldenSpear::pricengoldenSpear<<"\t\t\t가격:"<<armour::mysticCloack::pricemysticCloack << endl << endl;

	cout << "Axe of Judgment" << "\t\t\t철벽 방패" << endl;
	cout << "데미지:" <<weapon::axeOfJudgement::dmgaxeOfJudgement<< "\t\t\t방어력:"<<armour::ironwallSheld::defironwallSheld << endl;
	cout << "가격:" <<weapon::axeOfJudgement::priceaxeOfJudgement<< "\t\t\t가격:" <<armour::ironwallSheld::priceironwallSheld<< endl << endl;

	cout << "Bow of Chaos" << "\t\t\t수호자의 갑주" << endl;
	cout << "데미지:" <<weapon::bowOfChaos::dmgbowOfChaos<< "\t\t\t방어력:" <<armour::guardianPlate::defguardianPlate << endl;
	cout << "가격:" <<weapon::axeOfJudgement::priceaxeOfJudgement<< "\t\t\t가격:"<<armour::guardianPlate::priceguardianPlate << endl << endl;

	cout << "ㅣ장신구ㅣ" << endl;
	cout << "불멸의 반지" << endl;
	cout << "방어력:" <<acc::ringOfImmortality::defringOfImmortality<< endl;
	cout << "가격:" << acc::ringOfImmortality::priceringOfImmortality<< endl << endl;

	cout << "신성한 목걸이" << endl;
	cout << "방어력:" <<acc::divineNecklace::defdivineNecklace<< endl;
	cout << "가격:" << acc::divineNecklace::pricdivineNecklace<<endl << endl;

	cout << "마력 보석" << endl;
	cout << "방어력:" <<acc::arcaneGem::defarcaneGem<< endl;
	cout << "가격:" << acc::arcaneGem::pricearcaneGem<<endl << endl;

	cout << "어둠의 팔찌 " << endl;
	cout << "방어력:" <<acc::braceletOfShadows::defbraceletOfShadows<< endl;
	cout << "가격:" << acc::braceletOfShadows::pricebraceletOfShadows<<endl << endl;

	cout << "천둥의 귀걸이" << endl;
	cout << "방어력:" <<acc::earringsOfThunder::defearringsOfThunder<< endl;
	cout << "가격:" << acc::earringsOfThunder::priceearringsOfThunder<<endl << endl;

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