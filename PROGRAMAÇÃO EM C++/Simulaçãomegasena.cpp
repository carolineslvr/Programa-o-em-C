#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<ctime>

using namespace std;

main()
{
	setlocale (LC_ALL , "Portuguese");

	int i, x, aux, vetor[6], vetor2[6], igual, cont = 0;

	srand(time(NULL));

	for (i = 0; i < 6; i++)
    {
        do{
            system("cls");
            cout << "Escolha o n�mero " << i + 1 << ": ";
            cin >> aux;
            fflush(stdin);

            if (aux < 1 or aux > 60)
               {
                   cout << "Valor inv�lido para aposta! Por favor, escolha outro n�mero.";
                   getchar();
               }
        }while (aux < 1 or aux > 60);

        if(i == 0)
        {
             vetor[i] = aux;

        } else
        {
            igual = 0;
            for (x = 0; x < i; x++)
            {
                if (vetor[x] == aux)
                {
                    igual++;
                    break;
                }
            }
            if (igual == 0)
            {
                vetor[i] = aux;

            } else
            {
                cout << "Aten��o! Valor j� registrado nessa aposta. Por favor, escolha outro n�mero!";
                getchar();
                i--;
            }
        }
    }

    system ("cls");

    cout << endl << endl << "Aposta realizada com sucesso! ";

     cout << "N�meros escolhidos: " << endl;

     for (i = 0; i < 6; i++)
     {
         cout << vetor[i] << ", ";
     }

     for (i = 0; i < 6; i++)
     {
         aux = rand () % 60 + 1;

         if(i == 0)
         {
             vetor2[i] = aux;
         } else
         {
             igual = 0;

             for (x = 0; x < i; x++)
             {
                 if (vetor2[x] == aux)
                 {
                     igual ++;
                     break;
                 }
             }
             if (igual == 0)
             {
                 vetor2[i] = aux;
             } else
             {
                 i--;
             }
         }
     }

     cout  << endl << endl << "N�meros sorteados: " << endl;

     for (i = 0; i < 6; i++)
     {
         cout << vetor2[i] << ", ";
     }

     for (i = 0; i < 6; i++)
     {
         for (x = 0; x < 6; x++)
         {
             if (vetor[i] == vetor2[x])
                cont++;
         }
     }

     if (cont < 4)
     {
         cout << endl << endl << "Voc� n�o ganhou nada!";

     } else if (cont == 4)
     {
         cout << endl << endl << "Voc� acertou a quadra!";

     } else if (cont == 5)
     {
         cout << endl << endl << "Voc� acertou a quina!";

     } else if (cont == 6)
     {
         cout << endl << endl << "Voc� est� milion�rio!";
     }

    }


