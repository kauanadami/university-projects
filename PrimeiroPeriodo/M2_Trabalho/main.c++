#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int dificuldade, escolha_menu, chances, numPC = 0, numPI = 0, resposta;
    int num1, num2, num3, num4, num5, numR1, numR2, numR3, numR4, numR5;
    string nome;

    system("color 0f"); //Utilizamos "color" afim de adicionar cor para as letras do programa.

    //Interface inicial do programa.

    cout <<"\t\t\t\t              ,---------------------------," << endl;
    cout <<"\t\t\t\t              |  /---------------------\\  |" << endl;
    cout <<"\t\t\t\t              | |                       | |" << endl;
    cout <<"\t\t\t\t              | |    MASTERMIND GAME    | |" << endl;
    cout <<"\t\t\t\t              | |                       | |" << endl;
    cout <<"\t\t\t\t              | |   DIGITE SUA GAMETAG  | |" << endl;
    cout <<"\t\t\t\t              | |                       | |" << endl;
    cout <<"\t\t\t\t              |  \\_____________________/  |" << endl;
    cout <<"\t\t\t\t              |___________________________|" << endl;
    cout <<"\t\t\t\t            ,---\\_____     []     _______/------," << endl;
    cout <<"\t\t\t\t          /         /______________\\           /|" << endl;
    cout <<"\t\t\t\t        /___________________________________ /  | ___" << endl;
    cout <<"\t\t\t\t        |                                   |   |    )" << endl;
    cout <<"\t\t\t\t        |  _ _ _                 [-------]  |   |   (" << endl;
    cout <<"\t\t\t\t        |  o o o                 [-------]  |  /    _)_" << endl;
    cout <<"\t\t\t\t        |__________________________________ |/     /  /" << endl;
    cout <<"\t\t\t\t    /-------------------------------------/|      ( )/" << endl;
    cout <<"\t\t\t\t  /-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /" << endl;
    cout <<"\t\t\t\t/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /" << endl;
    cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout << "\n\t\t\t\t\t\tGametag: "; //Variável para usuário digitar a Gametag que desejar.
    getline (cin, nome);

    system("cls");

    do {
        system("color 0f");

        numPC = 0;
        numPI = 0;

        //Menu do jogo, onde o  usuário poderá executar o que desejar.

        cout << "\n\t\t\t\t\t\t    Bem vindo, " << nome << "!" << endl;
        cout <<"\t\t\t\t    ________________________________________________" << endl;
        cout <<"\t\t\t\t   /                                                \\" << endl;
        cout <<"\t\t\t\t  |    _________________________________________     |" << endl;
        cout <<"\t\t\t\t  |   |                                         |    |" << endl;
        cout <<"\t\t\t\t  |   |          O QUE DESEJA EXECUTAR?         |    |" << endl;
        cout <<"\t\t\t\t  |   |                                         |    |" << endl;
        cout <<"\t\t\t\t  |   |                                         |    |" << endl;
        cout <<"\t\t\t\t  |   |              1 - JOGAR                  |    |" << endl;
        cout <<"\t\t\t\t  |   |                                         |    |" << endl;
        cout <<"\t\t\t\t  |   |              2 - DIFICULDADE            |    |" << endl;
        cout <<"\t\t\t\t  |   |                                         |    |" << endl;
        cout <<"\t\t\t\t  |   |              3 - SOBRE                  |    |" << endl;
        cout <<"\t\t\t\t  |   |                                         |    |" << endl;
        cout <<"\t\t\t\t  |   |              4 - SAIR                   |    |" << endl;
        cout <<"\t\t\t\t  |   |                                         |    |" << endl;
        cout <<"\t\t\t\t  |   |                                         |    |" << endl;
        cout <<"\t\t\t\t  |   |_________________________________________|    |" << endl;
        cout <<"\t\t\t\t  |                                                  |" << endl;
        cout <<"\t\t\t\t   \\_________________________________________________/" << endl;
        cout <<"\t\t\t\t          \\___________________________________/" << endl;

        cout << "\n\t\t\t\t\t\t     Executar: ";
        cin >> escolha_menu; //Variável para o usuário escolher as opções do menu.

        system("cls");

        switch (escolha_menu) {
        //Utilizamos a condicional "SWITCH" para o usuário escolher o local de destino.

        case 1:
            //Caso usuário digite 1, o jogo iniciará na dificuldade padrão (MÉDIO) e jogará o game.

            do {
                numR1 = rand()% 6 + 1; //O número aleatório será gerado a partir desse comando, em um intervalo entre
                numR2 = rand()% 6 + 1; //1 e 6, tendo o "6 + 1" para excluir a possibilidade de gerar um "0".
                numR3 = rand()% 6 + 1;
                numR4 = rand()% 6 + 1;
            } while (numR1 == numR2 || numR1 == numR3 || numR1 == numR4 ||
                     numR2 == numR3 || numR2 == numR4 || numR3 == numR4);
            //O loop para geração da sequência númerica será executado até que todas as variáveis sejam diferentes.

            chances = 10; //Valor incial das chances que o usuário terá para acertar os números.
            resposta = 1000;
            //Variável inicial para encaixar no tela do computador, que logo será substituída
            //pelo número que o usuário digitar.

            do {
                //Game inicia simulando a tela de um computador desenhado.

                cout << "\n\t\t\t\t\t\t      Chances: " << chances << endl;
                cout <<"\t\t\t\t    ________________________________________________" << endl;
                cout <<"\t\t\t\t   /                                                \\" << endl;
                cout <<"\t\t\t\t  |    _________________________________________     |" << endl;
                cout <<"\t\t\t\t  |   |                                         |    |" << endl;
                cout <<"\t\t\t\t  |   |           Sequencia digitada:           |    |" << endl;
                cout <<"\t\t\t\t  |   |                  "<<resposta<<"                   |    |" << endl;
                cout <<"\t\t\t\t  |   | ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |    |" << endl;
                cout <<"\t\t\t\t  |   |                                         |    |" << endl;
                cout <<"\t\t\t\t  |   |            Numeros acertados            |    |" << endl;
                cout <<"\t\t\t\t  |   |           na posicao correta:           |    |" << endl;
                cout <<"\t\t\t\t  |   |                "<<numPC<<" numeros                |    |" << endl;
                cout <<"\t\t\t\t  |   | ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |    |" << endl;
                cout <<"\t\t\t\t  |   |                                         |    |" << endl;
                cout <<"\t\t\t\t  |   |            Numeros acertados            |    |" << endl;
                cout <<"\t\t\t\t  |   |          na posicao incorreta:          |    |" << endl;
                cout <<"\t\t\t\t  |   |                "<<numPI<<" numeros                |    |" << endl;
                cout <<"\t\t\t\t  |   |_________________________________________|    |" << endl;
                cout <<"\t\t\t\t  |                                                  |" << endl;
                cout <<"\t\t\t\t   \\_________________________________________________/" << endl;
                cout <<"\t\t\t\t          \\___________________________________/" << endl << endl;

                //cout << "\t\t\t\t\t\t\t   " << numR1 << numR2 << numR3 << numR4 << endl;

                do {
                    cout << "\t\t\t\t      Digte uma sequencia numerica, entre 1 e 6: ";
                    cin >> resposta; //Variável para o usuário digitar a sequência que desejar.
                } while (resposta < 1000 || resposta > 9999);
                //Só saíra do loop quando o número digitador for maior que 1000 ou menor que 9999.

                numPC = 0; //Variável para contabilizar quantos acertos na posição correta teve.
                numPI = 0; //Variável para contabilizar quantos acertos na posição incorreta teve.

                num1 = resposta/1000;
                num2 = resposta/100%10;
                num3 = resposta/10%10;
                num4 = resposta%10;
                //Utilizamos a divisão e % para separar os números que o usuário digitar.

                chances--;
                //Chances sempre dimiui a cada volta.

                if (num1 == numR1 && num2 == numR2 && num3 == numR3 && num4 == numR4) {
                    numPC = 4;
                //if utilizado para caso usuário acertar os 4 digitos, saíra imeditamente do loop.
                    system("cls");

                    break;

                } else {
                    //Primeiro if irá contabilizar na variável "numPC" o número acertado na posição correta.
                    //Segundo if irá contabilizaar na variável "numPI" o número acertado na posição incorreta.
                    //e assim por diante.

                    if (num1 == numR1) {
                        numPC++;
                    } else {
                        if (num1 == numR2 || num1 == numR3 || num1 == numR4) {
                            numPI++;
                        }
                    }
                    if (num2 == numR2) {
                        numPC++;
                    } else {
                        if (num2 == numR1 || num2 == numR3 || num2 == numR4) {
                            numPI++;
                        }
                    }
                    if (num3 == numR3) {
                        numPC++;
                    } else {
                        if (num3 == numR1 || num3 == numR2 || num3 == numR4) {
                            numPI++;
                        }
                    }
                    if (num4 == numR4) {
                        numPC++;
                    } else {
                        if (num4 == numR1 || num4 == numR2 || num4 == numR3) {
                            numPI++;
                        }
                    }
                }

                system("cls");

            } while (numPC != 4 && chances != 0);
            //Só sairá do loop quando o numero de acertos for igual a quantidade de digitos e quando as
            //chances forem igual a 0.
            if (numPC == 4) {
                //Caso usuário ganhe, aparecerá a imagem abaixo alertando que ganhou,
                //e depois, encaminhará para o menu.
                system("color 0a");

                cout << "\n\t\t\t\t           Parabens pela VITORIA, " << nome << "!" << endl << endl;
                cout << "\t\t\t            Caso deseje jogar novamente, fique a vontade!" << endl << endl;
                cout <<"\t\t\t\t\t      _______________ " << endl;
                cout <<"\t\t\t\t\t     |  ___________  |     .-.     .-." << endl;
                cout <<"\t\t\t\t\t     | |           | |    .****. .****." << endl;
                cout <<"\t\t\t\t\t     | |   0   0   | |    .*****.*****." << endl;
                cout <<"\t\t\t\t\t     | |     -     | |     .*********." << endl;
                cout <<"\t\t\t\t\t     | |   \\___/   | |      .*******." << endl;
                cout <<"\t\t\t\t\t     | |___     ___| |       .*****." << endl;
                cout <<"\t\t\t\t\t     |_____|\\_/|_____|        .***." << endl;
                cout <<"\t\t\t\t\t       _|__|/ \\|_|_            .*." << endl;
                cout <<"\t\t\t\t\t      / ********** \\...."<< numR1 << numR2 << numR3 << numR4 <<"....." << endl;
                cout <<"\t\t\t\t\t    /  ************  \\" << endl;
                cout <<"\t\t\t\t\t   -------------------- " << endl << endl;

                system("pause");
                system("cls");

            } else {
                //Caso usuário perca, aparecerá a imagem abaixo alertando que perdeu,
                //e depois, encaminhará para o menu.
                system("color 04");

                cout << "\n\t\t\tInfelizmente, PERDESSE suas chances! A sequencia numerica correta era: " << endl << endl;
                cout << "\t\t\t\t\t\t      " << numR1 << numR2 << numR3 << numR4 << endl << endl;
                cout << "\t\t\t\t\t\tJOGUE NOVAMENTE!" << endl << endl;

                cout <<"\t\t\t\t                                     )" << endl;
                cout <<"\t\t\t\t                            )      ((     (" << endl;
                cout <<"\t\t\t\t                           (        ))     )" << endl;
                cout <<"\t\t\t\t                    )       )      //     (" << endl;
                cout <<"\t\t\t\t                _   (        __    (     ~->>" << endl;
                cout <<"\t\t\t\t         ,-----' |__,_~~___<'__`)-~__--__-~->> <" << endl;
                cout <<"\t\t\t\t         | //  : | -__   ~__ o)____)),__ - '> >-  >" << endl;
                cout <<"\t\t\t\t         | //  : |- \\_ \\ -\\_\\ -\\ \\ \\ ~\\_  \\ ->> - ,  >>" << endl;
                cout <<"\t\t\t\t         | //  : |_~_\\ -\\__\\ \\~'\\ \\ \\, \\__ . -<-  >>" << endl;
                cout <<"\t\t\t\t         `-----._| `  -__`-- - ~~ -- ` --~> >" << endl;
                cout <<"\t\t\t\t          _/___\\_    //)_`//  | ||]" << endl;
                cout <<"\t\t\t\t    _____[_______]_[~~-_ (.L_/  ||" << endl;
                cout <<"\t\t\t\t   [____________________]' `\\_,/'/" << endl;
                cout <<"\t\t\t\t     ||| /          |||  ,___,'./" << endl;
                cout <<"\t\t\t\t     ||| \\          |||,'______|" << endl;
                cout <<"\t\t\t\t     ||| /          /|| I==||" << endl;
                cout <<"\t\t\t\t     ||| \\       __/_||  __||__" << endl;
                cout <<"\t\t\t\t -----||-/------`-._/||-o--o---o---" << endl;
                cout <<"\t\t\t\t   ~~~~~'" << endl << endl;

                system("pause");
                system("cls");
            }

            break;

        case 2:
            //Caso usuário digite 2, aparecerá as opções de dificuldade para escolher.

            cout <<"\n" << endl;
            cout <<"\t\t\t\t    ________________________________________________" << endl;
            cout <<"\t\t\t\t   /                                                \\" << endl;
            cout <<"\t\t\t\t  |    _________________________________________     |" << endl;
            cout <<"\t\t\t\t  |   |                                         |    |" << endl;
            cout <<"\t\t\t\t  |   |                                         |    |" << endl;
            cout <<"\t\t\t\t  |   |               1-) Facil                 |    |" << endl;
            cout <<"\t\t\t\t  |   |     Acerte 3 digitos em 8 tentativas    |    |" << endl;
            cout <<"\t\t\t\t  |   | ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ |    |" << endl;
            cout <<"\t\t\t\t  |   |                                         |    |" << endl;
            cout <<"\t\t\t\t  |   |               2-) Medio                 |    |" << endl;
            cout <<"\t\t\t\t  |   |     Acerte 4 digitos em 10 tentativas   |    |" << endl;
            cout <<"\t\t\t\t  |   | ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ |    |" << endl;
            cout <<"\t\t\t\t  |   |                                         |    |" << endl;
            cout <<"\t\t\t\t  |   |               3-) Dificil               |    |" << endl;
            cout <<"\t\t\t\t  |   |     Acerte 5 digitos em 12 tentativas   |    |" << endl;
            cout <<"\t\t\t\t  |   |                                         |    |" << endl;
            cout <<"\t\t\t\t  |   |_________________________________________|    |" << endl;
            cout <<"\t\t\t\t  |                                                  |" << endl;
            cout <<"\t\t\t\t   \\_________________________________________________/" << endl;
            cout <<"\t\t\t\t          \\___________________________________/" << endl << endl;

            cout << "\t\t\t\t\t\tSelecione a dificuldade: ";
            cin >> dificuldade; //Variável para usuário selecionar a dificuldade.

            system("cls");

            if (dificuldade == 1) { //Condicional if/else para encaminhar o usuário na dificuldade que escolher.
                do {
                    numR1 = rand()% 6 + 1;
                    numR2 = rand()% 6 + 1;
                    numR3 = rand()% 6 + 1;
                } while (numR1 == numR2 || numR1 == numR3 || numR2 == numR3);

                chances = 8;
                resposta = 100;

                do {
                    cout << "\t\t\t\t\t     Dificuldade FACIL selecionada!";
                    cout << "\n\t\t\t\t\t\t      Chances: " << chances << endl;
                    cout <<"\t\t\t\t    ________________________________________________" << endl;
                    cout <<"\t\t\t\t   /                                                \\" << endl;
                    cout <<"\t\t\t\t  |    _________________________________________     |" << endl;
                    cout <<"\t\t\t\t  |   |                                         |    |" << endl;
                    cout <<"\t\t\t\t  |   |            Numero digitado:             |    |" << endl;
                    cout <<"\t\t\t\t  |   |                   "<<resposta<<"                   |    |" << endl;
                    cout <<"\t\t\t\t  |   | ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |    |" << endl;
                    cout <<"\t\t\t\t  |   |                                         |    |" << endl;
                    cout <<"\t\t\t\t  |   |            Numeros acertados            |    |" << endl;
                    cout <<"\t\t\t\t  |   |           na posicao correta:           |    |" << endl;
                    cout <<"\t\t\t\t  |   |                "<<numPC<<" numeros                |    |" << endl;
                    cout <<"\t\t\t\t  |   | ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |    |" << endl;
                    cout <<"\t\t\t\t  |   |                                         |    |" << endl;
                    cout <<"\t\t\t\t  |   |            Numeros acertados            |    |" << endl;
                    cout <<"\t\t\t\t  |   |          na posicao incorreta:          |    |" << endl;
                    cout <<"\t\t\t\t  |   |                "<<numPI<<" numeros                |    |" << endl;
                    cout <<"\t\t\t\t  |   |_________________________________________|    |" << endl;
                    cout <<"\t\t\t\t  |                                                  |" << endl;
                    cout <<"\t\t\t\t   \\_________________________________________________/" << endl;
                    cout <<"\t\t\t\t          \\___________________________________/" << endl << endl;

                    do {
                        cout << "\t\t\t\t      Digte uma sequencia numerica, entre 1 e 6: ";
                        cin >> resposta;
                    } while (resposta < 100 || resposta > 999);

                    numPC = 0;
                    numPI = 0;

                    num1 = resposta/100;
                    num2 = resposta/10%10;
                    num3 = resposta%10;

                    chances--;

                    if (num1 == numR1 && num2 == numR2 && num3 == numR3) {
                        numPC = 3;

                        system("cls");

                        break;

                    } else {
                        if (num1 == numR1) {
                            numPC++;
                        } else {
                            if (num1 == numR2 || num1 == numR3) {
                                numPI++;
                            }
                        }
                        if (num2 == numR2) {
                            numPC++;
                        } else {
                            if (num2 == numR1 || num2 == numR3) {
                                numPI++;
                            }
                        }
                        if (num3 == numR3) {
                            numPC++;
                        } else {
                            if (num3 == numR1 || num3 == numR2) {
                                numPI++;
                            }
                        }
                    }

                    system("cls");

                } while (numPC != 3 && chances != 0);

                if (numPC == 3) {
                    system("color 0a");

                    cout << "\n\t\t\t\t           Parabens pela VITORIA, " << nome << "!" << endl << endl;
                    cout << "\t\t\t            Caso deseje jogar novamente, fique a vontade!" << endl << endl;
                    cout <<"\t\t\t\t\t      _______________ " << endl;
                    cout <<"\t\t\t\t\t     |  ___________  |     .-.     .-." << endl;
                    cout <<"\t\t\t\t\t     | |           | |    .****. .****." << endl;
                    cout <<"\t\t\t\t\t     | |   0   0   | |    .*****.*****." << endl;
                    cout <<"\t\t\t\t\t     | |     -     | |     .*********." << endl;
                    cout <<"\t\t\t\t\t     | |   \\___/   | |      .*******." << endl;
                    cout <<"\t\t\t\t\t     | |___     ___| |       .*****." << endl;
                    cout <<"\t\t\t\t\t     |_____|\\_/|_____|        .***." << endl;
                    cout <<"\t\t\t\t\t       _|__|/ \\|_|_            .*." << endl;
                    cout <<"\t\t\t\t\t      / ********** \\....."<< numR1 << numR2 << numR3 << "....." << endl;
                    cout <<"\t\t\t\t\t    /  ************  \\" << endl;
                    cout <<"\t\t\t\t\t   -------------------- " << endl << endl;

                    system("pause");
                    system("cls");

                } else {
                    system("color 04");

                    cout << "\n\t\t\tInfelizmente, PERDESSE suas chances! A sequencia numerica correta era: " << endl << endl;
                    cout << "\t\t\t\t\t\t       " << numR1 << numR2 << numR3 << endl << endl;
                    cout << "\t\t\t\t\t\tJOGUE NOVAMENTE!" << endl << endl;

                    cout <<"\t\t\t\t                                     )" << endl;
                    cout <<"\t\t\t\t                            )      ((     (" << endl;
                    cout <<"\t\t\t\t                           (        ))     )" << endl;
                    cout <<"\t\t\t\t                    )       )      //     (" << endl;
                    cout <<"\t\t\t\t                _   (        __    (     ~->>" << endl;
                    cout <<"\t\t\t\t         ,-----' |__,_~~___<'__`)-~__--__-~->> <" << endl;
                    cout <<"\t\t\t\t         | //  : | -__   ~__ o)____)),__ - '> >-  >" << endl;
                    cout <<"\t\t\t\t         | //  : |- \\_ \\ -\\_\\ -\\ \\ \\ ~\\_  \\ ->> - ,  >>" << endl;
                    cout <<"\t\t\t\t         | //  : |_~_\\ -\\__\\ \\~'\\ \\ \\, \\__ . -<-  >>" << endl;
                    cout <<"\t\t\t\t         `-----._| `  -__`-- - ~~ -- ` --~> >" << endl;
                    cout <<"\t\t\t\t          _/___\\_    //)_`//  | ||]" << endl;
                    cout <<"\t\t\t\t    _____[_______]_[~~-_ (.L_/  ||" << endl;
                    cout <<"\t\t\t\t   [____________________]' `\\_,/'/" << endl;
                    cout <<"\t\t\t\t     ||| /          |||  ,___,'./" << endl;
                    cout <<"\t\t\t\t     ||| \\          |||,'______|" << endl;
                    cout <<"\t\t\t\t     ||| /          /|| I==||" << endl;
                    cout <<"\t\t\t\t     ||| \\       __/_||  __||__" << endl;
                    cout <<"\t\t\t\t -----||-/------`-._/||-o--o---o---" << endl;
                    cout <<"\t\t\t\t   ~~~~~'" << endl << endl;

                    system("pause");
                    system("cls");
                }
            } else {
                if (dificuldade == 2) {
                    do {
                        numR1 = rand()% 6 + 1;
                        numR2 = rand()% 6 + 1;
                        numR3 = rand()% 6 + 1;
                        numR4 = rand()% 6 + 1;
                    } while (numR1 == numR2 || numR1 == numR3 || numR1 == numR4 ||
                             numR2 == numR3 || numR2 == numR4 || numR3 == numR4);

                    chances = 10;

                    do {
                        cout << "\t\t\t\t\t     Dificuldade MEDIA selecionada!";
                        cout << "\n\t\t\t\t\t\t      Chances: " << chances << endl;
                        cout <<"\t\t\t\t    ________________________________________________" << endl;
                        cout <<"\t\t\t\t   /                                                \\" << endl;
                        cout <<"\t\t\t\t  |    _________________________________________     |" << endl;
                        cout <<"\t\t\t\t  |   |                                         |    |" << endl;
                        cout <<"\t\t\t\t  |   |            Numero digitado:             |    |" << endl;
                        cout <<"\t\t\t\t  |   |                  "<<resposta<<"                   |    |" << endl;
                        cout <<"\t\t\t\t  |   | ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |    |" << endl;
                        cout <<"\t\t\t\t  |   |                                         |    |" << endl;
                        cout <<"\t\t\t\t  |   |            Numeros acertados            |    |" << endl;
                        cout <<"\t\t\t\t  |   |           na posicao correta:           |    |" << endl;
                        cout <<"\t\t\t\t  |   |                "<<numPC<<" numeros                |    |" << endl;
                        cout <<"\t\t\t\t  |   | ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |    |" << endl;
                        cout <<"\t\t\t\t  |   |                                         |    |" << endl;
                        cout <<"\t\t\t\t  |   |            Numeros acertados            |    |" << endl;
                        cout <<"\t\t\t\t  |   |          na posicao incorreta:          |    |" << endl;
                        cout <<"\t\t\t\t  |   |                "<<numPI<<" numeros                |    |" << endl;
                        cout <<"\t\t\t\t  |   |_________________________________________|    |" << endl;
                        cout <<"\t\t\t\t  |                                                  |" << endl;
                        cout <<"\t\t\t\t   \\_________________________________________________/" << endl;
                        cout <<"\t\t\t\t          \\___________________________________/" << endl << endl;

                        do {
                            cout << "\t\t\t\t      Digte uma sequencia numerica, entre 1 e 6: ";
                            cin >> resposta;
                        } while (resposta < 1000 || resposta > 9999);

                        numPC = 0;
                        numPI = 0;
                        num1 = resposta/1000;
                        num2 = resposta/100%10;
                        num3 = resposta/10%10;
                        num4 = resposta%10;
                        chances--;

                        if (num1 == numR1 && num2 == numR2 && num3 == numR3 && num4 == numR4) {
                            numPC = 4;

                            system("cls");

                            break;

                        } else {
                            if (num1 == numR1) {
                                numPC++;
                            } else {
                                if (num1 == numR2 || num1 == numR3 || num1 == numR4) {
                                    numPI++;
                                }
                            }
                            if (num2 == numR2) {
                                numPC++;
                            } else {
                                if (num2 == numR1 || num2 == numR3 || num2 == numR4) {
                                    numPI++;
                                }
                            }
                            if (num3 == numR3) {
                                numPC++;
                            } else {
                                if (num3 == numR1 || num3 == numR2 || num3 == numR4) {
                                    numPI++;
                                }
                            }
                            if (num4 == numR4) {
                                numPC++;
                            } else {
                                if (num4 == numR1 || num4 == numR2 || num4 == numR3) {
                                    numPI++;
                                }
                            }
                        }

                        system("cls");

                    } while (numPC != 4 && chances != 0);

                    if (numPC == 4) {
                        system("color 0a");

                        cout << "\n\t\t\t\t           Parabens pela VITORIA, " << nome << "!" << endl << endl;
                        cout << "\t\t\t            Caso deseje jogar novamente, fique a vontade!" << endl << endl;
                        cout <<"\t\t\t\t\t      _______________ " << endl;
                        cout <<"\t\t\t\t\t     |  ___________  |     .-.     .-." << endl;
                        cout <<"\t\t\t\t\t     | |           | |    .****. .****." << endl;
                        cout <<"\t\t\t\t\t     | |   0   0   | |    .*****.*****." << endl;
                        cout <<"\t\t\t\t\t     | |     -     | |     .*********." << endl;
                        cout <<"\t\t\t\t\t     | |   \\___/   | |      .*******." << endl;
                        cout <<"\t\t\t\t\t     | |___     ___| |       .*****." << endl;
                        cout <<"\t\t\t\t\t     |_____|\\_/|_____|        .***." << endl;
                        cout <<"\t\t\t\t\t       _|__|/ \\|_|_            .*." << endl;
                        cout <<"\t\t\t\t\t      / ********** \\...."<< numR1 << numR2 << numR3 << numR4 <<"....." << endl;
                        cout <<"\t\t\t\t\t    /  ************  \\" << endl;
                        cout <<"\t\t\t\t\t   -------------------- " << endl << endl;

                        system("pause");
                        system("cls");

                    } else {
                        system("color 04");

                        cout << "\n\t\t\tInfelizmente, PERDESSE suas chances! A sequencia numerica correta era: " << endl << endl;
                        cout << "\t\t\t\t\t\t      " << numR1 << numR2 << numR3 << numR4 << endl << endl;
                        cout << "\t\t\t\t\t\tJOGUE NOVAMENTE!" << endl << endl;

                        cout <<"\t\t\t\t                                     )" << endl;
                        cout <<"\t\t\t\t                            )      ((     (" << endl;
                        cout <<"\t\t\t\t                           (        ))     )" << endl;
                        cout <<"\t\t\t\t                    )       )      //     (" << endl;
                        cout <<"\t\t\t\t                _   (        __    (     ~->>" << endl;
                        cout <<"\t\t\t\t         ,-----' |__,_~~___<'__`)-~__--__-~->> <" << endl;
                        cout <<"\t\t\t\t         | //  : | -__   ~__ o)____)),__ - '> >-  >" << endl;
                        cout <<"\t\t\t\t         | //  : |- \\_ \\ -\\_\\ -\\ \\ \\ ~\\_  \\ ->> - ,  >>" << endl;
                        cout <<"\t\t\t\t         | //  : |_~_\\ -\\__\\ \\~'\\ \\ \\, \\__ . -<-  >>" << endl;
                        cout <<"\t\t\t\t         `-----._| `  -__`-- - ~~ -- ` --~> >" << endl;
                        cout <<"\t\t\t\t          _/___\\_    //)_`//  | ||]" << endl;
                        cout <<"\t\t\t\t    _____[_______]_[~~-_ (.L_/  ||" << endl;
                        cout <<"\t\t\t\t   [____________________]' `\\_,/'/" << endl;
                        cout <<"\t\t\t\t     ||| /          |||  ,___,'./" << endl;
                        cout <<"\t\t\t\t     ||| \\          |||,'______|" << endl;
                        cout <<"\t\t\t\t     ||| /          /|| I==||" << endl;
                        cout <<"\t\t\t\t     ||| \\       __/_||  __||__" << endl;
                        cout <<"\t\t\t\t -----||-/------`-._/||-o--o---o---" << endl;
                        cout <<"\t\t\t\t   ~~~~~'" << endl << endl;

                        system("pause");
                        system("cls");
                    }
                } else {
                    if (dificuldade == 3) {
                        do {
                            numR1 = rand()% 6 + 1;
                            numR2 = rand()% 6 + 1;
                            numR3 = rand()% 6 + 1;
                            numR4 = rand()% 6 + 1;
                            numR5 = rand()% 6 + 1;
                        } while (numR1 == numR2 || numR1 == numR3 || numR1 == numR4 || numR1 == numR5 ||
                                 numR2 == numR3 || numR2 == numR4 || numR2 == numR5 ||numR3 == numR4 ||
                                 numR3 == numR5 || numR4 == numR5);

                        chances = 12;
                        resposta = 10000;

                        do {
                            cout << "\t\t\t\t\t    Dificuldade DIFICIL selecionada!";
                            cout << "\n\t\t\t\t\t\t      Chances: " << chances << endl;
                            cout <<"\t\t\t\t    ________________________________________________" << endl;
                            cout <<"\t\t\t\t   /                                                \\" << endl;
                            cout <<"\t\t\t\t  |    _________________________________________     |" << endl;
                            cout <<"\t\t\t\t  |   |                                         |    |" << endl;
                            cout <<"\t\t\t\t  |   |            Numero digitado:             |    |" << endl;
                            cout <<"\t\t\t\t  |   |                 "<<resposta<<"                   |    |" << endl;
                            cout <<"\t\t\t\t  |   | ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |    |" << endl;
                            cout <<"\t\t\t\t  |   |                                         |    |" << endl;
                            cout <<"\t\t\t\t  |   |            Numeros acertados            |    |" << endl;
                            cout <<"\t\t\t\t  |   |           na posicao correta:           |    |" << endl;
                            cout <<"\t\t\t\t  |   |                "<<numPC<<" numeros                |    |" << endl;
                            cout <<"\t\t\t\t  |   | ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  |    |" << endl;
                            cout <<"\t\t\t\t  |   |                                         |    |" << endl;
                            cout <<"\t\t\t\t  |   |            Numeros acertados            |    |" << endl;
                            cout <<"\t\t\t\t  |   |          na posicao incorreta:          |    |" << endl;
                            cout <<"\t\t\t\t  |   |                "<<numPI<<" numeros                |    |" << endl;
                            cout <<"\t\t\t\t  |   |_________________________________________|    |" << endl;
                            cout <<"\t\t\t\t  |                                                  |" << endl;
                            cout <<"\t\t\t\t   \\_________________________________________________/" << endl;
                            cout <<"\t\t\t\t          \\___________________________________/" << endl << endl;

                            do {
                                cout << "\t\t\t\t      Digte uma sequencia numerica, entre 1 e 6: ";
                                cin >> resposta;
                            } while (resposta < 10000 || resposta > 99999);

                            numPC = 0;
                            numPI = 0;
                            num1 = resposta/10000;
                            num2 = resposta/1000%10;
                            num3 = resposta/100%10;
                            num4 = resposta/10%10;
                            num5 = resposta%10;
                            chances--;

                            if (num1 == numR1 && num2 == numR2 && num3 == numR3 && num4 == numR4 && num5 == numR5) {
                                numPC = 5;

                                system("cls");

                                break;

                            } else {
                                if (num1 == numR1) {
                                    numPC++;
                                } else {
                                    if (num1 == numR2 || num1 == numR3 || num1 == numR4 || num1 == numR5) {
                                        numPI++;
                                    }
                                }
                                if (num2 == numR2) {
                                    numPC++;
                                } else {
                                    if (num2 == numR1 || num2 == numR3 || num2 == numR4 || num2 == numR5) {
                                        numPI++;
                                    }
                                }
                                if (num3 == numR3) {
                                    numPC++;
                                } else {
                                    if (num3 == numR1 || num3 == numR2 || num3 == numR4 || num3 == numR5) {
                                        numPI++;
                                    }
                                }
                                if (num4 == numR4) {
                                    numPC++;
                                } else {
                                    if (num4 == numR1 || num4 == numR2 || num4 == numR3 || num4 == numR5) {
                                        numPI++;
                                    }
                                }
                                if (num5 == numR5) {
                                    numPC++;
                                } else {
                                    if (num5 == numR1 || num5 == numR2 || num5 == numR3 || num5 == numR4) {
                                        numPI++;
                                    }
                                }
                            }

                            system("cls");

                        } while (numPC != 5 && chances != 0);

                        if (numPC == 5) {
                            system("color 0a");

                            cout << "\n\t\t\t\t           Parabens pela VITORIA, " << nome << "!" << endl << endl;
                            cout << "\t\t\t            Caso deseje jogar novamente, fique a vontade!" << endl << endl;
                            cout <<"\t\t\t\t\t      _______________ " << endl;
                            cout <<"\t\t\t\t\t     |  ___________  |     .-.     .-." << endl;
                            cout <<"\t\t\t\t\t     | |           | |    .****. .****." << endl;
                            cout <<"\t\t\t\t\t     | |   0   0   | |    .*****.*****." << endl;
                            cout <<"\t\t\t\t\t     | |     -     | |     .*********." << endl;
                            cout <<"\t\t\t\t\t     | |   \\___/   | |      .*******." << endl;
                            cout <<"\t\t\t\t\t     | |___     ___| |       .*****." << endl;
                            cout <<"\t\t\t\t\t     |_____|\\_/|_____|        .***." << endl;
                            cout <<"\t\t\t\t\t       _|__|/ \\|_|_            .*." << endl;
                            cout <<"\t\t\t\t\t      / ********** \\...."<< numR1 << numR2 << numR3 << numR4 << numR5 <<"...." << endl;
                            cout <<"\t\t\t\t\t    /  ************  \\" << endl;
                            cout <<"\t\t\t\t\t   -------------------- " << endl << endl;

                            system("pause");
                            system("cls");

                        } else {
                            system("color 04");

                            cout << "\n\t\t\tInfelizmente, PERDESSE suas chances! A sequencia numerica correta era: " << endl << endl;
                            cout << "\t\t\t\t\t\t     " << numR1 << numR2 << numR3 << numR4 << numR5 << endl << endl;
                            cout << "\t\t\t\t\t\tJOGUE NOVAMENTE!" << endl << endl;

                            cout <<"\t\t\t\t                                     )" << endl;
                            cout <<"\t\t\t\t                            )      ((     (" << endl;
                            cout <<"\t\t\t\t                           (        ))     )" << endl;
                            cout <<"\t\t\t\t                    )       )      //     (" << endl;
                            cout <<"\t\t\t\t                _   (        __    (     ~->>" << endl;
                            cout <<"\t\t\t\t         ,-----' |__,_~~___<'__`)-~__--__-~->> <" << endl;
                            cout <<"\t\t\t\t         | //  : | -__   ~__ o)____)),__ - '> >-  >" << endl;
                            cout <<"\t\t\t\t         | //  : |- \\_ \\ -\\_\\ -\\ \\ \\ ~\\_  \\ ->> - ,  >>" << endl;
                            cout <<"\t\t\t\t         | //  : |_~_\\ -\\__\\ \\~'\\ \\ \\, \\__ . -<-  >>" << endl;
                            cout <<"\t\t\t\t         `-----._| `  -__`-- - ~~ -- ` --~> >" << endl;
                            cout <<"\t\t\t\t          _/___\\_    //)_`//  | ||]" << endl;
                            cout <<"\t\t\t\t    _____[_______]_[~~-_ (.L_/  ||" << endl;
                            cout <<"\t\t\t\t   [____________________]' `\\_,/'/" << endl;
                            cout <<"\t\t\t\t     ||| /          |||  ,___,'./" << endl;
                            cout <<"\t\t\t\t     ||| \\          |||,'______|" << endl;
                            cout <<"\t\t\t\t     ||| /          /|| I==||" << endl;
                            cout <<"\t\t\t\t     ||| \\       __/_||  __||__" << endl;
                            cout <<"\t\t\t\t -----||-/------`-._/||-o--o---o---" << endl;
                            cout <<"\t\t\t\t   ~~~~~'" << endl << endl;

                            system("pause");
                            system("cls");
                        }
                    }
                }
            }
            break;

        case 3:
            //Caso usuário digite 3, irá aparecer os desenvolvedores do game, curso, professor da matéria e ano desenvolvido.
            system("color 0e");

            cout <<"\n\n\t\t\t\t    ________________________________________________" << endl;
            cout <<"\t\t\t\t   /                                                \\" << endl;
            cout <<"\t\t\t\t  |    _________________________________________     |" << endl;
            cout <<"\t\t\t\t  |   |                                         |    |" << endl;
            cout <<"\t\t\t\t  |   |    Jogo desenvolvido pelos estudantes   |    |" << endl;
            cout <<"\t\t\t\t  |   |     da UNIVALI, primeiro periodo do     |    |" << endl;
            cout <<"\t\t\t\t  |   |      curso Ciencias da Computacao.      |    |" << endl;
            cout <<"\t\t\t\t  |   |              Outubro/2022               |    |" << endl;
            cout <<"\t\t\t\t  |   | ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ |    |" << endl;
            cout <<"\t\t\t\t  |   |                Professor:               |    |" << endl;
            cout <<"\t\t\t\t  |   |          Eduardo Alves da Silva         |    |" << endl;
            cout <<"\t\t\t\t  |   |        (Algoritmos e Programacao)       |    |" << endl;
            cout <<"\t\t\t\t  |   |                                         |    |" << endl;
            cout <<"\t\t\t\t  |   |                 Alunos:                 |    |" << endl;
            cout <<"\t\t\t\t  |   |       Kauan Adami Guerreiro Chvaes      |    |" << endl;
            cout <<"\t\t\t\t  |   |      Luiz Henrique Lima De Oliveira     |    |" << endl;
            cout <<"\t\t\t\t  |   |_________________________________________|    |" << endl;
            cout <<"\t\t\t\t  |                                                  |" << endl;
            cout <<"\t\t\t\t   \\_________________________________________________/" << endl;
            cout <<"\t\t\t\t          \\___________________________________/" << endl << endl;

            system("pause");
            system("cls");

            break;

        case 4:
            //Caso usuário digite 4, saíra do game.
            system("color 0c");

            cout <<"\t\t\t\t              ,---------------------------," << endl;
            cout <<"\t\t\t\t              |  /---------------------\\  |" << endl;
            cout <<"\t\t\t\t              | |                       | |" << endl;
            cout <<"\t\t\t\t              | |    MASTERMIND GAME    | |" << endl;
            cout <<"\t\t\t\t              | |                       | |" << endl;
            cout <<"\t\t\t\t              | |   VOCE SAIU DO JOGO   | |" << endl;
            cout <<"\t\t\t\t              | |                       | |" << endl;
            cout <<"\t\t\t\t              |  \\_____________________/  |" << endl;
            cout <<"\t\t\t\t              |___________________________|" << endl;
            cout <<"\t\t\t\t            ,---\\_____     []     _______/------," << endl;
            cout <<"\t\t\t\t          /         /______________\\           /|" << endl;
            cout <<"\t\t\t\t        /___________________________________ /  | ___" << endl;
            cout <<"\t\t\t\t        |                                   |   |    )" << endl;
            cout <<"\t\t\t\t        |  _ _ _                 [-------]  |   |   (" << endl;
            cout <<"\t\t\t\t        |  o o o                 [-------]  |  /    _)_" << endl;
            cout <<"\t\t\t\t        |__________________________________ |/     /  /" << endl;
            cout <<"\t\t\t\t    /-------------------------------------/|      ( )/" << endl;
            cout <<"\t\t\t\t  /-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /" << endl;
            cout <<"\t\t\t\t/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/-/ /" << endl;
            cout <<"\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl << endl;

            break;

        }
    } while (escolha_menu != 4);

    return 0;
}
