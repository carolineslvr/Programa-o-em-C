#include<iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;

main()
{
	setlocale (LC_ALL , "Portuguese");

	int gint, ggre, cont = 0, soma = 0, percentual, vint = 0, vgre = 0, empate = 0;
	char flag;

	do
    {
        cout << "Informe o n�mero de gols do Inter no grenal: ";
        cin >> gint;

        cout << "Informe o n�mero de gols do Gr�mio no grenal: ";
        cin >> ggre;

        if (gint > ggre)
        {
            vint++;
        } else if (ggre > gint)
        {
            vgre++;
        } else if (gint == ggre)
        {
            empate++;
        }

        cout << "Novo grenal? (S-sim N-nao)";
        cin >> menu;
        fflush(stdin);

        cont++;

    } while ((flag == 'S') or (flag == 's'));

    if ((flag == 'N') or (flag == 'n'))
        {
            system("cls");
            cout << "N�mero de grenais contados na estat�stica: " << cont << endl;
            cout << "N�mero de v�t�rias do Inter: " << vint << endl;
            cout << "Porcentagem de vit�rias do gr�mio: " << (((float)vgre / (float)cont) * 100.00) << "%" << endl;
            cout << "N�mero de empates: " << empate << endl;
            cout << "M�dia de gols por partida: " << (gint + ggre) / 2.00 << endl;
        }
        else cout << "Comando inv�lido.";

}
