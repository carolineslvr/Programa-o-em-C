#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

main()
{
	setlocale (LC_ALL , "Portuguese");

	int meses, i;
    float valorinicial, percentual, valorfinal, rendimento;

    cout << fixed;
    cout.precision(2);

    cout << "Informe o valor inicial da aplica��o: ";
    cin >> (valorinicial);
    fflush(stdin);

    cout << "Informe a quantidade de meses da aplica��o: ";
    cin >> (meses);
    fflush(stdin);

    cout << "Informe o percentual de corre��o: ";
    cin >> (percentual);
    fflush(stdin);
    system("cls");

    cout << "\nM�s\tValor inicial\tRendimento\tValor Final\n";
    // \t = tab, espa�o, \n = quebra de linha
    //

    for (i = 1; i <= meses; i++)
    {
        rendimento = valorinicial * (percentual / 100.0);
        valorfinal = rendimento + valorinicial;

        cout << i << "\t" << valorinicial << "\t\t" << rendimento << "\t\t" << valorfinal << endl;

        valorinicial = valorfinal;
    }

}



