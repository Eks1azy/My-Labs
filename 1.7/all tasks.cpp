static int nA = 10;//глобальна статична змінна (ініціалована)
static int nB;//глобальна описана статична змінна

void main()
{
	nB = 20;

	{
		static int nE = 5;//Статична змінна 
		int nC;//Не статична змінна 
		nC = nA * 12;
		nE = nC + nB;
		int nA = 5;
		nC = nA * 12;
		nE = nC + nB;
	}

	nA += 10;
	nB++;

	float fK = 20;//динамічний розподіл пам'яті в стеку, fK описна та ініціалізована значенням 20
	int nL = 0;//динамічний розподіл пам'яті в стеку, nL описна та ініціалізована значенням 0
	for (int i = 0; i < 5; i++)

	{
		static int nF = 0;
		nF++;
		int nS = 0;
		nS++;//операція на збільшення nS на 1 
		nL++;//операція на збільшення nL на 1 
		float flt = fK * nF;//присвоєння новій змінній результату fK * nF

	}

	char cA = '!';

	{
		char cA = '?';
		int nQ = 1;
		{
			char cA = '@';
			int nQ = 2;
			int nM = 6;

		}
		nQ = nQ + 5;//привласнення
		nQ--;

	}

	for (int i = 0; i < 5; i = i + 1)

	{
		static int iA = 0;
		int iB = 0;
		iA = iA + 1;
		iB = iB + 1;

	}

	{
		int* pI;//описуємо вказівну типізовану змінну
		pI = new int;//захоплюємо пам'ять в "купі"
		*pI = 10;//заносимо в купу значення змінної
		delete pI;
	}
	
	int* pW;//описуємо вказівну типізовану змінну
	pW = new int;//захоплюємо пам'ять в "купі"
	*pW = 25;//заносимо в купу значення змінної
	//Пам'ять не звільнена 

	int* p = new int;//виділення пам'яті
	*p = 10;//використання пам'яті
	
	p = new int;
	*p = 30;// Використовуємо нову пам'ять
	// Попередня пам'ять втрачена і не може бути звільнена -> "сміття" у купі
	delete p;
}