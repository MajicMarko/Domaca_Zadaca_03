#include <iostream>
#include<ctime>

using namespace std;


int delay(int milliseconds) {
	clock_t goal = milliseconds + clock();
	while (goal > clock());
	return 1;
}

void crtaj(int aredak, int astupac, int bredak, int bstupac) {





	int redaka = 20;
	int stupaca = 40;
	int zid = 15;

	for (int i = 1; i <= redaka; i++)
	{

		for (int j = 1; j <= stupaca; j++)
		{

			if (j == astupac and i == aredak)
			{
				cout << "A";
			}
			else if (j == bstupac and i == bredak)
			{
				cout << "B";
			}
			else if (j == zid && i < 11)
			{
				cout << "|";
			}
			else
			{
				cout << "-";
			}
		

		}cout << endl;
	}
}



void ponovocrtaj(int& aredak, int& astupac, int& bredak, int& bstupac, int& r2, int& s2) {



	int redaka = 20;
	int stupaca = 40;
	int zid = 15;


	if ((astupac == zid - 1 && aredak < 11) || (astupac == zid + 1 && aredak < 11))
	{
		if ((aredak - 11) < 0)
		{
			aredak++;
		}
		if ((aredak - 11) > 0)
		{
			aredak++;
		}

	}

	else if ((astupac - bstupac) < 0)
	{
		//IDE DESNO
		astupac++;
	}


	else if ((astupac - bstupac) > 0)
	{
		//IDE LIJEVO
		astupac--;
	}


	else if ((aredak - bredak) < 0)
	{
		//IDE DOLJE
		aredak++;
	}

	else if ((aredak - bredak) > 0)
	{
		//IDE GORE
		aredak--;
	}

	for (int i = 1; i <= redaka; i++)
	{
		for (int j = 1; j <= stupaca; j++)
		{
			if (j == s2 and i == r2)
			{
				cout << "A";
			}
			else if (j == astupac and i == aredak)
			{
				cout << "X";
			}
			else if (j == bstupac and i == bredak)
			{
				cout << "B";
			}
			else if (j == zid && i < 11)
			{
				cout << "|";
			}
			else
			{
				cout << "-";
			}
		}cout << endl;
	}
}

int main() {

	int  as, ar, bs, br;
	cout << "Uneste stupac tocke A" << endl;
	cin >> as;
	cout << "Uneste redak tocke A" << endl;
	cin >> ar;
	cout << "Uneste stupac tocke B" << endl;
	cin >> bs;
	cout << "Uneste redak tocke B" << endl;
	cin >> br;
	int s2 = as;
	int r2 = ar;
	crtaj(ar, as, br, bs);
	do
	{
		system("CLS");
		ponovocrtaj(ar, as, br, bs, r2, s2);

		delay(100);

	} while (!(as == bs & ar == br));



	return 0;
}