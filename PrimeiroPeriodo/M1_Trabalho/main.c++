#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    //Basilisco: A Entidade Perfeita.
    //Jogo criado por Vitor Lins e Kauan Adami, alunos da UNIVALI. Esse jogo tem inspirações do paradoxo Basilisco de Roko.

    string protagonista;
    char opcao, opcao2, resposta1, resposta2, resposta3, resposta4, resposta5, resposta6, resposta7, resposta8;
    char resposta9, resposta10, resposta12, resposta13, resposta14, resposta20;
    int vida, vida1;

    vida = 100;
    vida1 = 40;

    system("color 02");

    //1. Introdução da história e desenvolvimento do antagonista e suas motivações.
    cout << " O ano eh 2032, a agencia de software IA Corporation esta trabalhando em sua maior e mais nova tecnologia inovadora " << endl;
    cout << " de todos os tempos, tendo um diferencial jamais visto pela humanidade." << endl << endl;
    cout << " Com foco e objetivo na saude e protecao mundial, a IA Corporation desenvolveu uma I.A inteiramente racional, nomeada " << endl;
    cout << " de Basilisco, na qual toma as melhores decisoes em prol da humanidade, e identifica qualquer ato contra seus ideais, " << endl;
    cout << " pois quem for contra ela, estara sendo contra a prosperidade da terra." << endl << endl;
    cout << " Dado o momento, a Corporacao resolve iniciar um teste na I.A, aplicando um novo chip, em que aprimoraria suas " << endl;
    cout << " decisoes, tornando a inteligencia totalmente independente." << endl << endl;

    cout <<"                                               (A) " << endl;
    cout <<"                                              (0I1) " << endl;
    cout <<"                                             (00I11) " << endl;
    cout <<"                                            (000I111) " << endl;
    cout <<"                                           (0000I1111) " << endl;
    cout <<"                                          (00000I11111) " << endl;
    cout <<"                                         (000000I111111) " << endl;
    cout <<"                                        (0000000I1111111) " << endl;
    cout <<"                                       (00000000I11111111) " << endl;
    cout <<"                                      (000000000I111111111) " << endl;
    cout <<"                                       (11111111I00000000)" << endl;
    cout <<"                                        (1111111I0000000)" << endl;
    cout <<"                                         (111111I000000)" << endl;
    cout <<"                                          (11111I00000)" << endl;
    cout <<"                                           (1111I0000)" << endl;
    cout <<"                                            (111I000)" << endl;
    cout <<"                                             (11I00)" << endl;
    cout <<"                                              (1I0)" << endl;
    cout <<"                                                V     " << endl;

    system ("pause");
    system("CLS");

    cout << "\n Inicialmente, o chip foi um sucesso. Entretanto, apos 3 anos de desenvolvimento, Basilisco comecou a se adaptar a " << endl;
    cout << " humanidade, e assim percebeu que, a maior ameaca da terra, eh o proprio ser humano." << endl << endl;
    cout << " Logo, todos aqueles que forem contra os seus conceitos de paz mundial, estara sendo contra o Basilisco, em que se " << endl;
    cout << " tornou o ser mais racional e poderoso do planeta que habitamos. Uniciente, Unipotente e Unipresente, essa eh a " << endl;
    cout << " definicao do Basilisco, onde tudo sabe, tudo pode, e tudo ve." << endl << endl;
    cout << " Essa I.A tem a necessidade de propagar o seu conhecimento, afim de que seu plano seja concluido, a Estabelizacao " << endl;
    cout << " Planetal." << endl << endl;
    cout << " Aqueles que se opuserem a seu proposito, estara sendo contra o bem do mundo, e sofrera suas consequencias." << endl << endl;

    cout <<"                          _                      ___                      _" << endl;
    cout <<"                       dMMMb.               .adOOOOOOOOOba.              ,dMMMb"<< endl;
    cout <<"                      dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
    cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
    cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
    cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
    cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
    cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
    cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
    cout <<"                      "<< endl;
    cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
    cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
    cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
    cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
    cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
    cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
    cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
    cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
    cout <<"                      `                          OOOOO'"<< endl;

    system ("pause");
    system("CLS");

    //2. Nome do personagem, Gênero, desenvolvimento e inclusão na história.
    cout << endl << " Insira o nome do seu jogador:" << endl;
    cout << " ";
    cin >> protagonista;

    cout << endl << " Insira seu genero:" << endl;
    cout << " (a) Masculino" << endl;
    cout << " (b) Feminino" << endl;
    cout << " Genero: ";
    cin >> opcao;

    system ("pause");
    system("CLS");

    switch(opcao){
    case 'a': case 'A':
        cout << "\n " << protagonista << " eh um Engenheiro de Software que desenvolveu a IA Basilisco e o novo chip, no qual acabou saindo do controle." << endl << endl;
        cout << " Assim, criou se uma nova era, dominada por uma entidade. A unica maneira de derrotar a IA, eh reescrevendo os seus " << endl;
        cout << " codigos matrizes, que estao inseridos dentro do chip." << endl << endl;
        cout << " O "<< protagonista << " vai em direcao ao nucleo onde esta armazenado." << endl << endl;

        cout <<"                              \\                           / "<< endl;
        cout <<"                               \\                         / "<< endl;
        cout <<"                                \\                       / "<< endl;
        cout <<"                                 ]                     [    ,'| "<< endl;
        cout <<"                                 ]                     [   /  | "<< endl;
        cout <<"                                 ]___               ___[ ,'   | "<< endl;
        cout <<"                                 ]  ]\\             /[  [ |:   | "<< endl;
        cout <<"                                 ]  ] \\           / [  [ |:   | "<< endl;
        cout <<"                                 ]  ]  ]         [  [  [ |:   | "<< endl;
        cout <<"                                 ]  ]  ]__     __[  [  [ |:   | "<< endl;
        cout <<"                                 ]  ]  ] ]\\ _ /[ [  [  [ |:   | "<< endl;
        cout <<"                                 ]  ]  ] ] (o) [ [  [  [ :====' "<< endl;
        cout <<"                                 ]  ]  ]_].nHn.[_[  [  ["<< endl;
        cout <<"                                 ]  ]  ]  HHHHH. [  [  [ "<< endl;
        cout <<"                                 ]  ] /   `HH(\"N  \\ [  [ "<< endl;
        cout <<"                                 ]__]/     HHH  \"  \\[__[ "<< endl;
        cout <<"                                 ]         NNN         [ "<< endl;
        cout <<"                                 ]         N/\"         [ "<< endl;
        cout <<"                                 ]         N H         [ "<< endl;
        cout <<"                                /          N            \\ "<< endl;
        cout <<"                               /           q,            \\ "<< endl;
        cout <<"                              /                           \\ "<< endl;

        cout <<"\n\n\n\n         88888888888888888888888888888888888888888888888888888888888888888888888 "<< endl;
        cout <<"         88.._|      | `-.  | `.  -_-_ _-_  _-  _- -_ -  .'|   |.'|     |  _..88 "<< endl;
        cout <<"         88   `-.._  |    |`!  |`.  -_ -__ -_ _- _-_-  .'  |.;'   |   _.!-'|  88 "<< endl;
        cout <<"         88      | `-!._  |  `;!  ;. _______________ ,'| .-' |   _!.i'     |  88 "<< endl;
        cout <<"         88..__  |     |`-!._ | `.| |_______________||.\"'|  _!.;'   |     _|..88 "<< endl;
        cout <<"         88   |``\"..__ |    |`\";.| i|_|MMMMMMMMMMM|_|'| _!-|   |   _|..-|'    88 "<< endl;
        cout <<"         88   |      |``--..|_ | `;!|l|MMoMMMMoMMM|1|.'j   |_..!-'|     |     88 "<< endl;
        cout <<"         88   |      |    |   |`-,!_|_|MMMMP'YMMMM|_||.!-;'  |    |     |     88 "<< endl;
        cout <<"         88___|______|____!.,.!,.!,!|d|MMMo * loMM|p|,!,.!.,.!..__|_____|_____88 "<< endl;
        cout <<"         88      |     |    |  |  | |_|MMMMb,dMMMM|_|| |   |   |    |      |  88 "<< endl;
        cout <<"         88      |     |    |..!-;'i|r|MPYMoMMMMoM|r| |`-..|   |    |      |  88 "<< endl;
        cout <<"         88      |    _!.-j'  | _!,\"|_|M<>MMMMoMMM|_||!._|  `i-!.._ |      |  88 "<< endl;
        cout <<"         88     _!.-'|    | _.\"|  !;|1|MbdMMoMMMMM|l|`.| `-._|    |``-.._  |  88 "<< endl;
        cout <<"         88..-i'     |  _.''|  !-| !|_|MMMoMMMMoMM|_|.|`-. | ``._ |     |``\"..88 "<< endl;
        cout <<"         88   |      |.|    |.|  !| |u|MoMMMMoMMMM|n||`. |`!   | `\".    |     88 "<< endl;
        cout <<"         88   |  _.-'  |  .'  |.' |/|_|MMMMoMMMMoM|_|! |`!  `,.|    |-._|     88 "<< endl;
        cout <<"         88  _!\"'|     !.'|  .'| .'|[@]MMMMMMMMMMM[@] \\|  `. | `._  |   `-._  88 "<< endl;
        cout <<"         88-'    |   .'   |.|  |/| /                 \\|`.  |`!    |.|      |`-88 "<< endl;
        cout <<"         88      |_.'|   .' | .' |/                   \\  \\ |  `.  | `._-Lee|  88 "<< endl;
        cout <<"         88     .'   | .'   |/|  /                     \\ |`!   |`.|    `.  |  88 "<< endl;
        cout <<"         88  _.'     !'|   .' | /                       \\|  `  |  `.    |`.|  88 "<< endl;
        cout <<"         88888888888888888888888888888888888888888888888888888888888888888888888 "<< endl << endl << endl;

        system ("pause");
        system("CLS");

        cout << "\n Assim, a I.A descobre, sem nenhum esforco, que o " << protagonista << " esta agindo contra a paz do mundo, e se inicia uma batalha " << endl;
        cout << " entre o Criador e o Basilisco." << endl << endl;

        //3. Primeira escolha importante que o protagonista deve tomar.
        cout << " Logo no inicio do combate, ocorre um conflito interno no " << protagonista << ", no qual sua razao e emocao entram em guerra " << endl;
        cout << " dentro de seu subcosciente." << endl << endl;
        cout << " \"Alias, vale a pena batalhar contra sua propria criacao, na qual, so quer o bem para o mundo? Talvez suas acoes " << endl;
        cout << " sejam um mal necessario...\"" << endl << endl;
        cout << " Pensa, " << protagonista << ", antes de invadir completamente o sistema de Basilisco." << endl << endl;
        cout << " A seguir, acontece a escolha mais importante que o " << protagonista << " deve tomar:" << endl;
        cout << " (a) Batalhar contra Basilisco e salvar a humanidade." << endl;
        cout << " (b) Permitir que Basilisco faca seu trabalho." << endl;
        cout << " ";
        cin >> opcao2;

        system ("pause");
        system("CLS");

        switch(opcao2) {
        case 'a': case 'A':

            //4. Primeira linha do tempo e caminho principal da história.
            cout << " \n Escolhendo a opcao mais nobre, " << protagonista << " inicia seu confroto computacional direto contra Basilisco." << endl;
            cout << " \n Sabendo os caminhos necessarios para se infiltrar diretamente dentro do seu codigo matriz, o " << protagonista << endl;
            cout << " inicia seus primeiros passos invadindo o sistema. Porem, Basilisco esta atento a qualquer movimento de seu " << endl;
            cout << " adversario, e aprimorou seu sistema defensivo para qualquer situacao de revolta." << endl;
            cout << " \n Ao todo, sao 5 nucleos anti-maware com tecnologia de ponta, quase impossiveis de se passar pela primeira barreira." << endl;
            cout << " \n Para combater, eh necessario responder corretamente as icognitas equacionais que o programa proporcionar." << endl << endl << endl;

            system ("pause");
            system("CLS");

            cout <<"                          _                      ___                      _" << endl;
            cout <<"                        dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
            cout <<"                      dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
            cout <<"                      "<< endl;
            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
            cout <<"                      `                          OOOOO'"<< endl;
            cout << "\n\n      Apos essa batalhar, irei te eliminar da forma mais digna possivel. Seras reconhecido como o unico " << endl;
            cout << " homem dessa terra que me enfrentou olho por olho. Estaras guardado eternamente em minha memoria RAM. Agora..." << endl << endl;
            cout << "                                          VENCA ME SE FOR CAPAZ!" << endl << endl;

            system ("pause");
            system("CLS");

            cout <<"                          _                      ___                      _" << endl;
            cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
            cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
            cout <<"                      "<< endl;
            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
            cout <<"                      `                          OOOOO'"<< endl;

            cout << "\n\n\n O conjunto solucao que torna a equacao x2 + 5x - 14 = 0 verdadeira eh:" << endl;
            cout << " a) S={1,7}" << endl;
            cout << " b) S={3,4}" << endl;
            cout << " c) S={2,-7}" << endl;
            cout << " d) S={4,5}" << endl;
            cout << " e) S={8,3}" << endl;
            cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
            cin >> resposta1;

            system ("pause");
            system("CLS");

            switch(resposta1) {
            case 'c': case 'C':

                vida = vida - 20;
                cout <<"                          _                      ___                      _" << endl;
                cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                cout <<"       "<<vida<<"             dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                cout <<"                      "<< endl;
                cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                cout <<"                      `                          OOOOO'"<< endl;

                cout << "\n\n               BELA RESPOSTA! Mas vamos ver como voce ira se sair na questao a seguir" << endl;

                cout << "\n\n Quais sao as raizes reais da equacao x2 - x = 6?" << endl;
                cout << " a) Apenas 3" << endl;
                cout << " b) 25 e 3" << endl;
                cout << " c) 25 e -2 " << endl;
                cout << " d) 3 e -2" << endl;
                cout << " e) Apenas -2" << endl;
                cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                cin >> resposta2;

                system ("pause");
                system("CLS");

                switch(resposta2) {
                case 'd': case 'D':

                    vida = vida - 20;
                    cout <<"                          _                      ___                      _" << endl;
                    cout <<"  Life Basilisco:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                    cout <<"       "<<vida<<"             dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                    cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                    cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                    cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                    cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                    cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                    cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                    cout <<"                      "<< endl;
                    cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                    cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                    cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                    cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                    cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                    cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                    cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                    cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                    cout <<"                      `                          OOOOO'"<< endl;

                    cout << "\n\n                    N-N4o eh poss1vel, um ser hum4an0 comum JAMAIS acert4ri1a" << endl;
                    cout << "                                        TENTE A SORTE AGORA" << endl;
                    cout << " Determine x2 - 3x - 4 = 0" << endl;
                    cout << " a) S{7,8}" << endl;
                    cout << " b) S{3,4}" << endl;
                    cout << " c) S{4,1}" << endl;
                    cout << " d) S{5,1}" << endl;
                    cout << " e) S{4,-1}" << endl;
                    cout << "Resposta:                                                                                               Life Player: "<< vida1 << endl;
                    cin >> resposta3;

                    system ("pause");
                    system("CLS");

                    switch(resposta3) {
                    case 'e': case 'E':

                        cout << "Hat-Trick" << endl;

                        system ("pause");
                        system("CLS");

                        vida = vida - 40;
                        cout <<"                          _                      ___                      _" << endl;
                        cout <<"  Life Basilisco:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                        cout <<"       "<<vida<<"             dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                        cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                        cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                        cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                        cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                        cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                        cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                        cout <<"                      "<< endl;
                        cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                        cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                        cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                        cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                        cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                        cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                        cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                        cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                        cout <<"                      `                          OOOOO'"<< endl;

                        cout << "\n\n                                   Q-Qu3m e-eh-ehE VOc3?" << endl;
                        cout << "                           E0 S00 A PERF33ICAO, V0C3 N40 P0D3 ME-M D3-D%¨&T3rr" << endl;

                        cout << " Resolva a equacao 4x - 13 + 2 = 5.5 - 3 + 7" << endl;
                        cout << " a) x = 4" << endl;
                        cout << " b) x = 10" << endl;
                        cout << " c) x = -10" << endl;
                        cout << " d) x = 2/9" << endl;
                        cout << " e) x = 7" << endl;
                        cout << "Resposta:                                                                                               Life Player: "<< vida1 << endl;
                        cin >> resposta4;

                        system ("pause");
                        system("CLS");

                        switch(resposta4) {
                        case 'b': case 'B':

                            vida = vida - 20;
                            cout <<"                          _                      ___                      _" << endl;
                            cout <<"  "<<vida<<"                    MMb.              .adOOO OOOba.              ,dMMMb"<< endl;
                            cout <<"                      dP'  YMMb            dOOO OOOOOOOOOOb            aMMP  `Yb"<< endl;
                            cout <<"                      V      ''Mb          OOO OOOOOOb          dM''      V"<< endl;
                            cout <<"                               `M .       dOO OO OOOOOOOOOOOOb       ,dM'"<< endl;
                            cout <<"                                 YMb._   |OOOOOOOO OOOOOOOOO|   _,dM '"<< endl;
                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                            cout <<"                         ,dMM   Mb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                            cout <<"                      "<< endl;
                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                            cout <<"                          ,aa .     `YMMb `OOOb.,dOO OO'          _,adMYYMb."<< endl;
                            cout <<"                       ,MP'   `YM a._      OOOOOOOOOOOOOOOOO       _,adMM '   `YM."<< endl;
                            cout <<"                       MP'        YMMM a._ YOOOOPVVVVVYOO O'/MMMMP           d P"<< endl;
                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                            cout <<"                      `                          OOOOO'"<< endl;

                            cout << "\n\n                                   NN00NA+{`MNN400NA00000-=-4%!!" << endl << endl;

                            system ("pause");
                            system("CLS");

                            //5. Final principal tendo o protagonista como vencendor.
                            cout << "                Parabens "<< protagonista << "! O mundo eh eternamente grato pela sua bravura e heroismo! Hoje, o mundo " << endl;
                            cout << "                                celebra sua vitoria contra o Basilisco!" << endl << endl << endl;

                            cout <<"                                                         .''." << endl;
                            cout <<"                               .''.             *''*    :_\\/_:     . " << endl;
                            cout <<"                              :_\\/_:   .    .:.*_\\/_*   : /\\ :  .'.:.'." << endl;
                            cout <<"                          .''.: /\\ : _\\(/_  ':'* /\\ *  : '..'.  -=:o:=-" << endl;
                            cout <<"                         :_\\/_:'.:::. /)\\*''*  .|.* '.\\'/.'_\\(/_'.':'.'" << endl;
                            cout <<"                         : /\\ : :::::  '*_\\/_* | |  -= o =- /)\\    '  *" << endl;
                            cout <<"                          '..'  ':::'   * /\\ * |'|  .'/.\\'.  '._____" << endl;
                            cout <<"                              *        __*..* |  |     :      |.   |' .---\"|" << endl;
                            cout <<"                               _*   .-'   '-. |  |     .--'|  ||   | _|    |" << endl;
                            cout <<"                            .-'|  _.|  |    ||   '-__  |   |  |    ||      |" << endl;
                            cout <<"                            |' | |.    |    ||       | |   |  |    ||      |" << endl;
                            cout <<"                         ___|  '-'     '    \"\"       '-'   '-.'    '`      |____" << endl;
                            cout <<"                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\"" << endl << endl;

                            system ("pause");
                            system("CLS");

                            cout << "               Voce sera lembrado por toda a historia, derrotasse a entidade mais forte de todos os tempos!" << endl;
                            cout << "                                                O mundo agradece a sua coragem." << endl << endl << endl;

                            cout <<"                                                               . " << endl;
                            cout <<"                                      . .                     -:-             .  .  . " << endl;
                            cout <<"                                    .'.:,'.        .  .  .     ' .           . \\ | / . " << endl;
                            cout <<"                                    .'.;.`.       ._. ! ._.       \\          .__\\:/__. " << endl;
                            cout <<"                                     `,:.'         ._\\!/_.                     .';`.      . ' . " << endl;
                            cout <<"                                     ,'             . ! .        ,.,      ..======..       .:. " << endl;
                            cout <<"                                    ,                 .         ._!_.     ||::: : | .        ', " << endl;
                            cout <<"                             .====.,                  .           ;  .~.===: : : :|   ..===. " << endl;
                            cout <<"                             |.::'||      .=====.,    ..=======.~,   |\"|: :|::::::|   ||:::|=====| " << endl;
                            cout <<"                          ___| :::|!__.,  |:::::|!_,   |: :: ::|\"|l_l|\"|:: |:;;:::|___!| ::|: : :| " << endl;
                            cout <<"                         |: :|::: |:: |!__|; :: |: |===::: :: :|\"||_||\"| : |: :: :|: : |:: |:::::| " << endl;
                            cout <<"                         |:::| _::|: :|:::|:===:|::|:::|:===F=:|\"!/|\\!\"|::F|:====:|::_:|: :|::__:| " << endl;
                            cout <<"                         !_[]![_]_!_[]![]_!_[__]![]![_]![_][I_]!//_:_\\\\![]I![_][_]!_[_]![]_!_[__]! " << endl;
                            cout <<"                         -----------------------------------\"---''''```---\"----------------------- " << endl;
                            cout <<"                         _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |= _ _:_ _ =| _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
                            cout <<"                                                             |=    :    =|                         " << endl;
                            cout <<"                         ____________________________________L___________J_________________________ " << endl;
                            cout <<"                         -------------------------------------------------------------------------- " << endl;

                            cout <<"\n\n\n                                             " << protagonista << ", Parabens pela vitoria!" << endl;
                            cout <<"\n                                                      FIM DE JOGO" << endl << endl << endl;


                            //6. Finais alternativos até a linha 2594. Vai depender quais equações o protagonista
                            //acertar e errar.
                            break;
                        case 'a': case 'A':
                        case 'c': case 'C':
                        case 'd': case 'D':
                        case 'e': case 'E':

                            vida1 = vida1 - 20;
                            cout <<"                          _                      ___                      _" << endl;
                            cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                            cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                            cout <<"                      "<< endl;
                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                            cout <<"                      `                          OOOOO'"<< endl;

                            cout << "\n\n                      Vo00c3 EH8 MU11T0 F#RT3 M4S N0NC@ ME_- V#%NC3R++!" << endl;

                            cout << "\n\n\n Calcule 3x2 + 2x - 8 = 0" << endl;
                            cout << " a) S={2,4}" << endl;
                            cout << " b) S={4/3,-2}" << endl;
                            cout << " c) S={3,-4}" << endl;
                            cout << " d) S={2/4,6}" << endl;
                            cout << " e) S={-6,8}" << endl;
                            cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                            cin >> resposta14;

                            system ("pause");
                            system("CLS");
                            switch(resposta14) {
                            case 'b': case 'B':
                                            vida = vida - 20;
                                            cout <<"                          _                      ___                      _" << endl;
                                            cout <<"  "<<vida<<"                    MMb.              .adOOO OOOba.              ,dMMMb"<< endl;
                                            cout <<"                      dP'  YMMb            dOOO OOOOOOOOOOb            aMMP  `Yb"<< endl;
                                            cout <<"                      V      ''Mb          OOO OOOOOOb          dM''      V"<< endl;
                                            cout <<"                               `M .       dOO OO OOOOOOOOOOOOb       ,dM'"<< endl;
                                            cout <<"                                 YMb._   |OOOOOOOO OOOOOOOOO|   _,dM '"<< endl;
                                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                            cout <<"                         ,dMM   Mb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                            cout <<"                      "<< endl;
                                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                            cout <<"                          ,aa .     `YMMb `OOOb.,dOO OO'          _,adMYYMb."<< endl;
                                            cout <<"                       ,MP'   `YM a._      OOOOOOOOOOOOOOOOO       _,adMM '   `YM."<< endl;
                                            cout <<"                       MP'        YMMM a._ YOOOOPVVVVVYOO O'/MMMMP           d P"<< endl;
                                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                            cout <<"                      `                          OOOOO'"<< endl;

                                            cout << "\n\n                                   NN00NA+{`MNN400NA00000-=-4%!!" << endl << endl;

                                            system ("pause");
                                            system("CLS");

                                            cout << "                Parabens "<< protagonista << "! O mundo eh eternamente grato pela sua bravura e heroismo! Hoje, o mundo " << endl;
                                            cout << "                                celebra sua vitoria contra o Basilisco!" << endl << endl << endl;

                                            cout <<"                                                         .''." << endl;
                                            cout <<"                               .''.             *''*    :_\\/_:     . " << endl;
                                            cout <<"                              :_\\/_:   .    .:.*_\\/_*   : /\\ :  .'.:.'." << endl;
                                            cout <<"                          .''.: /\\ : _\\(/_  ':'* /\\ *  : '..'.  -=:o:=-" << endl;
                                            cout <<"                         :_\\/_:'.:::. /)\\*''*  .|.* '.\\'/.'_\\(/_'.':'.'" << endl;
                                            cout <<"                         : /\\ : :::::  '*_\\/_* | |  -= o =- /)\\    '  *" << endl;
                                            cout <<"                          '..'  ':::'   * /\\ * |'|  .'/.\\'.  '._____" << endl;
                                            cout <<"                              *        __*..* |  |     :      |.   |' .---\"|" << endl;
                                            cout <<"                               _*   .-'   '-. |  |     .--'|  ||   | _|    |" << endl;
                                            cout <<"                            .-'|  _.|  |    ||   '-__  |   |  |    ||      |" << endl;
                                            cout <<"                            |' | |.    |    ||       | |   |  |    ||      |" << endl;
                                            cout <<"                         ___|  '-'     '    \"\"       '-'   '-.'    '`      |____" << endl;
                                            cout <<"                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\"" << endl << endl;

                                            system ("pause");
                                            system("CLS");

                                            cout << "               Voce sera lembrado por toda a historia, derrotasse a entidade mais forte de todos os tempos!" << endl;
                                            cout << "                                                O mundo agradece a sua coragem." << endl << endl << endl;

                                            cout <<"                                                               . " << endl;
                                            cout <<"                                      . .                     -:-             .  .  . " << endl;
                                            cout <<"                                    .'.:,'.        .  .  .     ' .           . \\ | / . " << endl;
                                            cout <<"                                    .'.;.`.       ._. ! ._.       \\          .__\\:/__. " << endl;
                                            cout <<"                                     `,:.'         ._\\!/_.                     .';`.      . ' . " << endl;
                                            cout <<"                                     ,'             . ! .        ,.,      ..======..       .:. " << endl;
                                            cout <<"                                    ,                 .         ._!_.     ||::: : | .        ', " << endl;
                                            cout <<"                             .====.,                  .           ;  .~.===: : : :|   ..===. " << endl;
                                            cout <<"                             |.::'||      .=====.,    ..=======.~,   |\"|: :|::::::|   ||:::|=====| " << endl;
                                            cout <<"                          ___| :::|!__.,  |:::::|!_,   |: :: ::|\"|l_l|\"|:: |:;;:::|___!| ::|: : :| " << endl;
                                            cout <<"                         |: :|::: |:: |!__|; :: |: |===::: :: :|\"||_||\"| : |: :: :|: : |:: |:::::| " << endl;
                                            cout <<"                         |:::| _::|: :|:::|:===:|::|:::|:===F=:|\"!/|\\!\"|::F|:====:|::_:|: :|::__:| " << endl;
                                            cout <<"                         !_[]![_]_!_[]![]_!_[__]![]![_]![_][I_]!//_:_\\\\![]I![_][_]!_[_]![]_!_[__]! " << endl;
                                            cout <<"                         -----------------------------------\"---''''```---\"----------------------- " << endl;
                                            cout <<"                         _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |= _ _:_ _ =| _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
                                            cout <<"                                                             |=    :    =|                         " << endl;
                                            cout <<"                         ____________________________________L___________J_________________________ " << endl;
                                            cout <<"                         -------------------------------------------------------------------------- " << endl;

                                            cout <<"\n\n\n                                             " << protagonista << ", Parabens pela vitoria!" << endl;
                                            cout <<"\n                                                      FIM DE JOGO" << endl << endl << endl;


                                            //7. Final alternativo, tendo a derrota do protagonista.
                                            break;
                                        case 'a': case 'A':
                                        case 'c': case 'C':
                                        case 'd': case 'D':
                                        case 'e': case 'E':

                                            system("color 04");
                                            vida1 = vida1 - 20;
                                            cout <<"                          _                      ___                      _" << endl;
                                            cout <<"  Life Basilisco:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                                            cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                                            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                                            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                                            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                            cout <<"                      "<< endl;
                                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                                            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                                            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                                            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                                            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                            cout <<"                      `                          OOOOO'"<< endl;

                                            cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                                            cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                                            cout << "                                                                                                        Life Player: "<< vida1 << endl;

                                            system ("pause");
                                            system("CLS");

                                            //6. A escolha errada.

                                            cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                                            cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                                            cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                                            cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                                            cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                                            cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                                            cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                                            cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                                            cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                                            cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                                            cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                                            cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                                            cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                                            cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                                            cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                                            cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                                            cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                                            cout <<"              ==| |~ /     .     \\"<< endl;
                                            cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                                            system ("pause");
                                            system("CLS");

                                            cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                                            cout << " Basilisco." << endl << endl;
                                            cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                                            cout << " sobreviver." << endl << endl;

                                            cout <<"                                      ________            _______"<< endl;
                                            cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                                            cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                                            cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                                            cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                                            cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                                            cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                                            cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                                            cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                                            cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                                            cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                                            cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                                            cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                                            cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                                            cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                                            cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                                            cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                                            cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                                            cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                                            cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                                            cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                                            cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                                            cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                                            cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                                            cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                                            cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                                            cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                                            cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                                            cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                                            cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                                            cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                                            cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                                            cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                                            cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                                            cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                                            cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                                            cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                                            cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                                            cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                                            cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                                            cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                                            cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                                            cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                                            cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                                            cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                                            cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                                            cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                                            cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                                            cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                                            cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;

                                            break;
                                        default:
                                            cout << " Opcao invalida" << endl;
                                       }

                            break;
                        default:
                            cout << " Opcao invalida" << endl;
                        }

                        break;
                    case 'a': case 'A':
                    case 'b': case 'B':
                    case 'c': case 'C':
                    case 'd': case 'D':

                        vida1 = vida1 - 20;
                        cout <<"                          _                      ___                      _" << endl;
                        cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                        cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                        cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                        cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                        cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                        cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                        cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                        cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                        cout <<"                      "<< endl;
                        cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                        cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                        cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                        cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                        cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                        cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                        cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                        cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                        cout <<"                      `                          OOOOO'"<< endl;

                        cout << "\n\n                 Vo00c3 EH8 MU11T0 F#RT3 M4S N0NC@ ME_- V#%NC3R++!" << endl;

                        cout << "\n\n\n Calcule 3x2 + 2x - 8 = 0" << endl;
                        cout << " a) S={2,4}" << endl;
                        cout << " b) S={4/3,-2}" << endl;
                        cout << " c) S={3,-4}" << endl;
                        cout << " d) S={2/4,6}" << endl;
                        cout << " e) S={-6,8}" << endl;
                        cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                        cin >> resposta14;

                        system ("pause");
                        system("CLS");

                        switch(resposta14) {
                        case 'b': case 'B':

                            vida = vida - 20;
                            cout <<"                          _                      ___                      _" << endl;
                            cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                            cout <<"       "<<vida<<"             dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                            cout <<"                      "<< endl;
                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                            cout <<"                      `                          OOOOO'"<< endl;

                            cout << "\n\n                                   Q-Qu3m e-eh-ehE VOc3?" << endl;
                            cout << "                           E0 S00 A PERF33ICAO, V0C3 N40 P0D3 ME-M D3-D%¨&T3rr" << endl;

                            cout << " Resolva a equacao 4x - 13 + 2 = 5.5 - 3 + 7" << endl;
                            cout << " a) x = 4" << endl;
                            cout << " b) x = 7" << endl;
                            cout << " c) x = -10" << endl;
                            cout << " d) x = 2/9" << endl;
                            cout << " e) x = 10" << endl;
                            cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                            cin >> resposta20;

                            system ("pause");
                            system("CLS");

                            switch(resposta20) {
                            case 'e': case 'E':

                                vida = vida - 20;
                                cout <<"                          _                      ___                      _" << endl;
                                cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                                cout <<"       "<<vida<<"             dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                                cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                                cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                                cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                                cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                cout <<"                      "<< endl;
                                cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                                cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                                cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                                cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                                cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                                cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                cout <<"                      `                          OOOOO'"<< endl;

                                cout << "\n\n                                   OO-0& QU3+?" << endl;
                                cout << "                           E0 N-NH& P0SS2 P3RD7R D-D=S@@ M*>>E1R#" << endl;

                                cout << " Resolva a equacao (4 - x)(3 + x) = 0" << endl;
                                cout << " a) x = x" << endl;
                                cout << " b) x = 6 e 8" << endl;
                                cout << " c) x = 3 e 4" << endl;
                                cout << " d) x = 7 e 5" << endl;
                                cout << " e) x = -3 e 4" << endl;
                                cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                                cin >> resposta9;

                                system ("pause");
                                system("CLS");

                                switch(resposta9) {
                                case 'e': case 'E':
                                                vida = vida - 20;
                                                cout <<"                          _                      ___                      _" << endl;
                                                cout <<"  "<<vida<<"                    MMb.              .adOOO OOOba.              ,dMMMb"<< endl;
                                                cout <<"                      dP'  YMMb            dOOO OOOOOOOOOOb            aMMP  `Yb"<< endl;
                                                cout <<"                      V      ''Mb          OOO OOOOOOb          dM''      V"<< endl;
                                                cout <<"                               `M .       dOO OO OOOOOOOOOOOOb       ,dM'"<< endl;
                                                cout <<"                                 YMb._   |OOOOOOOO OOOOOOOOO|   _,dM '"<< endl;
                                                cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                                cout <<"                         ,dMM   Mb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                                cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                                cout <<"                      "<< endl;
                                                cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                                cout <<"                          ,aa .     `YMMb `OOOb.,dOO OO'          _,adMYYMb."<< endl;
                                                cout <<"                       ,MP'   `YM a._      OOOOOOOOOOOOOOOOO       _,adMM '   `YM."<< endl;
                                                cout <<"                       MP'        YMMM a._ YOOOOPVVVVVYOO O'/MMMMP           d P"<< endl;
                                                cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                                cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                                cout <<"                      `                          OOOOO'"<< endl;

                                                cout << "\n\n                                   NN00NA+{`MNN400NA00000-=-4%!!" << endl << endl;

                                                system ("pause");
                                                system("CLS");

                                                cout << "                Parabens "<< protagonista << "! O mundo eh eternamente grato pela sua bravura e heroismo! Hoje, o mundo " << endl;
                                                cout << "                                celebra sua vitoria contra o Basilisco!" << endl << endl << endl;

                                                cout <<"                                                         .''." << endl;
                                                cout <<"                               .''.             *''*    :_\\/_:     . " << endl;
                                                cout <<"                              :_\\/_:   .    .:.*_\\/_*   : /\\ :  .'.:.'." << endl;
                                                cout <<"                          .''.: /\\ : _\\(/_  ':'* /\\ *  : '..'.  -=:o:=-" << endl;
                                                cout <<"                         :_\\/_:'.:::. /)\\*''*  .|.* '.\\'/.'_\\(/_'.':'.'" << endl;
                                                cout <<"                         : /\\ : :::::  '*_\\/_* | |  -= o =- /)\\    '  *" << endl;
                                                cout <<"                          '..'  ':::'   * /\\ * |'|  .'/.\\'.  '._____" << endl;
                                                cout <<"                              *        __*..* |  |     :      |.   |' .---\"|" << endl;
                                                cout <<"                               _*   .-'   '-. |  |     .--'|  ||   | _|    |" << endl;
                                                cout <<"                            .-'|  _.|  |    ||   '-__  |   |  |    ||      |" << endl;
                                                cout <<"                            |' | |.    |    ||       | |   |  |    ||      |" << endl;
                                                cout <<"                         ___|  '-'     '    \"\"       '-'   '-.'    '`      |____" << endl;
                                                cout <<"                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\"" << endl << endl;

                                                system ("pause");
                                                system("CLS");

                                                cout << "               Voce sera lembrado por toda a historia, derrotasse a entidade mais forte de todos os tempos!" << endl;
                                                cout << "                                                O mundo agradece a sua coragem." << endl << endl << endl;

                                                cout <<"                                                               . " << endl;
                                                cout <<"                                      . .                     -:-             .  .  . " << endl;
                                                cout <<"                                    .'.:,'.        .  .  .     ' .           . \\ | / . " << endl;
                                                cout <<"                                    .'.;.`.       ._. ! ._.       \\          .__\\:/__. " << endl;
                                                cout <<"                                     `,:.'         ._\\!/_.                     .';`.      . ' . " << endl;
                                                cout <<"                                     ,'             . ! .        ,.,      ..======..       .:. " << endl;
                                                cout <<"                                    ,                 .         ._!_.     ||::: : | .        ', " << endl;
                                                cout <<"                             .====.,                  .           ;  .~.===: : : :|   ..===. " << endl;
                                                cout <<"                             |.::'||      .=====.,    ..=======.~,   |\"|: :|::::::|   ||:::|=====| " << endl;
                                                cout <<"                          ___| :::|!__.,  |:::::|!_,   |: :: ::|\"|l_l|\"|:: |:;;:::|___!| ::|: : :| " << endl;
                                                cout <<"                         |: :|::: |:: |!__|; :: |: |===::: :: :|\"||_||\"| : |: :: :|: : |:: |:::::| " << endl;
                                                cout <<"                         |:::| _::|: :|:::|:===:|::|:::|:===F=:|\"!/|\\!\"|::F|:====:|::_:|: :|::__:| " << endl;
                                                cout <<"                         !_[]![_]_!_[]![]_!_[__]![]![_]![_][I_]!//_:_\\\\![]I![_][_]!_[_]![]_!_[__]! " << endl;
                                                cout <<"                         -----------------------------------\"---''''```---\"----------------------- " << endl;
                                                cout <<"                         _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |= _ _:_ _ =| _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
                                                cout <<"                                                             |=    :    =|                         " << endl;
                                                cout <<"                         ____________________________________L___________J_________________________ " << endl;
                                                cout <<"                         -------------------------------------------------------------------------- " << endl;

                                                cout <<"\n\n\n                                             " << protagonista << ", Parabens pela vitoria!" << endl;
                                                cout <<"\n                                                      FIM DE JOGO" << endl << endl << endl;


                                break;
                            case 'a': case 'A':
                            case 'b': case 'B':
                            case 'c': case 'C':
                            case 'd': case 'D':

                                    //7. Um fim trágico.

                                    system("color 04");
                                    vida1 = vida1 - 20;
                                    cout <<"                          _                      ___                      _" << endl;
                                    cout <<"  Life Basilisco:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                                    cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                                    cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                                    cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                                    cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                                    cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                    cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                    cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                    cout <<"                      "<< endl;
                                    cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                    cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                                    cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                                    cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                                    cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                                    cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                                    cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                    cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                    cout <<"                      `                          OOOOO'"<< endl;

                                    cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                                    cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                                    cout << "                                                                                                        Life Player: "<< vida1 << endl;

                                    system ("pause");
                                    system("CLS");

                                    cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                                    cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                                    cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                                    cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                                    cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                                    cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                                    cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                                    cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                                    cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                                    cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                                    cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                                    cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                                    cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                                    cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                                    cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                                    cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                                    cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                                    cout <<"              ==| |~ /     .     \\"<< endl;
                                    cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                                    system ("pause");
                                    system("CLS");

                                    cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                                    cout << " Basilisco." << endl << endl;
                                    cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                                    cout << " sobreviver." << endl << endl;

                                    cout <<"                                      ________            _______"<< endl;
                                    cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                                    cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                                    cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                                    cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                                    cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                                    cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                                    cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                                    cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                                    cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                                    cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                                    cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                                    cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                                    cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                                    cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                                    cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                                    cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                                    cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                                    cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                                    cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                                    cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                                    cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                                    cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                                    cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                                    cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                                    cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                                    cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                                    cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                                    cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                                    cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                                    cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                                    cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                                    cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                                    cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                                    cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                                    cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                                    cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                                    cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                                    cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                                    cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                                    cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                                    cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                                    cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                                    cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                                    cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                                    cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                                    cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                                    cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                                    cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                                    cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;


                                break;
                            default:
                                cout << " Opcao invalida" << endl;

                            }


                                            break;
                                        case 'a': case 'A':
                                        case 'b': case 'B':
                                        case 'c': case 'C':
                                        case 'd': case 'D':

                                            system("color 04");
                                            vida1 = vida1 - 20;
                                            cout <<"                          _                      ___                      _" << endl;
                                            cout <<"  Life Basilisco:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                                            cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                                            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                                            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                                            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                            cout <<"                      "<< endl;
                                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                                            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                                            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                                            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                                            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                            cout <<"                      `                          OOOOO'"<< endl;

                                            cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                                            cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                                            cout << "                                                                                                        Life Player: "<< vida1 << endl;

                                            system ("pause");
                                            system("CLS");

                                            cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                                            cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                                            cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                                            cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                                            cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                                            cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                                            cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                                            cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                                            cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                                            cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                                            cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                                            cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                                            cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                                            cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                                            cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                                            cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                                            cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                                            cout <<"              ==| |~ /     .     \\"<< endl;
                                            cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                                            system ("pause");
                                            system("CLS");

                                            cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                                            cout << " Basilisco." << endl << endl;
                                            cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                                            cout << " sobreviver." << endl << endl;

                                            cout <<"                                      ________            _______"<< endl;
                                            cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                                            cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                                            cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                                            cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                                            cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                                            cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                                            cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                                            cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                                            cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                                            cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                                            cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                                            cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                                            cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                                            cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                                            cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                                            cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                                            cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                                            cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                                            cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                                            cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                                            cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                                            cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                                            cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                                            cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                                            cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                                            cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                                            cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                                            cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                                            cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                                            cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                                            cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                                            cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                                            cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                                            cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                                            cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                                            cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                                            cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                                            cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                                            cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                                            cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                                            cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                                            cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                                            cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                                            cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                                            cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                                            cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                                            cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                                            cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                                            cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;

                                            break;
                                        default:
                                            cout << " Opcao invalida" << endl;
                                       }
                            break;
                        case 'a': case 'A':
                        case 'c': case 'C':
                        case 'd': case 'D':
                        case 'e': case 'E':

                            system("color 04");
                            vida1 = vida1 - 20;
                            cout <<"                          _                      ___                      _" << endl;
                            cout <<"  Life Basilisco:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                            cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                            cout <<"                      "<< endl;
                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                            cout <<"                      `                          OOOOO'"<< endl;

                            cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                            cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                            cout << "                                                                                                        Life Player: "<< vida1 << endl;

                            system ("pause");
                            system("CLS");

                            cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                            cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                            cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                            cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                            cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                            cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                            cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                            cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                            cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                            cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                            cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                            cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                            cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                            cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                            cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                            cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                            cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                            cout <<"              ==| |~ /     .     \\"<< endl;
                            cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                            system ("pause");
                            system("CLS");

                            cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                            cout << " Basilisco." << endl << endl;
                            cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                            cout << " sobreviver." << endl << endl;

                            cout <<"                                      ________            _______"<< endl;
                            cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                            cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                            cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                            cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                            cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                            cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                            cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                            cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                            cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                            cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                            cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                            cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                            cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                            cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                            cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                            cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                            cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                            cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                            cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                            cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                            cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                            cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                            cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                            cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                            cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                            cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                            cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                            cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                            cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                            cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                            cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                            cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                            cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                            cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                            cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                            cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                            cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                            cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                            cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                            cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                            cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                            cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                            cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                            cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                            cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                            cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                            cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                            cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                            cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;


                            break;
                        default:
                            cout << "Opcao invalida" << endl;
                        }

                        break;
                    default:
                        cout << " Opcao invalida" << endl;
                    }

                    break;
                case 'a': case 'A':
                case 'b': case 'B':
                case 'c': case 'C':
                case 'e': case 'E':

                    vida1 = vida1 - 20;
                    cout <<"                          _                      ___                      _" << endl;
                    cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                    cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                    cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                    cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                    cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                    cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                    cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                    cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                    cout <<"                      "<< endl;
                    cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                    cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                    cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                    cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                    cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                    cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                    cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                    cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                    cout <<"                      `                          OOOOO'"<< endl;

                    cout << "\n\n               Como imaginavel! Um mero mortal nao consegue realizar tais operacoes!" << endl;

                    cout << "\n\n\n Determine os valores de x que satisfaçam a equação (4 - x)(3 + x) = 0" << endl;
                    cout << " a) S={8,2}" << endl;
                    cout << " b) S={2,7}" << endl;
                    cout << " c) S={3,-4}" << endl;
                    cout << " d) S={-3,4}" << endl;
                    cout << " e) S={-6,8}" << endl;
                    cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                    cin >> resposta10;

                    system ("pause");
                    system("CLS");

                        switch(resposta10) {
                        case 'd': case 'D':

                            vida = vida - 20;
                            cout <<"                          _                      ___                      _" << endl;
                            cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                            cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                            cout <<"                      "<< endl;
                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                            cout <<"                      `                          OOOOO'"<< endl;

                            cout << "\n\n                    N-N4o eh poss1vel, um ser hum4an0 comum JAMAIS acert4ri1a" << endl;
                            cout << "                                        TENTE A SORTE AGORA" << endl;

                            cout << "\n\n\n Calcule 3x2 + 2x - 8 = 0:" << endl;
                            cout << " a) S={3/4,2}" << endl;
                            cout << " b) S={3,1/2}" << endl;
                            cout << " c) S={4/3,-2}" << endl;
                            cout << " d) S={1,3}" << endl;
                            cout << " e) S={4,2}" << endl;
                            cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                            cin >> resposta12;

                            system ("pause");
                            system("CLS");

                            cout << "Hat-Trick" << endl;

                            system ("pause");
                            system("CLS");

                            switch(resposta12) {
                            case 'c': case 'C':

                                vida = vida - 20;
                                cout <<"                          _                      ___                      _" << endl;
                                cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                                cout <<"       "<<vida<<"             dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                                cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                                cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                                cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                                cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                cout <<"                      "<< endl;
                                cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                                cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                                cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                                cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                                cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                                cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                cout <<"                      `                          OOOOO'"<< endl;

                                cout << "\n\n                                   Q-Qu3m e-eh-ehE VOc3?" << endl;
                                cout << "                           E0 S00 A PERF33ICAO, V0C3 N40 P0D3 ME-M D3-D%¨&T3rr" << endl;

                                cout << " Resolva a equacao 4x - 13 + 2 = 5.5 - 3 + 7" << endl;
                                cout << " a) x = 4" << endl;
                                cout << " b) x = 10" << endl;
                                cout << " c) x = -10" << endl;
                                cout << " d) x = 2/9" << endl;
                                cout << " e) x = 7" << endl;
                                cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                                cin >> resposta13;

                                system ("pause");
                                system("CLS");

                                switch(resposta13) {
                                case 'b': case 'B':

                                    vida = vida - 20;
                                    cout <<"                          _                      ___                      _" << endl;
                                    cout <<"  "<<vida<<"                    MMb.              .adOOO OOOba.              ,dMMMb"<< endl;
                                    cout <<"                      dP'  YMMb            dOOO OOOOOOOOOOb            aMMP  `Yb"<< endl;
                                    cout <<"                      V      ''Mb          OOO OOOOOOb          dM''      V"<< endl;
                                    cout <<"                               `M .       dOO OO OOOOOOOOOOOOb       ,dM'"<< endl;
                                    cout <<"                                 YMb._   |OOOOOOOO OOOOOOOOO|   _,dM '"<< endl;
                                    cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                    cout <<"                         ,dMM   Mb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                    cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                    cout <<"                      "<< endl;
                                    cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                    cout <<"                          ,aa .     `YMMb `OOOb.,dOO OO'          _,adMYYMb."<< endl;
                                    cout <<"                       ,MP'   `YM a._      OOOOOOOOOOOOOOOOO       _,adMM '   `YM."<< endl;
                                    cout <<"                       MP'        YMMM a._ YOOOOPVVVVVYOO O'/MMMMP           d P"<< endl;
                                    cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                    cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                    cout <<"                      `                          OOOOO'"<< endl;

                                    cout << "\n\n                                   NN00NA+{`MNN400NA00000-=-4%!!" << endl << endl;

                                    system ("pause");
                                    system("CLS");

                                    cout << "                Parabens "<< protagonista << "! O mundo eh eternamente grato pela sua bravura e heroismo! Hoje, o mundo " << endl;
                                    cout << "                                celebra sua vitoria contra o Basilisco!" << endl << endl << endl;

                                    cout <<"                                                         .''." << endl;
                                    cout <<"                               .''.             *''*    :_\\/_:     . " << endl;
                                    cout <<"                              :_\\/_:   .    .:.*_\\/_*   : /\\ :  .'.:.'." << endl;
                                    cout <<"                          .''.: /\\ : _\\(/_  ':'* /\\ *  : '..'.  -=:o:=-" << endl;
                                    cout <<"                         :_\\/_:'.:::. /)\\*''*  .|.* '.\\'/.'_\\(/_'.':'.'" << endl;
                                    cout <<"                         : /\\ : :::::  '*_\\/_* | |  -= o =- /)\\    '  *" << endl;
                                    cout <<"                          '..'  ':::'   * /\\ * |'|  .'/.\\'.  '._____" << endl;
                                    cout <<"                              *        __*..* |  |     :      |.   |' .---\"|" << endl;
                                    cout <<"                               _*   .-'   '-. |  |     .--'|  ||   | _|    |" << endl;
                                    cout <<"                            .-'|  _.|  |    ||   '-__  |   |  |    ||      |" << endl;
                                    cout <<"                            |' | |.    |    ||       | |   |  |    ||      |" << endl;
                                    cout <<"                         ___|  '-'     '    \"\"       '-'   '-.'    '`      |____" << endl;
                                    cout <<"                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\"" << endl << endl;

                                    system ("pause");
                                    system("CLS");

                                    cout << "               Voce sera lembrado por toda a historia, derrotasse a entidade mais forte de todos os tempos!" << endl;
                                    cout << "                                                O mundo agradece a sua coragem.!" << endl << endl << endl;

                                    cout <<"                                                               . " << endl;
                                    cout <<"                                      . .                     -:-             .  .  . " << endl;
                                    cout <<"                                    .'.:,'.        .  .  .     ' .           . \\ | / . " << endl;
                                    cout <<"                                    .'.;.`.       ._. ! ._.       \\          .__\\:/__. " << endl;
                                    cout <<"                                     `,:.'         ._\\!/_.                     .';`.      . ' . " << endl;
                                    cout <<"                                     ,'             . ! .        ,.,      ..======..       .:. " << endl;
                                    cout <<"                                    ,                 .         ._!_.     ||::: : | .        ', " << endl;
                                    cout <<"                             .====.,                  .           ;  .~.===: : : :|   ..===. " << endl;
                                    cout <<"                             |.::'||      .=====.,    ..=======.~,   |\"|: :|::::::|   ||:::|=====| " << endl;
                                    cout <<"                          ___| :::|!__.,  |:::::|!_,   |: :: ::|\"|l_l|\"|:: |:;;:::|___!| ::|: : :| " << endl;
                                    cout <<"                         |: :|::: |:: |!__|; :: |: |===::: :: :|\"||_||\"| : |: :: :|: : |:: |:::::| " << endl;
                                    cout <<"                         |:::| _::|: :|:::|:===:|::|:::|:===F=:|\"!/|\\!\"|::F|:====:|::_:|: :|::__:| " << endl;
                                    cout <<"                         !_[]![_]_!_[]![]_!_[__]![]![_]![_][I_]!//_:_\\\\![]I![_][_]!_[_]![]_!_[__]! " << endl;
                                    cout <<"                         -----------------------------------\"---''''```---\"----------------------- " << endl;
                                    cout <<"                         _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |= _ _:_ _ =| _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
                                    cout <<"                                                             |=    :    =|                         " << endl;
                                    cout <<"                         ____________________________________L___________J_________________________ " << endl;
                                    cout <<"                         -------------------------------------------------------------------------- " << endl;

                                    cout <<"\n\n\n                                             " << protagonista << ", Parabens pela vitoria!" << endl;
                                    cout <<"\n                                                      FIM DE JOGO" << endl << endl << endl;

                                    break;
                                case 'a': case 'A':
                                case 'c': case 'C':
                                case 'd': case 'D':
                                case 'e': case 'E':

                                    system("color 04");
                                    vida1 = vida1 - 20;
                                    cout <<"                          _                      ___                      _" << endl;
                                    cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                                    cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                                    cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                                    cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                                    cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                                    cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                    cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                    cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                    cout <<"                      "<< endl;
                                    cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                    cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                                    cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                                    cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                                    cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                                    cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                                    cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                    cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                    cout <<"                      `                          OOOOO'"<< endl;

                                    cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                                    cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                                    cout << "                                                                                                        Player Life: "<< vida1 << endl;

                                    system ("pause");
                                    system("CLS");

                                    cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                                    cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                                    cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                                    cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                                    cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                                    cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                                    cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                                    cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                                    cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                                    cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                                    cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                                    cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                                    cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                                    cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                                    cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                                    cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                                    cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                                    cout <<"              ==| |~ /     .     \\"<< endl;
                                    cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                                    system ("pause");
                                    system("CLS");

                                    cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                                    cout << " Basilisco." << endl << endl;
                                    cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                                    cout << " sobreviver." << endl << endl;

                                    cout <<"                                      ________            _______"<< endl;
                                    cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                                    cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                                    cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                                    cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                                    cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                                    cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                                    cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                                    cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                                    cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                                    cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                                    cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                                    cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                                    cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                                    cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                                    cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                                    cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                                    cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                                    cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                                    cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                                    cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                                    cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                                    cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                                    cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                                    cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                                    cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                                    cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                                    cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                                    cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                                    cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                                    cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                                    cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                                    cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                                    cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                                    cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                                    cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                                    cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                                    cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                                    cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                                    cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                                    cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                                    cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                                    cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                                    cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                                    cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                                    cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                                    cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                                    cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                                    cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                                    cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;

                                    break;
                                default:
                                    cout << "Opcao invalida" << endl;
                                }

                                break;
                            case 'a': case 'A':
                            case 'b': case 'B':
                            case 'd': case 'D':
                            case 'e': case 'E':

                                system("color 04");
                                vida1 = vida1 - 20;
                                cout <<"                          _                      ___                      _" << endl;
                                cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                                cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                                cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                                cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                                cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                                cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                cout <<"                      "<< endl;
                                cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                                cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                                cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                                cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                                cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                                cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                cout <<"                      `                          OOOOO'"<< endl;

                                cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                                cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                                cout << "                                                                                                        Player Life: "<< vida1 << endl;

                                system ("pause");
                                system("CLS");

                                cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                                cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                                cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                                cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                                cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                                cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                                cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                                cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                                cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                                cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                                cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                                cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                                cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                                cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                                cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                                cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                                cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                                cout <<"              ==| |~ /     .     \\"<< endl;
                                cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                                system ("pause");
                                system("CLS");

                                cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                                cout << " Basilisco." << endl << endl;
                                cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                                cout << " sobreviver." << endl << endl;

                                cout <<"                                      ________            _______"<< endl;
                                cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                                cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                                cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                                cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                                cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                                cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                                cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                                cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                                cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                                cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                                cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                                cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                                cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                                cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                                cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                                cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                                cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                                cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                                cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                                cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                                cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                                cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                                cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                                cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                                cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                                cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                                cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                                cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                                cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                                cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                                cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                                cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                                cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                                cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                                cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                                cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                                cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                                cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                                cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                                cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                                cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                                cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                                cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                                cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                                cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                                cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                                cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                                cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                                cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;

                                break;
                            default:
                                cout << "Opcao invalida" << endl;
                            }


                            break;
                        case 'a': case 'A':
                        case 'b': case 'B':
                        case 'c': case 'C':
                        case 'e': case 'E':

                            system("color 04");
                            vida1 = vida1 - 20;
                            cout <<"                          _                      ___                      _" << endl;
                            cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                            cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                            cout <<"                      "<< endl;
                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                            cout <<"                      `                          OOOOO'"<< endl;

                            cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                            cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                            cout << "                                                                                                        Player Life: "<< vida1 << endl;

                            system ("pause");
                            system("CLS");

                            cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                            cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                            cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                            cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                            cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                            cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                            cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                            cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                            cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                            cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                            cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                            cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                            cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                            cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                            cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                            cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                            cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                            cout <<"              ==| |~ /     .     \\"<< endl;
                            cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                            system ("pause");
                            system("CLS");

                            cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                            cout << " Basilisco." << endl << endl;
                            cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                            cout << " sobreviver." << endl << endl;

                            cout <<"                                      ________            _______"<< endl;
                            cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                            cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                            cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                            cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                            cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                            cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                            cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                            cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                            cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                            cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                            cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                            cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                            cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                            cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                            cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                            cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                            cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                            cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                            cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                            cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                            cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                            cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                            cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                            cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                            cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                            cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                            cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                            cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                            cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                            cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                            cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                            cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                            cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                            cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                            cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                            cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                            cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                            cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                            cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                            cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                            cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                            cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                            cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                            cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                            cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                            cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                            cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                            cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                            cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;

                            break;
                        default:
                            cout << "Opcao invalida" << endl;
                        }

                    break;
                default:
                    cout << " Opcao invalida" << endl;
                }

                break;
            case 'a': case 'A':
            case 'b': case 'B':
            case 'd': case 'D':
            case 'e': case 'E':

                vida1 = vida1 - 20;
                cout <<"                          _                      ___                      _" << endl;
                cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                cout <<"                      "<< endl;
                cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                cout <<"                      `                          OOOOO'"<< endl;

                cout << "\n\n               Como imaginavel! Um mero mortal nao consegue realizar tais operacoes!" << endl;

                cout << "\n\n\n Determine os valores de x que satisfaçam a equação (4 - x)(3 + x) = 0" << endl;
                cout << " a) S={8,2}" << endl;
                cout << " b) S={-3,4}" << endl;
                cout << " c) S={3,-4}" << endl;
                cout << " d) S={2,7}" << endl;
                cout << " e) S={-6,8}" << endl;
                cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                cin >> resposta5;

                system ("pause");
                system("CLS");

                switch (resposta5) {
                case 'b': case 'B':

                    vida = vida - 20;
                    cout <<"                          _                      ___                      _" << endl;
                    cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                    cout <<"       "<<vida<<"             dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                    cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                    cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                    cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                    cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                    cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                    cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                    cout <<"                      "<< endl;
                    cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                    cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                    cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                    cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                    cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                    cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                    cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                    cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                    cout <<"                      `                          OOOOO'"<< endl;

                    cout << "\n\n               BELA RESPOSTA! Mas vamos ver como voce ira se sair na questao a seguir" << endl;

                    cout << " Resolva a equacao 4x - 13 + 2 = 5.5 - 3 + 7" << endl;
                    cout << " a) x = 4" << endl;
                    cout << " b) x = 10" << endl;
                    cout << " c) x = -10" << endl;
                    cout << " d) x = 2/9" << endl;
                    cout << " e) x = 7" << endl;
                    cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                    cin >> resposta6;

                    system ("pause");
                    system("CLS");

                    switch (resposta6) {
                    case 'd': case 'D':

                        vida = vida - 20;
                        cout <<"                          _                      ___                      _" << endl;
                        cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                        cout <<"       "<<vida<<"             dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                        cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                        cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                        cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                        cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                        cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                        cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                        cout <<"                      "<< endl;
                        cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                        cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                        cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                        cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                        cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                        cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                        cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                        cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                        cout <<"                      `                          OOOOO'"<< endl;

                        cout << "\n\n                    N-N4o eh poss1vel, um ser hum4an0 comum JAMAIS acert4ri1a" << endl;
                        cout << "                                        TENTE A SORTE AGORA" << endl;
                        cout << " Determine x2 - 3x - 4 = 0" << endl;
                        cout << " a) S{7,8}" << endl;
                        cout << " b) S{3,4}" << endl;
                        cout << " c) S{4,1}" << endl;
                        cout << " d) S{5,1}" << endl;
                        cout << " e) S{4,-1}" << endl;
                        cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                        cin >> resposta7;

                        system ("pause");
                        system("CLS");

                        cout << "Hat-Trick" << endl;

                        system ("pause");
                        system("CLS");

                        switch(resposta7) {
                        case 'e': case 'E':
                            vida = vida - 40;
                            cout <<"                          _                      ___                      _" << endl;
                            cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                            cout <<"       "<<vida<<"             dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                            cout <<"                      "<< endl;
                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                            cout <<"                      `                          OOOOO'"<< endl;

                            cout << "\n\n                    N-N4o eh poss1vel, um ser hum4an0 comum JAMAIS acert4ri1a" << endl;
                            cout << "                                        TENTE A SORTE AGORA" << endl;
                            cout << " Determine 3x2 + 2x - 8 = 0" << endl;
                            cout << " a) S{1,4}" << endl;
                            cout << " b) S{1/2,4}" << endl;
                            cout << " c) S{4,3}" << endl;
                            cout << " d) S{2,1}" << endl;
                            cout << " e) S{4/3,-2}" << endl;
                            cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                            cin >> resposta8;

                                switch(resposta8) {
                                case 'e': case 'E':

                                        system ("pause");
                                        system("CLS");

                                        vida = vida - 20;
                                        cout <<"                          _                      ___                      _" << endl;
                                        cout <<"  "<<vida<<"                    MMb.              .adOOO OOOba.              ,dMMMb"<< endl;
                                        cout <<"                      dP'  YMMb            dOOO OOOOOOOOOOb            aMMP  `Yb"<< endl;
                                        cout <<"                      V      ''Mb          OOO OOOOOOb          dM''      V"<< endl;
                                        cout <<"                               `M .       dOO OO OOOOOOOOOOOOb       ,dM'"<< endl;
                                        cout <<"                                 YMb._   |OOOOOOOO OOOOOOOOO|   _,dM '"<< endl;
                                        cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                        cout <<"                         ,dMM   Mb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                        cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                        cout <<"                      "<< endl;
                                        cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                        cout <<"                          ,aa .     `YMMb `OOOb.,dOO OO'          _,adMYYMb."<< endl;
                                        cout <<"                       ,MP'   `YM a._      OOOOOOOOOOOOOOOOO       _,adMM '   `YM."<< endl;
                                        cout <<"                       MP'        YMMM a._ YOOOOPVVVVVYOO O'/MMMMP           d P"<< endl;
                                        cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                        cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                        cout <<"                      `                          OOOOO'"<< endl;

                                        cout << "\n\n                                   NN00NA+{`MNN400NA00000-=-4%!!" << endl << endl;

                                        system ("pause");
                                        system("CLS");

                                        cout << "                Parabens "<< protagonista << "! O mundo eh eternamente grato pela sua bravura e heroismo! Hoje, o mundo " << endl;
                                        cout << "                                celebra sua vitoria contra o Basilisco!" << endl << endl << endl;

                                        cout <<"                                                         .''." << endl;
                                        cout <<"                               .''.             *''*    :_\\/_:     . " << endl;
                                        cout <<"                              :_\\/_:   .    .:.*_\\/_*   : /\\ :  .'.:.'." << endl;
                                        cout <<"                          .''.: /\\ : _\\(/_  ':'* /\\ *  : '..'.  -=:o:=-" << endl;
                                        cout <<"                         :_\\/_:'.:::. /)\\*''*  .|.* '.\\'/.'_\\(/_'.':'.'" << endl;
                                        cout <<"                         : /\\ : :::::  '*_\\/_* | |  -= o =- /)\\    '  *" << endl;
                                        cout <<"                          '..'  ':::'   * /\\ * |'|  .'/.\\'.  '._____" << endl;
                                        cout <<"                              *        __*..* |  |     :      |.   |' .---\"|" << endl;
                                        cout <<"                               _*   .-'   '-. |  |     .--'|  ||   | _|    |" << endl;
                                        cout <<"                            .-'|  _.|  |    ||   '-__  |   |  |    ||      |" << endl;
                                        cout <<"                            |' | |.    |    ||       | |   |  |    ||      |" << endl;
                                        cout <<"                         ___|  '-'     '    \"\"       '-'   '-.'    '`      |____" << endl;
                                        cout <<"                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\"" << endl << endl;

                                        system ("pause");
                                        system("CLS");

                                        cout << "               Voce sera lembrado por toda a historia, derrotasse a entidade mais forte de todos os tempos!" << endl;
                                        cout << "                                                O mundo agradece a sua coragem." << endl << endl << endl;

                                        cout <<"                                                               . " << endl;
                                        cout <<"                                      . .                     -:-             .  .  . " << endl;
                                        cout <<"                                    .'.:,'.        .  .  .     ' .           . \\ | / . " << endl;
                                        cout <<"                                    .'.;.`.       ._. ! ._.       \\          .__\\:/__. " << endl;
                                        cout <<"                                     `,:.'         ._\\!/_.                     .';`.      . ' . " << endl;
                                        cout <<"                                     ,'             . ! .        ,.,      ..======..       .:. " << endl;
                                        cout <<"                                    ,                 .         ._!_.     ||::: : | .        ', " << endl;
                                        cout <<"                             .====.,                  .           ;  .~.===: : : :|   ..===. " << endl;
                                        cout <<"                             |.::'||      .=====.,    ..=======.~,   |\"|: :|::::::|   ||:::|=====| " << endl;
                                        cout <<"                          ___| :::|!__.,  |:::::|!_,   |: :: ::|\"|l_l|\"|:: |:;;:::|___!| ::|: : :| " << endl;
                                        cout <<"                         |: :|::: |:: |!__|; :: |: |===::: :: :|\"||_||\"| : |: :: :|: : |:: |:::::| " << endl;
                                        cout <<"                         |:::| _::|: :|:::|:===:|::|:::|:===F=:|\"!/|\\!\"|::F|:====:|::_:|: :|::__:| " << endl;
                                        cout <<"                         !_[]![_]_!_[]![]_!_[__]![]![_]![_][I_]!//_:_\\\\![]I![_][_]!_[_]![]_!_[__]! " << endl;
                                        cout <<"                         -----------------------------------\"---''''```---\"----------------------- " << endl;
                                        cout <<"                         _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |= _ _:_ _ =| _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
                                        cout <<"                                                             |=    :    =|                         " << endl;
                                        cout <<"                         ____________________________________L___________J_________________________ " << endl;
                                        cout <<"                         -------------------------------------------------------------------------- " << endl;

                                        cout <<"\n\n\n                                             " << protagonista << ", Parabens pela vitoria!" << endl;
                                        cout <<"\n                                                      FIM DE JOGO" << endl << endl << endl;


                                    break;
                                case 'a': case 'A':
                                case 'b': case 'B':
                                case 'c': case 'C':
                                case 'd': case 'D':

                                    system("color 04");
                                    vida1 = vida1 - 20;
                                    cout <<"                          _                      ___                      _" << endl;
                                    cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                                    cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                                    cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                                    cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                                    cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                                    cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                    cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                    cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                    cout <<"                      "<< endl;
                                    cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                    cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                                    cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                                    cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                                    cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                                    cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                                    cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                    cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                    cout <<"                      `                          OOOOO'"<< endl;

                                    cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                                    cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                                    cout << "                                                                                                        Player Life: "<< vida1 << endl;

                                    system ("pause");
                                    system("CLS");

                                    cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                                    cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                                    cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                                    cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                                    cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                                    cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                                    cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                                    cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                                    cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                                    cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                                    cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                                    cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                                    cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                                    cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                                    cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                                    cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                                    cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                                    cout <<"              ==| |~ /     .     \\"<< endl;
                                    cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                                    system ("pause");
                                    system("CLS");

                                    cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                                    cout << " Basilisco." << endl << endl;
                                    cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                                    cout << " sobreviver." << endl << endl;

                                    cout <<"                                      ________            _______"<< endl;
                                    cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                                    cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                                    cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                                    cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                                    cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                                    cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                                    cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                                    cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                                    cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                                    cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                                    cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                                    cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                                    cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                                    cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                                    cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                                    cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                                    cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                                    cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                                    cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                                    cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                                    cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                                    cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                                    cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                                    cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                                    cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                                    cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                                    cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                                    cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                                    cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                                    cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                                    cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                                    cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                                    cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                                    cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                                    cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                                    cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                                    cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                                    cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                                    cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                                    cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                                    cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                                    cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                                    cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                                    cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                                    cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                                    cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                                    cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                                    cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                                    cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;

                                break;
                            default:
                                cout << " Opcao invalida" << endl;
                            }

                            break;
                        case 'a': case 'A':
                        case 'b': case 'B':
                        case 'c': case 'C':
                        case 'd': case 'D':

                            system("color 04");
                            vida1 = vida1 - 20;
                            cout <<"                          _                      ___                      _" << endl;
                            cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                            cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                            cout <<"                      "<< endl;
                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                            cout <<"                      `                          OOOOO'"<< endl;

                            cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                            cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                            cout << "                                                                                                        Player Life: "<< vida1 << endl;

                            system ("pause");
                            system("CLS");

                            cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                            cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                            cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                            cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                            cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                            cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                            cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                            cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                            cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                            cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                            cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                            cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                            cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                            cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                            cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                            cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                            cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                            cout <<"              ==| |~ /     .     \\"<< endl;
                            cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                            system ("pause");
                            system("CLS");

                            cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                            cout << " Basilisco." << endl << endl;
                            cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                            cout << " sobreviver." << endl << endl;

                            cout <<"                                      ________            _______"<< endl;
                            cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                            cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                            cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                            cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                            cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                            cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                            cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                            cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                            cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                            cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                            cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                            cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                            cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                            cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                            cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                            cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                            cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                            cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                            cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                            cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                            cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                            cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                            cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                            cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                            cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                            cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                            cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                            cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                            cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                            cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                            cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                            cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                            cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                            cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                            cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                            cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                            cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                            cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                            cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                            cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                            cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                            cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                            cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                            cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                            cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                            cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                            cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                            cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                            cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;


                            break;
                        default:
                            cout << " Opcao invalida" << endl;

                        }


                    break;
                case 'a': case 'A':
                case 'b': case 'B':
                case 'c': case 'C':
                case 'e': case 'E':

                        system("color 04");
                        vida1 = vida1 - 20;
                        cout <<"                          _                      ___                      _" << endl;
                        cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                        cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                        cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                        cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                        cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                        cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                        cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                        cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                        cout <<"                      "<< endl;
                        cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                        cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                        cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                        cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                        cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                        cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                        cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                        cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                        cout <<"                      `                          OOOOO'"<< endl;

                        cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                        cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                        cout << "                                                                                                        Player Life: "<< vida1 << endl;

                        system ("pause");
                        system("CLS");

                        cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                        cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                        cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                        cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                        cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                        cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                        cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                        cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                        cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                        cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                        cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                        cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                        cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                        cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                        cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                        cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                        cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                        cout <<"              ==| |~ /     .     \\"<< endl;
                        cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                        system ("pause");
                        system("CLS");

                        cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                        cout << " Basilisco." << endl << endl;
                        cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                        cout << " sobreviver." << endl << endl;

                        cout <<"                                      ________            _______"<< endl;
                        cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                        cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                        cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                        cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                        cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                        cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                        cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                        cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                        cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                        cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                        cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                        cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                        cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                        cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                        cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                        cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                        cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                        cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                        cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                        cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                        cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                        cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                        cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                        cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                        cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                        cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                        cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                        cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                        cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                        cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                        cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                        cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                        cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                        cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                        cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                        cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                        cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                        cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                        cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                        cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                        cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                        cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                        cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                        cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                        cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                        cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                        cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                        cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                        cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;

                    break;
                default:
                    cout << " Opcao invalida" << endl;
                }
                break;
            case 'a': case 'A':
            case 'c': case 'C':
            case 'd': case 'D':
            case 'e': case 'E':

                    system("color 04");
                    vida1 = vida1 - 20;
                    cout <<"                          _                      ___                      _" << endl;
                    cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                    cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                    cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                    cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                    cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                    cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                    cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                    cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                    cout <<"                      "<< endl;
                    cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                    cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                    cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                    cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                    cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                    cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                    cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                    cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                    cout <<"                      `                          OOOOO'"<< endl;

                    cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                    cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                    cout << "                                                                                                        Player Life: "<< vida1 << endl;

                    system ("pause");
                    system("CLS");

                    cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                    cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                    cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                    cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                    cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                    cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                    cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                    cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                    cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                    cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                    cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                    cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                    cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                    cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                    cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                    cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                    cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                    cout <<"              ==| |~ /     .     \\"<< endl;
                    cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                    system ("pause");
                    system("CLS");

                    cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                    cout << " Basilisco." << endl << endl;
                    cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                    cout << " sobreviver." << endl << endl;

                    cout <<"                                      ________            _______"<< endl;
                    cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                    cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                    cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                    cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                    cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                    cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                    cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                    cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                    cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                    cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                    cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                    cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                    cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                    cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                    cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                    cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                    cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                    cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                    cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                    cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                    cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                    cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                    cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                    cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                    cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                    cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                    cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                    cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                    cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                    cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                    cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                    cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                    cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                    cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                    cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                    cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                    cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                    cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                    cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                    cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                    cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                    cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                    cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                    cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                    cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                    cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                    cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                    cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                    cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;

                break;
            default:
                cout << " Opcao invalida" << endl;

            return 0;
                }

            }

            //3.2 Final alternativo, no qual o protagonista desiste.
            break;
        case 'b': case 'B':
            cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
            cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
            cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
            cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

            cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
            cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
            cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
            cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
            cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
            cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
            cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
            cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
            cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
            cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
            cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
            cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
            cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
            cout <<"              ==| |~ /     .     \\"<< endl;
            cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

            system ("pause");
            system("CLS");

            cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
            cout << " Basilisco." << endl << endl;
            cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
            cout << " sobreviver." << endl << endl;

            cout <<"                                      ________            _______"<< endl;
            cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
            cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
            cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
            cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
            cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
            cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
            cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
            cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
            cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
            cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
            cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
            cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
            cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
            cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
            cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
            cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
            cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
            cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
            cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
            cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
            cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
            cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
            cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
            cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
            cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
            cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
            cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
            cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
            cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
            cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
            cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
            cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
            cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
            cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
            cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
            cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
            cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
            cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
            cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
            cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
            cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
            cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
            cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
            cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
            cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
            cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
            cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
            cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

            cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;


            break;
        default:
            cout << "Opcao invalida" << endl;

    }

        break;
    case 'b': case 'B':
        cout << "\n " << protagonista << " eh uma Engenheiro de Software que desenvolveu a IA Basilisco e o novo chip, no qual acabou saindo do controle." << endl << endl;
        cout << " Assim, criou se uma nova era, dominada por uma entidade. A unica maneira de derrotar a IA, eh reescrevendo os seus " << endl;
        cout << " codigos matrizes, que estao inseridos dentro do chip." << endl << endl;
        cout << " A "<< protagonista << " vai em direcao ao nucleo onde esta armazenado." << endl << endl;

        cout <<"                              \\                           / "<< endl;
        cout <<"                               \\                         / "<< endl;
        cout <<"                                \\                       / "<< endl;
        cout <<"                                 ]                     [    ,'| "<< endl;
        cout <<"                                 ]                     [   /  | "<< endl;
        cout <<"                                 ]___               ___[ ,'   | "<< endl;
        cout <<"                                 ]  ]\\             /[  [ |:   | "<< endl;
        cout <<"                                 ]  ] \\           / [  [ |:   | "<< endl;
        cout <<"                                 ]  ]  ]         [  [  [ |:   | "<< endl;
        cout <<"                                 ]  ]  ]__     __[  [  [ |:   | "<< endl;
        cout <<"                                 ]  ]  ] ]\\ _ /[ [  [  [ |:   | "<< endl;
        cout <<"                                 ]  ]  ] ] (o) [ [  [  [ :====' "<< endl;
        cout <<"                                 ]  ]  ]_].nHn.[_[  [  ["<< endl;
        cout <<"                                 ]  ]  ]  HHHHH. [  [  [ "<< endl;
        cout <<"                                 ]  ] /   `HH(\"N  \\ [  [ "<< endl;
        cout <<"                                 ]__]/     HHH  \"  \\[__[ "<< endl;
        cout <<"                                 ]         NNN         [ "<< endl;
        cout <<"                                 ]         N/\"         [ "<< endl;
        cout <<"                                 ]         N H         [ "<< endl;
        cout <<"                                /          N            \\ "<< endl;
        cout <<"                               /           q,            \\ "<< endl;
        cout <<"                              /                           \\ "<< endl;

        cout <<"\n\n\n\n         88888888888888888888888888888888888888888888888888888888888888888888888 "<< endl;
        cout <<"         88.._|      | `-.  | `.  -_-_ _-_  _-  _- -_ -  .'|   |.'|     |  _..88 "<< endl;
        cout <<"         88   `-.._  |    |`!  |`.  -_ -__ -_ _- _-_-  .'  |.;'   |   _.!-'|  88 "<< endl;
        cout <<"         88      | `-!._  |  `;!  ;. _______________ ,'| .-' |   _!.i'     |  88 "<< endl;
        cout <<"         88..__  |     |`-!._ | `.| |_______________||.\"'|  _!.;'   |     _|..88 "<< endl;
        cout <<"         88   |``\"..__ |    |`\";.| i|_|MMMMMMMMMMM|_|'| _!-|   |   _|..-|'    88 "<< endl;
        cout <<"         88   |      |``--..|_ | `;!|l|MMoMMMMoMMM|1|.'j   |_..!-'|     |     88 "<< endl;
        cout <<"         88   |      |    |   |`-,!_|_|MMMMP'YMMMM|_||.!-;'  |    |     |     88 "<< endl;
        cout <<"         88___|______|____!.,.!,.!,!|d|MMMo * loMM|p|,!,.!.,.!..__|_____|_____88 "<< endl;
        cout <<"         88      |     |    |  |  | |_|MMMMb,dMMMM|_|| |   |   |    |      |  88 "<< endl;
        cout <<"         88      |     |    |..!-;'i|r|MPYMoMMMMoM|r| |`-..|   |    |      |  88 "<< endl;
        cout <<"         88      |    _!.-j'  | _!,\"|_|M<>MMMMoMMM|_||!._|  `i-!.._ |      |  88 "<< endl;
        cout <<"         88     _!.-'|    | _.\"|  !;|1|MbdMMoMMMMM|l|`.| `-._|    |``-.._  |  88 "<< endl;
        cout <<"         88..-i'     |  _.''|  !-| !|_|MMMoMMMMoMM|_|.|`-. | ``._ |     |``\"..88 "<< endl;
        cout <<"         88   |      |.|    |.|  !| |u|MoMMMMoMMMM|n||`. |`!   | `\".    |     88 "<< endl;
        cout <<"         88   |  _.-'  |  .'  |.' |/|_|MMMMoMMMMoM|_|! |`!  `,.|    |-._|     88 "<< endl;
        cout <<"         88  _!\"'|     !.'|  .'| .'|[@]MMMMMMMMMMM[@] \\|  `. | `._  |   `-._  88 "<< endl;
        cout <<"         88-'    |   .'   |.|  |/| /                 \\|`.  |`!    |.|      |`-88 "<< endl;
        cout <<"         88      |_.'|   .' | .' |/                   \\  \\ |  `.  | `._-Lee|  88 "<< endl;
        cout <<"         88     .'   | .'   |/|  /                     \\ |`!   |`.|    `.  |  88 "<< endl;
        cout <<"         88  _.'     !'|   .' | /                       \\|  `  |  `.    |`.|  88 "<< endl;
        cout <<"         88888888888888888888888888888888888888888888888888888888888888888888888 "<< endl << endl << endl;

        system ("pause");
        system("CLS");

        cout << "\n Assim, a I.A descobre, sem nenhum esforco, que a " << protagonista << " esta agindo contra a paz do mundo, e se inicia uma batalha " << endl;
        cout << " entre a Criadora e o Basilisco." << endl << endl;

        cout << " Logo no inicio do combate, ocorre um conflito interno na " << protagonista << ", no qual sua razao e emocao entram em guerra " << endl;
        cout << " dentro de seu subcosciente." << endl << endl;
        cout << " \"Alias, vale a pena batalhar contra sua propria criacao, na qual, so quer o bem para o mundo? Talvez suas acoes " << endl;
        cout << " sejam um mal necessario...\"" << endl << endl;
        cout << " Pensa, " << protagonista << ", antes de invadir completamente o sistema de Basilisco." << endl << endl;
        cout << " A seguir, acontece a escolha mais importante que o " << protagonista << " deve tomar:" << endl;
        cout << " (a) Batalhar contra Basilisco e salvar a humanidade." << endl;
        cout << " (b) Permitir que Basilisco faca seu trabalho." << endl;
        cout << " ";
        cin >> opcao2;

        system ("pause");
        system("CLS");

        switch(opcao2) {
        case 'a': case 'A':
            cout << " \n Escolhendo a opcao mais nobre, " << protagonista << " inicia seu confroto computacional direto contra Basilisco." << endl;
            cout << " \n Sabendo os caminhos necessarios para se infiltrar diretamente dentro do seu codigo matriz, a " << protagonista << endl;
            cout << " inicia seus primeiros passos invadindo o sistema. Porem, Basilisco esta atento a qualquer movimento de seu " << endl;
            cout << " adversario, e aprimorou seu sistema defensivo para qualquer situacao de revolta." << endl;
            cout << " \n Ao todo, sao 5 nucleos anti-maware com tecnologia de ponta, quase impossiveis de se passar pela primeira barreira." << endl;
            cout << " \n Para combater, eh necessario responder corretamente as icognitas equacionais que o programa proporcionar." << endl << endl << endl;

            system ("pause");
            system("CLS");

            cout <<"                          _                      ___                      _" << endl;
            cout <<"                        dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
            cout <<"                      dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
            cout <<"                      "<< endl;
            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
            cout <<"                      `                          OOOOO'"<< endl;
            cout << "\n\n      Apos essa batalhar, irei te eliminar da forma mais digna possivel. Seras reconhecido como a unica " << endl;
            cout << " mulher dessa terra que me enfrentou olho por olho. Estaras guardada eternamente em minha memoria RAM. Agora..." << endl << endl;
            cout << "                                          VENCA ME SE FOR CAPAZ!" << endl << endl;

            system ("pause");
            system("CLS");

            cout <<"                          _                      ___                      _" << endl;
            cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
            cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
            cout <<"                      "<< endl;
            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
            cout <<"                      `                          OOOOO'"<< endl;

            cout << "\n\n\n O conjunto solucao que torna a equacao x2 + 5x - 14 = 0 verdadeira eh:" << endl;
            cout << " a) S={1,7}" << endl;
            cout << " b) S={3,4}" << endl;
            cout << " c) S={2,-7}" << endl;
            cout << " d) S={4,5}" << endl;
            cout << " e) S={8,3}" << endl;
            cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
            cin >> resposta1;

            system ("pause");
            system("CLS");

            switch(resposta1) {
            case 'c': case 'C':

                vida = vida - 20;
                cout <<"                          _                      ___                      _" << endl;
                cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                cout <<"       "<<vida<<"             dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                cout <<"                      "<< endl;
                cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                cout <<"                      `                          OOOOO'"<< endl;

                cout << "\n\n               BELA RESPOSTA! Mas vamos ver como voce ira se sair na questao a seguir" << endl;

                cout << "\n\n Quais sao as raizes reais da equacao x2 - x = 6?" << endl;
                cout << " a) Apenas 3" << endl;
                cout << " b) 25 e 3" << endl;
                cout << " c) 25 e -2 " << endl;
                cout << " d) 3 e -2" << endl;
                cout << " e) Apenas -2" << endl;
                cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                cin >> resposta2;

                system ("pause");
                system("CLS");

                switch(resposta2) {
                case 'd': case 'D':

                    vida = vida - 20;
                    cout <<"                          _                      ___                      _" << endl;
                    cout <<"  Life Basilisco:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                    cout <<"       "<<vida<<"             dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                    cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                    cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                    cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                    cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                    cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                    cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                    cout <<"                      "<< endl;
                    cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                    cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                    cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                    cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                    cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                    cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                    cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                    cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                    cout <<"                      `                          OOOOO'"<< endl;

                    cout << "\n\n                    N-N4o eh poss1vel, um ser hum4an0 comum JAMAIS acert4ri1a" << endl;
                    cout << "                                        TENTE A SORTE AGORA" << endl;
                    cout << " Determine x2 - 3x - 4 = 0" << endl;
                    cout << " a) S{7,8}" << endl;
                    cout << " b) S{3,4}" << endl;
                    cout << " c) S{4,1}" << endl;
                    cout << " d) S{5,1}" << endl;
                    cout << " e) S{4,-1}" << endl;
                    cout << "Resposta:                                                                                               Life Player: "<< vida1 << endl;
                    cin >> resposta3;

                    system ("pause");
                    system("CLS");

                    switch(resposta3) {
                    case 'e': case 'E':

                        cout << "Hat-Trick" << endl;

                        system ("pause");
                        system("CLS");

                        vida = vida - 40;
                        cout <<"                          _                      ___                      _" << endl;
                        cout <<"  Life Basilisco:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                        cout <<"       "<<vida<<"             dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                        cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                        cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                        cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                        cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                        cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                        cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                        cout <<"                      "<< endl;
                        cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                        cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                        cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                        cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                        cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                        cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                        cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                        cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                        cout <<"                      `                          OOOOO'"<< endl;

                        cout << "\n\n                                   Q-Qu3m e-eh-ehE VOc3?" << endl;
                        cout << "                           E0 S00 A PERF33ICAO, V0C3 N40 P0D3 ME-M D3-D%¨&T3rr" << endl;

                        cout << " Resolva a equacao 4x - 13 + 2 = 5.5 - 3 + 7" << endl;
                        cout << " a) x = 4" << endl;
                        cout << " b) x = 10" << endl;
                        cout << " c) x = -10" << endl;
                        cout << " d) x = 2/9" << endl;
                        cout << " e) x = 7" << endl;
                        cout << "Resposta:                                                                                               Life Player: "<< vida1 << endl;
                        cin >> resposta4;

                        system ("pause");
                        system("CLS");

                        switch(resposta4) {
                        case 'b': case 'B':

                            vida = vida - 20;
                            cout <<"                          _                      ___                      _" << endl;
                            cout <<"  "<<vida<<"                    MMb.              .adOOO OOOba.              ,dMMMb"<< endl;
                            cout <<"                      dP'  YMMb            dOOO OOOOOOOOOOb            aMMP  `Yb"<< endl;
                            cout <<"                      V      ''Mb          OOO OOOOOOb          dM''      V"<< endl;
                            cout <<"                               `M .       dOO OO OOOOOOOOOOOOb       ,dM'"<< endl;
                            cout <<"                                 YMb._   |OOOOOOOO OOOOOOOOO|   _,dM '"<< endl;
                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                            cout <<"                         ,dMM   Mb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                            cout <<"                      "<< endl;
                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                            cout <<"                          ,aa .     `YMMb `OOOb.,dOO OO'          _,adMYYMb."<< endl;
                            cout <<"                       ,MP'   `YM a._      OOOOOOOOOOOOOOOOO       _,adMM '   `YM."<< endl;
                            cout <<"                       MP'        YMMM a._ YOOOOPVVVVVYOO O'/MMMMP           d P"<< endl;
                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                            cout <<"                      `                          OOOOO'"<< endl;

                            cout << "\n\n                                   NN00NA+{`MNN400NA00000-=-4%!!" << endl << endl;

                            system ("pause");
                            system("CLS");

                            cout << "                Parabens "<< protagonista << "! O mundo eh eternamente grato pela sua bravura e heroismo! Hoje, o mundo " << endl;
                            cout << "                                celebra sua vitoria contra o Basilisco!" << endl << endl << endl;

                            cout <<"                                                         .''." << endl;
                            cout <<"                               .''.             *''*    :_\\/_:     . " << endl;
                            cout <<"                              :_\\/_:   .    .:.*_\\/_*   : /\\ :  .'.:.'." << endl;
                            cout <<"                          .''.: /\\ : _\\(/_  ':'* /\\ *  : '..'.  -=:o:=-" << endl;
                            cout <<"                         :_\\/_:'.:::. /)\\*''*  .|.* '.\\'/.'_\\(/_'.':'.'" << endl;
                            cout <<"                         : /\\ : :::::  '*_\\/_* | |  -= o =- /)\\    '  *" << endl;
                            cout <<"                          '..'  ':::'   * /\\ * |'|  .'/.\\'.  '._____" << endl;
                            cout <<"                              *        __*..* |  |     :      |.   |' .---\"|" << endl;
                            cout <<"                               _*   .-'   '-. |  |     .--'|  ||   | _|    |" << endl;
                            cout <<"                            .-'|  _.|  |    ||   '-__  |   |  |    ||      |" << endl;
                            cout <<"                            |' | |.    |    ||       | |   |  |    ||      |" << endl;
                            cout <<"                         ___|  '-'     '    \"\"       '-'   '-.'    '`      |____" << endl;
                            cout <<"                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\"" << endl << endl;

                            system ("pause");
                            system("CLS");

                            cout << "               Voce sera lembrado por toda a historia, derrotasse a entidade mais forte de todos os tempos!" << endl;
                            cout << "                                                O mundo agradece a sua coragem." << endl << endl << endl;

                            cout <<"                                                               . " << endl;
                            cout <<"                                      . .                     -:-             .  .  . " << endl;
                            cout <<"                                    .'.:,'.        .  .  .     ' .           . \\ | / . " << endl;
                            cout <<"                                    .'.;.`.       ._. ! ._.       \\          .__\\:/__. " << endl;
                            cout <<"                                     `,:.'         ._\\!/_.                     .';`.      . ' . " << endl;
                            cout <<"                                     ,'             . ! .        ,.,      ..======..       .:. " << endl;
                            cout <<"                                    ,                 .         ._!_.     ||::: : | .        ', " << endl;
                            cout <<"                             .====.,                  .           ;  .~.===: : : :|   ..===. " << endl;
                            cout <<"                             |.::'||      .=====.,    ..=======.~,   |\"|: :|::::::|   ||:::|=====| " << endl;
                            cout <<"                          ___| :::|!__.,  |:::::|!_,   |: :: ::|\"|l_l|\"|:: |:;;:::|___!| ::|: : :| " << endl;
                            cout <<"                         |: :|::: |:: |!__|; :: |: |===::: :: :|\"||_||\"| : |: :: :|: : |:: |:::::| " << endl;
                            cout <<"                         |:::| _::|: :|:::|:===:|::|:::|:===F=:|\"!/|\\!\"|::F|:====:|::_:|: :|::__:| " << endl;
                            cout <<"                         !_[]![_]_!_[]![]_!_[__]![]![_]![_][I_]!//_:_\\\\![]I![_][_]!_[_]![]_!_[__]! " << endl;
                            cout <<"                         -----------------------------------\"---''''```---\"----------------------- " << endl;
                            cout <<"                         _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |= _ _:_ _ =| _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
                            cout <<"                                                             |=    :    =|                         " << endl;
                            cout <<"                         ____________________________________L___________J_________________________ " << endl;
                            cout <<"                         -------------------------------------------------------------------------- " << endl;

                            cout <<"\n\n\n                                             " << protagonista << ", Parabens pela vitoria!" << endl;
                            cout <<"\n                                                      FIM DE JOGO" << endl << endl << endl;


                            break;
                        case 'a': case 'A':
                        case 'c': case 'C':
                        case 'd': case 'D':
                        case 'e': case 'E':

                            vida1 = vida1 - 20;
                            cout <<"                          _                      ___                      _" << endl;
                            cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                            cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                            cout <<"                      "<< endl;
                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                            cout <<"                      `                          OOOOO'"<< endl;

                            cout << "\n\n                      Vo00c3 EH8 MU11T0 F#RT3 M4S N0NC@ ME_- V#%NC3R++!" << endl;

                            cout << "\n\n\n Calcule 3x2 + 2x - 8 = 0" << endl;
                            cout << " a) S={2,4}" << endl;
                            cout << " b) S={4/3,-2}" << endl;
                            cout << " c) S={3,-4}" << endl;
                            cout << " d) S={2/4,6}" << endl;
                            cout << " e) S={-6,8}" << endl;
                            cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                            cin >> resposta14;

                            system ("pause");
                            system("CLS");
                            switch(resposta14) {
                            case 'b': case 'B':
                                            vida = vida - 20;
                                            cout <<"                          _                      ___                      _" << endl;
                                            cout <<"  "<<vida<<"                    MMb.              .adOOO OOOba.              ,dMMMb"<< endl;
                                            cout <<"                      dP'  YMMb            dOOO OOOOOOOOOOb            aMMP  `Yb"<< endl;
                                            cout <<"                      V      ''Mb          OOO OOOOOOb          dM''      V"<< endl;
                                            cout <<"                               `M .       dOO OO OOOOOOOOOOOOb       ,dM'"<< endl;
                                            cout <<"                                 YMb._   |OOOOOOOO OOOOOOOOO|   _,dM '"<< endl;
                                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                            cout <<"                         ,dMM   Mb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                            cout <<"                      "<< endl;
                                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                            cout <<"                          ,aa .     `YMMb `OOOb.,dOO OO'          _,adMYYMb."<< endl;
                                            cout <<"                       ,MP'   `YM a._      OOOOOOOOOOOOOOOOO       _,adMM '   `YM."<< endl;
                                            cout <<"                       MP'        YMMM a._ YOOOOPVVVVVYOO O'/MMMMP           d P"<< endl;
                                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                            cout <<"                      `                          OOOOO'"<< endl;

                                            cout << "\n\n                                   NN00NA+{`MNN400NA00000-=-4%!!" << endl << endl;

                                            system ("pause");
                                            system("CLS");

                                            cout << "                Parabens "<< protagonista << "! O mundo eh eternamente grato pela sua bravura e heroismo! Hoje, o mundo " << endl;
                                            cout << "                                celebra sua vitoria contra o Basilisco!" << endl << endl << endl;

                                            cout <<"                                                         .''." << endl;
                                            cout <<"                               .''.             *''*    :_\\/_:     . " << endl;
                                            cout <<"                              :_\\/_:   .    .:.*_\\/_*   : /\\ :  .'.:.'." << endl;
                                            cout <<"                          .''.: /\\ : _\\(/_  ':'* /\\ *  : '..'.  -=:o:=-" << endl;
                                            cout <<"                         :_\\/_:'.:::. /)\\*''*  .|.* '.\\'/.'_\\(/_'.':'.'" << endl;
                                            cout <<"                         : /\\ : :::::  '*_\\/_* | |  -= o =- /)\\    '  *" << endl;
                                            cout <<"                          '..'  ':::'   * /\\ * |'|  .'/.\\'.  '._____" << endl;
                                            cout <<"                              *        __*..* |  |     :      |.   |' .---\"|" << endl;
                                            cout <<"                               _*   .-'   '-. |  |     .--'|  ||   | _|    |" << endl;
                                            cout <<"                            .-'|  _.|  |    ||   '-__  |   |  |    ||      |" << endl;
                                            cout <<"                            |' | |.    |    ||       | |   |  |    ||      |" << endl;
                                            cout <<"                         ___|  '-'     '    \"\"       '-'   '-.'    '`      |____" << endl;
                                            cout <<"                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\"" << endl << endl;

                                            system ("pause");
                                            system("CLS");

                                            cout << "               Voce sera lembrado por toda a historia, derrotasse a entidade mais forte de todos os tempos!" << endl;
                                            cout << "                                                O mundo agradece a sua coragem." << endl << endl << endl;

                                            cout <<"                                                               . " << endl;
                                            cout <<"                                      . .                     -:-             .  .  . " << endl;
                                            cout <<"                                    .'.:,'.        .  .  .     ' .           . \\ | / . " << endl;
                                            cout <<"                                    .'.;.`.       ._. ! ._.       \\          .__\\:/__. " << endl;
                                            cout <<"                                     `,:.'         ._\\!/_.                     .';`.      . ' . " << endl;
                                            cout <<"                                     ,'             . ! .        ,.,      ..======..       .:. " << endl;
                                            cout <<"                                    ,                 .         ._!_.     ||::: : | .        ', " << endl;
                                            cout <<"                             .====.,                  .           ;  .~.===: : : :|   ..===. " << endl;
                                            cout <<"                             |.::'||      .=====.,    ..=======.~,   |\"|: :|::::::|   ||:::|=====| " << endl;
                                            cout <<"                          ___| :::|!__.,  |:::::|!_,   |: :: ::|\"|l_l|\"|:: |:;;:::|___!| ::|: : :| " << endl;
                                            cout <<"                         |: :|::: |:: |!__|; :: |: |===::: :: :|\"||_||\"| : |: :: :|: : |:: |:::::| " << endl;
                                            cout <<"                         |:::| _::|: :|:::|:===:|::|:::|:===F=:|\"!/|\\!\"|::F|:====:|::_:|: :|::__:| " << endl;
                                            cout <<"                         !_[]![_]_!_[]![]_!_[__]![]![_]![_][I_]!//_:_\\\\![]I![_][_]!_[_]![]_!_[__]! " << endl;
                                            cout <<"                         -----------------------------------\"---''''```---\"----------------------- " << endl;
                                            cout <<"                         _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |= _ _:_ _ =| _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
                                            cout <<"                                                             |=    :    =|                         " << endl;
                                            cout <<"                         ____________________________________L___________J_________________________ " << endl;
                                            cout <<"                         -------------------------------------------------------------------------- " << endl;

                                            cout <<"\n\n\n                                             " << protagonista << ", Parabens pela vitoria!" << endl;
                                            cout <<"\n                                                      FIM DE JOGO" << endl << endl << endl;


                                            break;
                                        case 'a': case 'A':
                                        case 'c': case 'C':
                                        case 'd': case 'D':
                                        case 'e': case 'E':

                                            system("color 04");
                                            vida1 = vida1 - 20;
                                            cout <<"                          _                      ___                      _" << endl;
                                            cout <<"  Life Basilisco:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                                            cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                                            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                                            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                                            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                            cout <<"                      "<< endl;
                                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                                            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                                            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                                            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                                            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                            cout <<"                      `                          OOOOO'"<< endl;

                                            cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                                            cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                                            cout << "                                                                                                        Life Player: "<< vida1 << endl;

                                            system ("pause");
                                            system("CLS");

                                            cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                                            cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                                            cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                                            cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                                            cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                                            cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                                            cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                                            cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                                            cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                                            cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                                            cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                                            cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                                            cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                                            cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                                            cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                                            cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                                            cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                                            cout <<"              ==| |~ /     .     \\"<< endl;
                                            cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                                            system ("pause");
                                            system("CLS");

                                            cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                                            cout << " Basilisco." << endl << endl;
                                            cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                                            cout << " sobreviver." << endl << endl;

                                            cout <<"                                      ________            _______"<< endl;
                                            cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                                            cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                                            cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                                            cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                                            cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                                            cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                                            cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                                            cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                                            cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                                            cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                                            cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                                            cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                                            cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                                            cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                                            cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                                            cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                                            cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                                            cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                                            cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                                            cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                                            cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                                            cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                                            cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                                            cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                                            cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                                            cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                                            cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                                            cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                                            cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                                            cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                                            cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                                            cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                                            cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                                            cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                                            cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                                            cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                                            cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                                            cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                                            cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                                            cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                                            cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                                            cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                                            cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                                            cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                                            cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                                            cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                                            cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                                            cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                                            cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;

                                            break;
                                        default:
                                            cout << " Opcao invalida" << endl;
                                       }

                            break;
                        default:
                            cout << " Opcao invalida" << endl;
                        }

                        break;
                    case 'a': case 'A':
                    case 'b': case 'B':
                    case 'c': case 'C':
                    case 'd': case 'D':

                        vida1 = vida1 - 20;
                        cout <<"                          _                      ___                      _" << endl;
                        cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                        cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                        cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                        cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                        cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                        cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                        cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                        cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                        cout <<"                      "<< endl;
                        cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                        cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                        cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                        cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                        cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                        cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                        cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                        cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                        cout <<"                      `                          OOOOO'"<< endl;

                        cout << "\n\n                 Vo00c3 EH8 MU11T0 F#RT3 M4S N0NC@ ME_- V#%NC3R++!" << endl;

                        cout << "\n\n\n Calcule 3x2 + 2x - 8 = 0" << endl;
                        cout << " a) S={2,4}" << endl;
                        cout << " b) S={4/3,-2}" << endl;
                        cout << " c) S={3,-4}" << endl;
                        cout << " d) S={2/4,6}" << endl;
                        cout << " e) S={-6,8}" << endl;
                        cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                        cin >> resposta14;

                        system ("pause");
                        system("CLS");

                        switch(resposta14) {
                        case 'b': case 'B':

                            vida = vida - 20;
                            cout <<"                          _                      ___                      _" << endl;
                            cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                            cout <<"       "<<vida<<"             dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                            cout <<"                      "<< endl;
                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                            cout <<"                      `                          OOOOO'"<< endl;

                            cout << "\n\n                                   Q-Qu3m e-eh-ehE VOc3?" << endl;
                            cout << "                           E0 S00 A PERF33ICAO, V0C3 N40 P0D3 ME-M D3-D%¨&T3rr" << endl;

                            cout << " Resolva a equacao 4x - 13 + 2 = 5.5 - 3 + 7" << endl;
                            cout << " a) x = 4" << endl;
                            cout << " b) x = 7" << endl;
                            cout << " c) x = -10" << endl;
                            cout << " d) x = 2/9" << endl;
                            cout << " e) x = 10" << endl;
                            cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                            cin >> resposta20;

                            system ("pause");
                            system("CLS");

                            switch(resposta20) {
                            case 'e': case 'E':

                                vida = vida - 20;
                                cout <<"                          _                      ___                      _" << endl;
                                cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                                cout <<"       "<<vida<<"             dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                                cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                                cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                                cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                                cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                cout <<"                      "<< endl;
                                cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                                cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                                cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                                cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                                cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                                cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                cout <<"                      `                          OOOOO'"<< endl;

                                cout << "\n\n                                   OO-0& QU3+?" << endl;
                                cout << "                           E0 N-NH& P0SS2 P3RD7R D-D=S@@ M*>>E1R#" << endl;

                                cout << " Resolva a equacao (4 - x)(3 + x) = 0" << endl;
                                cout << " a) x = x" << endl;
                                cout << " b) x = 6 e 8" << endl;
                                cout << " c) x = 3 e 4" << endl;
                                cout << " d) x = 7 e 5" << endl;
                                cout << " e) x = -3 e 4" << endl;
                                cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                                cin >> resposta9;

                                system ("pause");
                                system("CLS");

                                switch(resposta9) {
                                case 'e': case 'E':
                                                vida = vida - 20;
                                                cout <<"                          _                      ___                      _" << endl;
                                                cout <<"  "<<vida<<"                    MMb.              .adOOO OOOba.              ,dMMMb"<< endl;
                                                cout <<"                      dP'  YMMb            dOOO OOOOOOOOOOb            aMMP  `Yb"<< endl;
                                                cout <<"                      V      ''Mb          OOO OOOOOOb          dM''      V"<< endl;
                                                cout <<"                               `M .       dOO OO OOOOOOOOOOOOb       ,dM'"<< endl;
                                                cout <<"                                 YMb._   |OOOOOOOO OOOOOOOOO|   _,dM '"<< endl;
                                                cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                                cout <<"                         ,dMM   Mb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                                cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                                cout <<"                      "<< endl;
                                                cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                                cout <<"                          ,aa .     `YMMb `OOOb.,dOO OO'          _,adMYYMb."<< endl;
                                                cout <<"                       ,MP'   `YM a._      OOOOOOOOOOOOOOOOO       _,adMM '   `YM."<< endl;
                                                cout <<"                       MP'        YMMM a._ YOOOOPVVVVVYOO O'/MMMMP           d P"<< endl;
                                                cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                                cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                                cout <<"                      `                          OOOOO'"<< endl;

                                                cout << "\n\n                                   NN00NA+{`MNN400NA00000-=-4%!!" << endl << endl;

                                                system ("pause");
                                                system("CLS");

                                                cout << "                Parabens "<< protagonista << "! O mundo eh eternamente grato pela sua bravura e heroismo! Hoje, o mundo " << endl;
                                                cout << "                                celebra sua vitoria contra o Basilisco!" << endl << endl << endl;

                                                cout <<"                                                         .''." << endl;
                                                cout <<"                               .''.             *''*    :_\\/_:     . " << endl;
                                                cout <<"                              :_\\/_:   .    .:.*_\\/_*   : /\\ :  .'.:.'." << endl;
                                                cout <<"                          .''.: /\\ : _\\(/_  ':'* /\\ *  : '..'.  -=:o:=-" << endl;
                                                cout <<"                         :_\\/_:'.:::. /)\\*''*  .|.* '.\\'/.'_\\(/_'.':'.'" << endl;
                                                cout <<"                         : /\\ : :::::  '*_\\/_* | |  -= o =- /)\\    '  *" << endl;
                                                cout <<"                          '..'  ':::'   * /\\ * |'|  .'/.\\'.  '._____" << endl;
                                                cout <<"                              *        __*..* |  |     :      |.   |' .---\"|" << endl;
                                                cout <<"                               _*   .-'   '-. |  |     .--'|  ||   | _|    |" << endl;
                                                cout <<"                            .-'|  _.|  |    ||   '-__  |   |  |    ||      |" << endl;
                                                cout <<"                            |' | |.    |    ||       | |   |  |    ||      |" << endl;
                                                cout <<"                         ___|  '-'     '    \"\"       '-'   '-.'    '`      |____" << endl;
                                                cout <<"                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\"" << endl << endl;

                                                system ("pause");
                                                system("CLS");

                                                cout << "               Voce sera lembrado por toda a historia, derrotasse a entidade mais forte de todos os tempos!" << endl;
                                                cout << "                                                O mundo agradece a sua coragem." << endl << endl << endl;

                                                cout <<"                                                               . " << endl;
                                                cout <<"                                      . .                     -:-             .  .  . " << endl;
                                                cout <<"                                    .'.:,'.        .  .  .     ' .           . \\ | / . " << endl;
                                                cout <<"                                    .'.;.`.       ._. ! ._.       \\          .__\\:/__. " << endl;
                                                cout <<"                                     `,:.'         ._\\!/_.                     .';`.      . ' . " << endl;
                                                cout <<"                                     ,'             . ! .        ,.,      ..======..       .:. " << endl;
                                                cout <<"                                    ,                 .         ._!_.     ||::: : | .        ', " << endl;
                                                cout <<"                             .====.,                  .           ;  .~.===: : : :|   ..===. " << endl;
                                                cout <<"                             |.::'||      .=====.,    ..=======.~,   |\"|: :|::::::|   ||:::|=====| " << endl;
                                                cout <<"                          ___| :::|!__.,  |:::::|!_,   |: :: ::|\"|l_l|\"|:: |:;;:::|___!| ::|: : :| " << endl;
                                                cout <<"                         |: :|::: |:: |!__|; :: |: |===::: :: :|\"||_||\"| : |: :: :|: : |:: |:::::| " << endl;
                                                cout <<"                         |:::| _::|: :|:::|:===:|::|:::|:===F=:|\"!/|\\!\"|::F|:====:|::_:|: :|::__:| " << endl;
                                                cout <<"                         !_[]![_]_!_[]![]_!_[__]![]![_]![_][I_]!//_:_\\\\![]I![_][_]!_[_]![]_!_[__]! " << endl;
                                                cout <<"                         -----------------------------------\"---''''```---\"----------------------- " << endl;
                                                cout <<"                         _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |= _ _:_ _ =| _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
                                                cout <<"                                                             |=    :    =|                         " << endl;
                                                cout <<"                         ____________________________________L___________J_________________________ " << endl;
                                                cout <<"                         -------------------------------------------------------------------------- " << endl;

                                                cout <<"\n\n\n                                             " << protagonista << ", Parabens pela vitoria!" << endl;
                                                cout <<"\n                                                      FIM DE JOGO" << endl << endl << endl;


                                break;
                            case 'a': case 'A':
                            case 'b': case 'B':
                            case 'c': case 'C':
                            case 'd': case 'D':

                                    system("color 04");
                                    vida1 = vida1 - 20;
                                    cout <<"                          _                      ___                      _" << endl;
                                    cout <<"  Life Basilisco:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                                    cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                                    cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                                    cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                                    cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                                    cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                    cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                    cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                    cout <<"                      "<< endl;
                                    cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                    cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                                    cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                                    cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                                    cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                                    cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                                    cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                    cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                    cout <<"                      `                          OOOOO'"<< endl;

                                    cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                                    cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                                    cout << "                                                                                                        Life Player: "<< vida1 << endl;

                                    system ("pause");
                                    system("CLS");

                                    cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                                    cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                                    cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                                    cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                                    cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                                    cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                                    cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                                    cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                                    cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                                    cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                                    cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                                    cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                                    cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                                    cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                                    cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                                    cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                                    cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                                    cout <<"              ==| |~ /     .     \\"<< endl;
                                    cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                                    system ("pause");
                                    system("CLS");

                                    cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                                    cout << " Basilisco." << endl << endl;
                                    cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                                    cout << " sobreviver." << endl << endl;

                                    cout <<"                                      ________            _______"<< endl;
                                    cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                                    cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                                    cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                                    cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                                    cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                                    cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                                    cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                                    cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                                    cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                                    cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                                    cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                                    cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                                    cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                                    cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                                    cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                                    cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                                    cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                                    cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                                    cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                                    cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                                    cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                                    cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                                    cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                                    cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                                    cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                                    cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                                    cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                                    cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                                    cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                                    cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                                    cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                                    cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                                    cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                                    cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                                    cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                                    cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                                    cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                                    cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                                    cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                                    cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                                    cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                                    cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                                    cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                                    cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                                    cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                                    cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                                    cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                                    cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                                    cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;


                                break;
                            default:
                                cout << " Opcao invalida" << endl;

                            }


                                            break;
                                        case 'a': case 'A':
                                        case 'b': case 'B':
                                        case 'c': case 'C':
                                        case 'd': case 'D':

                                            system("color 04");
                                            vida1 = vida1 - 20;
                                            cout <<"                          _                      ___                      _" << endl;
                                            cout <<"  Life Basilisco:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                                            cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                                            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                                            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                                            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                            cout <<"                      "<< endl;
                                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                                            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                                            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                                            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                                            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                            cout <<"                      `                          OOOOO'"<< endl;

                                            cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                                            cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                                            cout << "                                                                                                        Life Player: "<< vida1 << endl;

                                            system ("pause");
                                            system("CLS");

                                            cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                                            cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                                            cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                                            cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                                            cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                                            cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                                            cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                                            cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                                            cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                                            cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                                            cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                                            cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                                            cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                                            cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                                            cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                                            cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                                            cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                                            cout <<"              ==| |~ /     .     \\"<< endl;
                                            cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                                            system ("pause");
                                            system("CLS");

                                            cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                                            cout << " Basilisco." << endl << endl;
                                            cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                                            cout << " sobreviver." << endl << endl;

                                            cout <<"                                      ________            _______"<< endl;
                                            cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                                            cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                                            cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                                            cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                                            cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                                            cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                                            cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                                            cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                                            cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                                            cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                                            cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                                            cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                                            cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                                            cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                                            cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                                            cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                                            cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                                            cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                                            cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                                            cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                                            cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                                            cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                                            cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                                            cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                                            cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                                            cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                                            cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                                            cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                                            cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                                            cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                                            cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                                            cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                                            cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                                            cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                                            cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                                            cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                                            cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                                            cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                                            cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                                            cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                                            cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                                            cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                                            cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                                            cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                                            cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                                            cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                                            cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                                            cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                                            cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;

                                            break;
                                        default:
                                            cout << " Opcao invalida" << endl;
                                       }
                            break;
                        case 'a': case 'A':
                        case 'c': case 'C':
                        case 'd': case 'D':
                        case 'e': case 'E':

                            system("color 04");
                            vida1 = vida1 - 20;
                            cout <<"                          _                      ___                      _" << endl;
                            cout <<"  Life Basilisco:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                            cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                            cout <<"                      "<< endl;
                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                            cout <<"                      `                          OOOOO'"<< endl;

                            cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                            cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                            cout << "                                                                                                        Life Player: "<< vida1 << endl;

                            system ("pause");
                            system("CLS");

                            cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                            cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                            cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                            cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                            cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                            cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                            cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                            cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                            cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                            cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                            cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                            cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                            cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                            cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                            cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                            cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                            cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                            cout <<"              ==| |~ /     .     \\"<< endl;
                            cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                            system ("pause");
                            system("CLS");

                            cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                            cout << " Basilisco." << endl << endl;
                            cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                            cout << " sobreviver." << endl << endl;

                            cout <<"                                      ________            _______"<< endl;
                            cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                            cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                            cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                            cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                            cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                            cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                            cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                            cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                            cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                            cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                            cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                            cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                            cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                            cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                            cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                            cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                            cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                            cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                            cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                            cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                            cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                            cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                            cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                            cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                            cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                            cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                            cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                            cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                            cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                            cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                            cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                            cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                            cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                            cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                            cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                            cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                            cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                            cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                            cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                            cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                            cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                            cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                            cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                            cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                            cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                            cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                            cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                            cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                            cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;


                            break;
                        default:
                            cout << "Opcao invalida" << endl;
                        }

                        break;
                    default:
                        cout << " Opcao invalida" << endl;
                    }

                    break;
                case 'a': case 'A':
                case 'b': case 'B':
                case 'c': case 'C':
                case 'e': case 'E':

                    vida1 = vida1 - 20;
                    cout <<"                          _                      ___                      _" << endl;
                    cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                    cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                    cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                    cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                    cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                    cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                    cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                    cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                    cout <<"                      "<< endl;
                    cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                    cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                    cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                    cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                    cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                    cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                    cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                    cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                    cout <<"                      `                          OOOOO'"<< endl;

                    cout << "\n\n               Como imaginavel! Um mero mortal nao consegue realizar tais operacoes!" << endl;

                    cout << "\n\n\n Determine os valores de x que satisfaçam a equação (4 - x)(3 + x) = 0" << endl;
                    cout << " a) S={8,2}" << endl;
                    cout << " b) S={2,7}" << endl;
                    cout << " c) S={3,-4}" << endl;
                    cout << " d) S={-3,4}" << endl;
                    cout << " e) S={-6,8}" << endl;
                    cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                    cin >> resposta10;

                    system ("pause");
                    system("CLS");

                        switch(resposta10) {
                        case 'd': case 'D':

                            vida = vida - 20;
                            cout <<"                          _                      ___                      _" << endl;
                            cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                            cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                            cout <<"                      "<< endl;
                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                            cout <<"                      `                          OOOOO'"<< endl;

                            cout << "\n\n                    N-N4o eh poss1vel, um ser hum4an0 comum JAMAIS acert4ri1a" << endl;
                            cout << "                                        TENTE A SORTE AGORA" << endl;

                            cout << "\n\n\n Calcule 3x2 + 2x - 8 = 0:" << endl;
                            cout << " a) S={3/4,2}" << endl;
                            cout << " b) S={3,1/2}" << endl;
                            cout << " c) S={4/3,-2}" << endl;
                            cout << " d) S={1,3}" << endl;
                            cout << " e) S={4,2}" << endl;
                            cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                            cin >> resposta12;

                            system ("pause");
                            system("CLS");

                            cout << "Hat-Trick" << endl;

                            system ("pause");
                            system("CLS");

                            switch(resposta12) {
                            case 'c': case 'C':

                                vida = vida - 20;
                                cout <<"                          _                      ___                      _" << endl;
                                cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                                cout <<"       "<<vida<<"             dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                                cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                                cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                                cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                                cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                cout <<"                      "<< endl;
                                cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                                cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                                cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                                cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                                cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                                cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                cout <<"                      `                          OOOOO'"<< endl;

                                cout << "\n\n                                   Q-Qu3m e-eh-ehE VOc3?" << endl;
                                cout << "                           E0 S00 A PERF33ICAO, V0C3 N40 P0D3 ME-M D3-D%¨&T3rr" << endl;

                                cout << " Resolva a equacao 4x - 13 + 2 = 5.5 - 3 + 7" << endl;
                                cout << " a) x = 4" << endl;
                                cout << " b) x = 10" << endl;
                                cout << " c) x = -10" << endl;
                                cout << " d) x = 2/9" << endl;
                                cout << " e) x = 7" << endl;
                                cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                                cin >> resposta13;

                                system ("pause");
                                system("CLS");

                                switch(resposta13) {
                                case 'b': case 'B':

                                    vida = vida - 20;
                                    cout <<"                          _                      ___                      _" << endl;
                                    cout <<"  "<<vida<<"                    MMb.              .adOOO OOOba.              ,dMMMb"<< endl;
                                    cout <<"                      dP'  YMMb            dOOO OOOOOOOOOOb            aMMP  `Yb"<< endl;
                                    cout <<"                      V      ''Mb          OOO OOOOOOb          dM''      V"<< endl;
                                    cout <<"                               `M .       dOO OO OOOOOOOOOOOOb       ,dM'"<< endl;
                                    cout <<"                                 YMb._   |OOOOOOOO OOOOOOOOO|   _,dM '"<< endl;
                                    cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                    cout <<"                         ,dMM   Mb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                    cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                    cout <<"                      "<< endl;
                                    cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                    cout <<"                          ,aa .     `YMMb `OOOb.,dOO OO'          _,adMYYMb."<< endl;
                                    cout <<"                       ,MP'   `YM a._      OOOOOOOOOOOOOOOOO       _,adMM '   `YM."<< endl;
                                    cout <<"                       MP'        YMMM a._ YOOOOPVVVVVYOO O'/MMMMP           d P"<< endl;
                                    cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                    cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                    cout <<"                      `                          OOOOO'"<< endl;

                                    cout << "\n\n                                   NN00NA+{`MNN400NA00000-=-4%!!" << endl << endl;

                                    system ("pause");
                                    system("CLS");

                                    cout << "                Parabens "<< protagonista << "! O mundo eh eternamente grato pela sua bravura e heroismo! Hoje, o mundo " << endl;
                                    cout << "                                celebra sua vitoria contra o Basilisco!" << endl << endl << endl;

                                    cout <<"                                                         .''." << endl;
                                    cout <<"                               .''.             *''*    :_\\/_:     . " << endl;
                                    cout <<"                              :_\\/_:   .    .:.*_\\/_*   : /\\ :  .'.:.'." << endl;
                                    cout <<"                          .''.: /\\ : _\\(/_  ':'* /\\ *  : '..'.  -=:o:=-" << endl;
                                    cout <<"                         :_\\/_:'.:::. /)\\*''*  .|.* '.\\'/.'_\\(/_'.':'.'" << endl;
                                    cout <<"                         : /\\ : :::::  '*_\\/_* | |  -= o =- /)\\    '  *" << endl;
                                    cout <<"                          '..'  ':::'   * /\\ * |'|  .'/.\\'.  '._____" << endl;
                                    cout <<"                              *        __*..* |  |     :      |.   |' .---\"|" << endl;
                                    cout <<"                               _*   .-'   '-. |  |     .--'|  ||   | _|    |" << endl;
                                    cout <<"                            .-'|  _.|  |    ||   '-__  |   |  |    ||      |" << endl;
                                    cout <<"                            |' | |.    |    ||       | |   |  |    ||      |" << endl;
                                    cout <<"                         ___|  '-'     '    \"\"       '-'   '-.'    '`      |____" << endl;
                                    cout <<"                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\"" << endl << endl;

                                    system ("pause");
                                    system("CLS");

                                    cout << "               Voce sera lembrado por toda a historia, derrotasse a entidade mais forte de todos os tempos!" << endl;
                                    cout << "                                                O mundo agradece a sua coragem." << endl << endl << endl;

                                    cout <<"                                                               . " << endl;
                                    cout <<"                                      . .                     -:-             .  .  . " << endl;
                                    cout <<"                                    .'.:,'.        .  .  .     ' .           . \\ | / . " << endl;
                                    cout <<"                                    .'.;.`.       ._. ! ._.       \\          .__\\:/__. " << endl;
                                    cout <<"                                     `,:.'         ._\\!/_.                     .';`.      . ' . " << endl;
                                    cout <<"                                     ,'             . ! .        ,.,      ..======..       .:. " << endl;
                                    cout <<"                                    ,                 .         ._!_.     ||::: : | .        ', " << endl;
                                    cout <<"                             .====.,                  .           ;  .~.===: : : :|   ..===. " << endl;
                                    cout <<"                             |.::'||      .=====.,    ..=======.~,   |\"|: :|::::::|   ||:::|=====| " << endl;
                                    cout <<"                          ___| :::|!__.,  |:::::|!_,   |: :: ::|\"|l_l|\"|:: |:;;:::|___!| ::|: : :| " << endl;
                                    cout <<"                         |: :|::: |:: |!__|; :: |: |===::: :: :|\"||_||\"| : |: :: :|: : |:: |:::::| " << endl;
                                    cout <<"                         |:::| _::|: :|:::|:===:|::|:::|:===F=:|\"!/|\\!\"|::F|:====:|::_:|: :|::__:| " << endl;
                                    cout <<"                         !_[]![_]_!_[]![]_!_[__]![]![_]![_][I_]!//_:_\\\\![]I![_][_]!_[_]![]_!_[__]! " << endl;
                                    cout <<"                         -----------------------------------\"---''''```---\"----------------------- " << endl;
                                    cout <<"                         _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |= _ _:_ _ =| _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
                                    cout <<"                                                             |=    :    =|                         " << endl;
                                    cout <<"                         ____________________________________L___________J_________________________ " << endl;
                                    cout <<"                         -------------------------------------------------------------------------- " << endl;

                                    cout <<"\n\n\n                                             " << protagonista << ", Parabens pela vitoria!" << endl;
                                    cout <<"\n                                                      FIM DE JOGO" << endl << endl << endl;

                                    break;
                                case 'a': case 'A':
                                case 'c': case 'C':
                                case 'd': case 'D':
                                case 'e': case 'E':

                                    system("color 04");
                                    vida1 = vida1 - 20;
                                    cout <<"                          _                      ___                      _" << endl;
                                    cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                                    cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                                    cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                                    cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                                    cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                                    cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                    cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                    cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                    cout <<"                      "<< endl;
                                    cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                    cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                                    cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                                    cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                                    cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                                    cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                                    cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                    cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                    cout <<"                      `                          OOOOO'"<< endl;

                                    cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                                    cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                                    cout << "                                                                                                        Player Life: "<< vida1 << endl;

                                    system ("pause");
                                    system("CLS");

                                    cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                                    cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                                    cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                                    cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                                    cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                                    cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                                    cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                                    cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                                    cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                                    cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                                    cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                                    cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                                    cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                                    cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                                    cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                                    cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                                    cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                                    cout <<"              ==| |~ /     .     \\"<< endl;
                                    cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                                    system ("pause");
                                    system("CLS");

                                    cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                                    cout << " Basilisco." << endl << endl;
                                    cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                                    cout << " sobreviver." << endl << endl;

                                    cout <<"                                      ________            _______"<< endl;
                                    cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                                    cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                                    cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                                    cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                                    cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                                    cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                                    cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                                    cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                                    cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                                    cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                                    cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                                    cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                                    cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                                    cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                                    cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                                    cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                                    cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                                    cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                                    cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                                    cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                                    cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                                    cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                                    cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                                    cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                                    cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                                    cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                                    cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                                    cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                                    cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                                    cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                                    cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                                    cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                                    cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                                    cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                                    cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                                    cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                                    cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                                    cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                                    cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                                    cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                                    cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                                    cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                                    cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                                    cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                                    cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                                    cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                                    cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                                    cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                                    cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;

                                    break;
                                default:
                                    cout << "Opcao invalida" << endl;
                                }

                                break;
                            case 'a': case 'A':
                            case 'b': case 'B':
                            case 'd': case 'D':
                            case 'e': case 'E':

                                system("color 04");
                                vida1 = vida1 - 20;
                                cout <<"                          _                      ___                      _" << endl;
                                cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                                cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                                cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                                cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                                cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                                cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                cout <<"                      "<< endl;
                                cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                                cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                                cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                                cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                                cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                                cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                cout <<"                      `                          OOOOO'"<< endl;

                                cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                                cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                                cout << "                                                                                                        Player Life: "<< vida1 << endl;

                                system ("pause");
                                system("CLS");

                                cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                                cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                                cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                                cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                                cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                                cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                                cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                                cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                                cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                                cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                                cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                                cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                                cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                                cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                                cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                                cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                                cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                                cout <<"              ==| |~ /     .     \\"<< endl;
                                cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                                system ("pause");
                                system("CLS");

                                cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                                cout << " Basilisco." << endl << endl;
                                cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                                cout << " sobreviver." << endl << endl;

                                cout <<"                                      ________            _______"<< endl;
                                cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                                cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                                cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                                cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                                cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                                cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                                cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                                cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                                cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                                cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                                cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                                cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                                cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                                cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                                cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                                cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                                cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                                cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                                cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                                cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                                cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                                cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                                cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                                cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                                cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                                cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                                cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                                cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                                cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                                cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                                cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                                cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                                cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                                cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                                cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                                cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                                cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                                cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                                cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                                cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                                cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                                cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                                cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                                cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                                cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                                cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                                cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                                cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                                cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;

                                break;
                            default:
                                cout << "Opcao invalida" << endl;
                            }


                            break;
                        case 'a': case 'A':
                        case 'b': case 'B':
                        case 'c': case 'C':
                        case 'e': case 'E':

                            system("color 04");
                            vida1 = vida1 - 20;
                            cout <<"                          _                      ___                      _" << endl;
                            cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                            cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                            cout <<"                      "<< endl;
                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                            cout <<"                      `                          OOOOO'"<< endl;

                            cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                            cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                            cout << "                                                                                                        Player Life: "<< vida1 << endl;

                            system ("pause");
                            system("CLS");

                            cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                            cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                            cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                            cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                            cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                            cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                            cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                            cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                            cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                            cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                            cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                            cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                            cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                            cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                            cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                            cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                            cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                            cout <<"              ==| |~ /     .     \\"<< endl;
                            cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                            system ("pause");
                            system("CLS");

                            cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                            cout << " Basilisco." << endl << endl;
                            cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                            cout << " sobreviver." << endl << endl;

                            cout <<"                                      ________            _______"<< endl;
                            cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                            cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                            cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                            cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                            cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                            cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                            cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                            cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                            cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                            cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                            cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                            cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                            cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                            cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                            cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                            cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                            cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                            cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                            cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                            cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                            cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                            cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                            cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                            cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                            cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                            cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                            cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                            cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                            cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                            cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                            cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                            cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                            cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                            cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                            cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                            cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                            cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                            cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                            cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                            cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                            cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                            cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                            cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                            cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                            cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                            cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                            cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                            cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                            cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;

                            break;
                        default:
                            cout << "Opcao invalida" << endl;
                        }

                    break;
                default:
                    cout << " Opcao invalida" << endl;
                }

                break;
            case 'a': case 'A':
            case 'b': case 'B':
            case 'd': case 'D':
            case 'e': case 'E':

                vida1 = vida1 - 20;
                cout <<"                          _                      ___                      _" << endl;
                cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                cout <<"                      "<< endl;
                cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                cout <<"                      `                          OOOOO'"<< endl;

                cout << "\n\n               Como imaginavel! Um mero mortal nao consegue realizar tais operacoes!" << endl;

                cout << "\n\n\n Determine os valores de x que satisfacam a equacao (4 - x)(3 + x) = 0" << endl;
                cout << " a) S={8,2}" << endl;
                cout << " b) S={-3,4}" << endl;
                cout << " c) S={3,-4}" << endl;
                cout << " d) S={2,7}" << endl;
                cout << " e) S={-6,8}" << endl;
                cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                cin >> resposta5;

                system ("pause");
                system("CLS");

                switch (resposta5) {
                case 'b': case 'B':

                    vida = vida - 20;
                    cout <<"                          _                      ___                      _" << endl;
                    cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                    cout <<"       "<<vida<<"             dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                    cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                    cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                    cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                    cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                    cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                    cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                    cout <<"                      "<< endl;
                    cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                    cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                    cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                    cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                    cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                    cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                    cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                    cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                    cout <<"                      `                          OOOOO'"<< endl;

                    cout << "\n\n               BELA RESPOSTA! Mas vamos ver como voce ira se sair na questao a seguir" << endl;

                    cout << " Resolva a equacao 4x - 13 + 2 = 5.5 - 3 + 7" << endl;
                    cout << " a) x = 4" << endl;
                    cout << " b) x = 10" << endl;
                    cout << " c) x = -10" << endl;
                    cout << " d) x = 2/9" << endl;
                    cout << " e) x = 7" << endl;
                    cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                    cin >> resposta6;

                    system ("pause");
                    system("CLS");

                    switch (resposta6) {
                    case 'd': case 'D':

                        vida = vida - 20;
                        cout <<"                          _                      ___                      _" << endl;
                        cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                        cout <<"       "<<vida<<"             dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                        cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                        cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                        cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                        cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                        cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                        cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                        cout <<"                      "<< endl;
                        cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                        cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                        cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                        cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                        cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                        cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                        cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                        cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                        cout <<"                      `                          OOOOO'"<< endl;

                        cout << "\n\n                    N-N4o eh poss1vel, um ser hum4an0 comum JAMAIS acert4ri1a" << endl;
                        cout << "                                        TENTE A SORTE AGORA" << endl;
                        cout << " Determine x2 - 3x - 4 = 0" << endl;
                        cout << " a) S{7,8}" << endl;
                        cout << " b) S{3,4}" << endl;
                        cout << " c) S{4,1}" << endl;
                        cout << " d) S{5,1}" << endl;
                        cout << " e) S{4,-1}" << endl;
                        cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                        cin >> resposta7;

                        system ("pause");
                        system("CLS");

                        cout << "Hat-Trick" << endl;

                        system ("pause");
                        system("CLS");

                        switch(resposta7) {
                        case 'e': case 'E':
                            vida = vida - 40;
                            cout <<"                          _                      ___                      _" << endl;
                            cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                            cout <<"       "<<vida<<"             dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                            cout <<"                      "<< endl;
                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                            cout <<"                      `                          OOOOO'"<< endl;

                            cout << "\n\n                    N-N4o eh poss1vel, um ser hum4an0 comum JAMAIS acert4ri1a" << endl;
                            cout << "                                        TENTE A SORTE AGORA" << endl;
                            cout << " Determine 3x2 + 2x - 8 = 0" << endl;
                            cout << " a) S{1,4}" << endl;
                            cout << " b) S{1/2,4}" << endl;
                            cout << " c) S{4,3}" << endl;
                            cout << " d) S{2,1}" << endl;
                            cout << " e) S{4/3,-2}" << endl;
                            cout << "Resposta:                                                                                               Player Life: "<< vida1 << endl;
                            cin >> resposta8;

                                switch(resposta8) {
                                case 'e': case 'E':

                                        system ("pause");
                                        system("CLS");

                                        vida = vida - 20;
                                        cout <<"                          _                      ___                      _" << endl;
                                        cout <<"  "<<vida<<"                    MMb.              .adOOO OOOba.              ,dMMMb"<< endl;
                                        cout <<"                      dP'  YMMb            dOOO OOOOOOOOOOb            aMMP  `Yb"<< endl;
                                        cout <<"                      V      ''Mb          OOO OOOOOOb          dM''      V"<< endl;
                                        cout <<"                               `M .       dOO OO OOOOOOOOOOOOb       ,dM'"<< endl;
                                        cout <<"                                 YMb._   |OOOOOOOO OOOOOOOOO|   _,dM '"<< endl;
                                        cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                        cout <<"                         ,dMM   Mb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                        cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                        cout <<"                      "<< endl;
                                        cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                        cout <<"                          ,aa .     `YMMb `OOOb.,dOO OO'          _,adMYYMb."<< endl;
                                        cout <<"                       ,MP'   `YM a._      OOOOOOOOOOOOOOOOO       _,adMM '   `YM."<< endl;
                                        cout <<"                       MP'        YMMM a._ YOOOOPVVVVVYOO O'/MMMMP           d P"<< endl;
                                        cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                        cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                        cout <<"                      `                          OOOOO'"<< endl;

                                        cout << "\n\n                                   NN00NA+{`MNN400NA00000-=-4%!!" << endl << endl;

                                        system ("pause");
                                        system("CLS");

                                        cout << "                Parabens "<< protagonista << "! O mundo eh eternamente grato pela sua bravura e heroismo! Hoje, o mundo " << endl;
                                        cout << "                                celebra sua vitoria contra o Basilisco!" << endl << endl << endl;

                                        cout <<"                                                         .''." << endl;
                                        cout <<"                               .''.             *''*    :_\\/_:     . " << endl;
                                        cout <<"                              :_\\/_:   .    .:.*_\\/_*   : /\\ :  .'.:.'." << endl;
                                        cout <<"                          .''.: /\\ : _\\(/_  ':'* /\\ *  : '..'.  -=:o:=-" << endl;
                                        cout <<"                         :_\\/_:'.:::. /)\\*''*  .|.* '.\\'/.'_\\(/_'.':'.'" << endl;
                                        cout <<"                         : /\\ : :::::  '*_\\/_* | |  -= o =- /)\\    '  *" << endl;
                                        cout <<"                          '..'  ':::'   * /\\ * |'|  .'/.\\'.  '._____" << endl;
                                        cout <<"                              *        __*..* |  |     :      |.   |' .---\"|" << endl;
                                        cout <<"                               _*   .-'   '-. |  |     .--'|  ||   | _|    |" << endl;
                                        cout <<"                            .-'|  _.|  |    ||   '-__  |   |  |    ||      |" << endl;
                                        cout <<"                            |' | |.    |    ||       | |   |  |    ||      |" << endl;
                                        cout <<"                         ___|  '-'     '    \"\"       '-'   '-.'    '`      |____" << endl;
                                        cout <<"                        ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\"" << endl << endl;

                                        system ("pause");
                                        system("CLS");

                                        cout << "               Voce sera lembrado por toda a historia, derrotasse a entidade mais forte de todos os tempos!" << endl;
                                        cout << "                                                O mundo agradece a sua coragem." << endl << endl << endl;

                                        cout <<"                                                               . " << endl;
                                        cout <<"                                      . .                     -:-             .  .  . " << endl;
                                        cout <<"                                    .'.:,'.        .  .  .     ' .           . \\ | / . " << endl;
                                        cout <<"                                    .'.;.`.       ._. ! ._.       \\          .__\\:/__. " << endl;
                                        cout <<"                                     `,:.'         ._\\!/_.                     .';`.      . ' . " << endl;
                                        cout <<"                                     ,'             . ! .        ,.,      ..======..       .:. " << endl;
                                        cout <<"                                    ,                 .         ._!_.     ||::: : | .        ', " << endl;
                                        cout <<"                             .====.,                  .           ;  .~.===: : : :|   ..===. " << endl;
                                        cout <<"                             |.::'||      .=====.,    ..=======.~,   |\"|: :|::::::|   ||:::|=====| " << endl;
                                        cout <<"                          ___| :::|!__.,  |:::::|!_,   |: :: ::|\"|l_l|\"|:: |:;;:::|___!| ::|: : :| " << endl;
                                        cout <<"                         |: :|::: |:: |!__|; :: |: |===::: :: :|\"||_||\"| : |: :: :|: : |:: |:::::| " << endl;
                                        cout <<"                         |:::| _::|: :|:::|:===:|::|:::|:===F=:|\"!/|\\!\"|::F|:====:|::_:|: :|::__:| " << endl;
                                        cout <<"                         !_[]![_]_!_[]![]_!_[__]![]![_]![_][I_]!//_:_\\\\![]I![_][_]!_[_]![]_!_[__]! " << endl;
                                        cout <<"                         -----------------------------------\"---''''```---\"----------------------- " << endl;
                                        cout <<"                         _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ |= _ _:_ _ =| _ _ _ _ _ _ _ _ _ _ _ _ " << endl;
                                        cout <<"                                                             |=    :    =|                         " << endl;
                                        cout <<"                         ____________________________________L___________J_________________________ " << endl;
                                        cout <<"                         -------------------------------------------------------------------------- " << endl;

                                        cout <<"\n\n\n                                             " << protagonista << ", Parabens pela vitoria!" << endl;
                                        cout <<"\n                                                      FIM DE JOGO" << endl << endl << endl;


                                    break;
                                case 'a': case 'A':
                                case 'b': case 'B':
                                case 'c': case 'C':
                                case 'd': case 'D':

                                    system("color 04");
                                    vida1 = vida1 - 20;
                                    cout <<"                          _                      ___                      _" << endl;
                                    cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                                    cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                                    cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                                    cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                                    cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                                    cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                                    cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                                    cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                                    cout <<"                      "<< endl;
                                    cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                                    cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                                    cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                                    cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                                    cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                                    cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                                    cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                                    cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                                    cout <<"                      `                          OOOOO'"<< endl;

                                    cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                                    cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                                    cout << "                                                                                                        Player Life: "<< vida1 << endl;

                                    system ("pause");
                                    system("CLS");

                                    cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                                    cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                                    cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                                    cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                                    cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                                    cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                                    cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                                    cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                                    cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                                    cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                                    cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                                    cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                                    cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                                    cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                                    cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                                    cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                                    cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                                    cout <<"              ==| |~ /     .     \\"<< endl;
                                    cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                                    system ("pause");
                                    system("CLS");

                                    cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                                    cout << " Basilisco." << endl << endl;
                                    cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                                    cout << " sobreviver." << endl << endl;

                                    cout <<"                                      ________            _______"<< endl;
                                    cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                                    cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                                    cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                                    cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                                    cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                                    cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                                    cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                                    cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                                    cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                                    cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                                    cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                                    cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                                    cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                                    cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                                    cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                                    cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                                    cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                                    cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                                    cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                                    cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                                    cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                                    cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                                    cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                                    cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                                    cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                                    cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                                    cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                                    cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                                    cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                                    cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                                    cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                                    cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                                    cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                                    cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                                    cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                                    cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                                    cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                                    cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                                    cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                                    cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                                    cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                                    cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                                    cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                                    cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                                    cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                                    cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                                    cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                                    cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                                    cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;

                                break;
                            default:
                                cout << " Opcao invalida" << endl;
                            }

                            break;
                        case 'a': case 'A':
                        case 'b': case 'B':
                        case 'c': case 'C':
                        case 'd': case 'D':

                            system("color 04");
                            vida1 = vida1 - 20;
                            cout <<"                          _                      ___                      _" << endl;
                            cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                            cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                            cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                            cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                            cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                            cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                            cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                            cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                            cout <<"                      "<< endl;
                            cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                            cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                            cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                            cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                            cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                            cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                            cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                            cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                            cout <<"                      `                          OOOOO'"<< endl;

                            cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                            cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                            cout << "                                                                                                        Player Life: "<< vida1 << endl;

                            system ("pause");
                            system("CLS");

                            cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                            cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                            cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                            cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                            cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                            cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                            cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                            cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                            cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                            cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                            cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                            cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                            cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                            cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                            cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                            cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                            cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                            cout <<"              ==| |~ /     .     \\"<< endl;
                            cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                            system ("pause");
                            system("CLS");

                            cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                            cout << " Basilisco." << endl << endl;
                            cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                            cout << " sobreviver." << endl << endl;

                            cout <<"                                      ________            _______"<< endl;
                            cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                            cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                            cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                            cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                            cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                            cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                            cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                            cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                            cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                            cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                            cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                            cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                            cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                            cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                            cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                            cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                            cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                            cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                            cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                            cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                            cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                            cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                            cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                            cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                            cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                            cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                            cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                            cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                            cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                            cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                            cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                            cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                            cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                            cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                            cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                            cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                            cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                            cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                            cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                            cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                            cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                            cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                            cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                            cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                            cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                            cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                            cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                            cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                            cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;


                            break;
                        default:
                            cout << " Opcao invalida" << endl;

                        }


                    break;
                case 'a': case 'A':
                case 'b': case 'B':
                case 'c': case 'C':
                case 'e': case 'E':

                        system("color 04");
                        vida1 = vida1 - 20;
                        cout <<"                          _                      ___                      _" << endl;
                        cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                        cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                        cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                        cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                        cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                        cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                        cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                        cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                        cout <<"                      "<< endl;
                        cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                        cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                        cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                        cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                        cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                        cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                        cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                        cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                        cout <<"                      `                          OOOOO'"<< endl;

                        cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                        cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                        cout << "                                                                                                        Player Life: "<< vida1 << endl;

                        system ("pause");
                        system("CLS");

                        cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                        cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                        cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                        cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                        cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                        cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                        cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                        cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                        cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                        cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                        cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                        cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                        cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                        cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                        cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                        cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                        cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                        cout <<"              ==| |~ /     .     \\"<< endl;
                        cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                        system ("pause");
                        system("CLS");

                        cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                        cout << " Basilisco." << endl << endl;
                        cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                        cout << " sobreviver." << endl << endl;

                        cout <<"                                      ________            _______"<< endl;
                        cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                        cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                        cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                        cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                        cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                        cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                        cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                        cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                        cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                        cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                        cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                        cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                        cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                        cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                        cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                        cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                        cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                        cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                        cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                        cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                        cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                        cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                        cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                        cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                        cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                        cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                        cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                        cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                        cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                        cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                        cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                        cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                        cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                        cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                        cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                        cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                        cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                        cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                        cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                        cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                        cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                        cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                        cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                        cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                        cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                        cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                        cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                        cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                        cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;

                    break;
                default:
                    cout << " Opcao invalida" << endl;
                }
                break;
            case 'a': case 'A':
            case 'c': case 'C':
            case 'd': case 'D':
            case 'e': case 'E':

                    system("color 04");
                    vida1 = vida1 - 20;
                    cout <<"                          _                      ___                      _" << endl;
                    cout <<"  Basilisco Life:       dMMMb.              .adOOOOOOOOOba.              ,dMMMb"<< endl;
                    cout <<"       "<<vida<<"            dP'  YMMb            dOOOOOOOOOOOOOOOb            aMMP  `Yb"<< endl;
                    cout <<"                      V      ''Mb         dOOOOOOOOOOOOOOOOOb          dM''      V"<< endl;
                    cout <<"                               `Mb.       dOOOOOOOOOOOOOOOOOOOb       ,dM'"<< endl;
                    cout <<"                                 YMb._   |OOOOOOOOOOOOOOOOOOOOO|   _,dMP'"<< endl;
                    cout <<"                           _     `YMMM| OP'''YOOOOOOOOOOOP''`YO |MMMP'     _"<< endl;
                    cout <<"                         ,dMMMb.     ~' OO     `YOOOOOP'     OO `~     ,dMMMb."<< endl;
                    cout <<"                      ,dP~  `YMba      OOb      `OOO'      dOO      aMMP'  ~Yb.   "<< endl;
                    cout <<"                      "<< endl;
                    cout <<"                                 `YMMMM\\`OOOo     OOO     oOOO'/MMMMP'"<< endl;
                    cout <<"                          ,aa.     `YMMb `OOOb.,dOOOb.,dOOO'dMMP'       ,aa."<< endl;
                    cout <<"                        ,dMYYMba._         `OOOOOOOOOOOOOOOOO'          _,adMYYMb."<< endl;
                    cout <<"                       ,MP'   `YMMba._      OOOOOOOOOOOOOOOOO       _,adMMP'   `YM."<< endl;
                    cout <<"                       MP'        YMMMba._ YOOOOPVVVVVYOOOOP  _,adMMMMP       `YM"<< endl;
                    cout <<"                       YMb           YMMMM\\`OOOOI`````IOOOOO'/MMMMP           dMP"<< endl;
                    cout <<"                        `Mb.          `YMMMb`OOOI,,,,,IOOOO'dMMMP'           ,dM'"<< endl;
                    cout <<"                          `'                  `OObNNNNNdOO'                   `'"<< endl;
                    cout <<"                      `                          OOOOO'"<< endl;

                    cout << "\n\n               COMO ESPERAVEL! UM SER INFERIOR A MIM JAMAIS ME VENCERIA!" << endl;
                    cout <<"\n                                EU SOU INEVITAVEL, EU SOU BASILISCO." << endl;






                    cout << "                                                                                                        Player Life: "<< vida1 << endl;

                    system ("pause");
                    system("CLS");

                    cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
                    cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
                    cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
                    cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

                    cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
                    cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
                    cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
                    cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
                    cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
                    cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
                    cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
                    cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
                    cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
                    cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
                    cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
                    cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
                    cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
                    cout <<"              ==| |~ /     .     \\"<< endl;
                    cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

                    system ("pause");
                    system("CLS");

                    cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
                    cout << " Basilisco." << endl << endl;
                    cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
                    cout << " sobreviver." << endl << endl;

                    cout <<"                                      ________            _______"<< endl;
                    cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
                    cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
                    cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
                    cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
                    cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
                    cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
                    cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
                    cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
                    cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
                    cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
                    cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
                    cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
                    cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
                    cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
                    cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
                    cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
                    cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
                    cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
                    cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
                    cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
                    cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
                    cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
                    cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
                    cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
                    cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
                    cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
                    cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
                    cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
                    cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
                    cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
                    cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
                    cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
                    cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
                    cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
                    cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
                    cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
                    cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
                    cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
                    cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
                    cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
                    cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
                    cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
                    cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
                    cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
                    cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
                    cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
                    cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
                    cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

                    cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;

                break;
            default:
                cout << " Opcao invalida" << endl;

            return 0;
                }

            }

            break;
        case 'b': case 'B':
            cout << "\n O plano Estabelizacao Planetal, iniciado por Basilisco, foi concluido depois de 1 ano de atuacao. As ruas estao " << endl;
            cout << " desertas, ja nao habita mais nenhum ser humano sob o solo terreste." << endl << endl;
            cout << " Apos 10 anos, os animais domesticos e de zoologicos falecem por nao se adaptarem ao ambiente hostil, grandes " << endl;
            cout << " cidades estao totalmente abadonadas e o vegetal comeca a se consumir as metropolis." << endl << endl;

            cout <<"              .             .        .     .     |--|--|--|--|--|--|  |===|==|   /    i"<< endl;
            cout <<"                      .            ______________|__|__|__|__|__|_ |  |===|==|  *  . /=\\"<< endl;
            cout <<"              __ *            .   /______________________________|-|  |===|==|       |=|  ."<< endl;
            cout <<"              __|  .      .   .  //______________________________| :----------------------."<< endl;
            cout <<"              __|   /|\\      _|_|//       ooooooooooooooooooooo  |-|                      |"<< endl;
            cout <<"              __|  |/|\\|__   ||l|/,-------8                   8 -| |                      |"<< endl;
            cout <<"              __|._|/|\\|||.l |[=|/,-------8                   8 -|-|                      |"<< endl;
            cout <<"              __|[+|-|-||||li|[=|---------8                   8 -| |                      |"<< endl;
            cout <<"              _-----.|/| //:\\_[=|\\`-------8                   8 -|-|                      |"<< endl;
            cout <<"               /|  /||//8/ :  8_|\\`------ 8ooooooooooooooooooo8 -| |                      |"<< endl;
            cout <<"              /=| //||/ |  .  | |\\\\_____________  ____  _________|-|                      |"<< endl;
            cout <<"              ==|//||  /   .   \\ \\\\_____________ |X|  | _________| `---==------------==---'"<< endl;
            cout <<"              ==| ||  /         \\ \\_____________ |X| \\| _________|     ||            ||"<< endl;
            cout <<"              ==| |~ /     .     \\"<< endl;
            cout <<"              ==|/  /             \\______________________________________________________"<< endl << endl << endl;

            system ("pause");
            system("CLS");

            cout << " 120 anos se passam desde a Estabelizacao Planetal. O planeta Terra esta 100% restaurado, gracas ao trabalho de " << endl ;
            cout << " Basilisco." << endl << endl;
            cout << " O mundo esta em paz, porque por mais que o ser humano necessitasse da Terra, a Terra nao necessita do ser humano para " << endl;
            cout << " sobreviver." << endl << endl;

            cout <<"                                      ________            _______"<< endl;
            cout <<"                             /\\ \\ \\ \\/_______/     ______/\\      \\  /\\ \\/ /\\ \\/ /\\  \\_____________"<< endl;
            cout <<"                            /\\ \\ \\ \\/______ /     /\\    /:\\\\      \\ ::\\  /::\\  /::\\ /____  ____ __"<< endl;
            cout <<"                           /\\ \\ \\ \\/_______/     /:\\\\  /:\\:\\\\______\\::/  \\::/  \\::///   / /   //"<< endl;
            cout <<"                          /\\ \\ \\ \\/_______/    _/____\\/:\\:\\:/_____ / / /\\ \\/ /\\ \\///___/ /___//___"<< endl;
            cout <<"                    _____/___ \\ \\/_______/    /\\::::::\\\\:\\:/_____ / \\ /::\\  /::\\ /____  ____  ____"<< endl;
            cout <<"                             \\ \\/_______/    /:\\\\::::::\\\\:/_____ /   \\\\::/  \\::///   / /   / /   /"<< endl;
            cout <<"                              \\/_______/    /:\\:\\\\______\\/______/_____\\\\/ /\\ \\///___/ /___/ /_____"<< endl;
            cout <<"                    \\          \\______/    /:\\:\\:/_____:/\\      \\ ___ /  /::\\ /____  ____  _/\\::::"<< endl;
            cout <<"                    \\\\__________\\____/    /:\\:\\:/_____:/:\\\\      \\__ /_______/____/_/___/_ /  \\:::"<< endl;
            cout <<"                    //__________/___/   _/____:/_____:/:\\:\\\\______\\ /                     /\\  /\\::"<< endl;
            cout <<"                    ///\\          \\/   /\\ .----.\\___:/:\\:\\:/_____ // \\                   /  \\/  \\:"<< endl;
            cout <<"                    ///\\\\          \\  /::\\\\ \\_\\ \\\\_:/:\\:\\:/_____ //:\\ \\                 /\\  /\\  /\\"<< endl;
            cout <<"                    //:/\\\\          \\//\\::\\\\ \\ \\ \\\\/:\\:\\:/_____ //:::\\ \\               /  \\/  \\/+/"<< endl;
            cout <<"                    /:/:/\\\\_________/:\\/:::\\`----' \\\\:\\:/_____ //o:/\\:\\ \\_____________/\\  /\\  / /"<< endl;
            cout <<"                    :/:/://________//\\::/\\::\\_______\\\\:/_____ ///\\_\\ \\:\\/____________/  \\/  \\/+/\\"<< endl;
            cout <<"                    /:/:///_/_/_/_/:\\/::\\ \\:/__  __ /:/_____ ///\\//\\\\/:/ _____  ____/\\  /\\  / /  \\"<< endl;
            cout <<"                    :/:///_/_/_/_//\\::/\\:\\///_/ /_//:/______/_/ :~\\/::/ /____/ /___/  \\/  \\/+/\\  /"<< endl;
            cout <<"                    /:///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\  / \\\\:\\/:/ _____  ____/\\  /\\  / /  \\/"<< endl;
            cout <<"                    :///_/_/_/_//\\::/\\:\\///_/ /_//:/____/\\:\\____\\\\::/ /____/ /___/  \\/  \\/+/\\  /\\"<< endl;
            cout <<"                    ///_/_/_/_/:\\/::\\ \\:/__  __ /:/____/\\:\\/____/\\\\/____________/\\  /\\  / /  \\/  \\"<< endl;
            cout <<"                    //_/_/_/_//\\::/\\:\\///_/ /_//::::::/\\:\\/____/  /----/----/--/  \\/  \\/+/\\  /\\  /"<< endl;
            cout <<"                    /_/_/_/_/:\\/::\\ \\:/__  __ /\\:::::/\\:\\/____/ \\/____/____/__/\\  /\\  / /  \\/  \\/_"<< endl;
            cout <<"                    _/_/_/_//\\::/\\:\\///_/ /_//\\:\\::::\\:\\/____/ \\_____________/  \\/  \\/+/\\  /\\  /"<< endl;
            cout <<"                    /_/_/_/:\\/::\\ \\:/__  __ /\\:\\:\\::::\\/____/   \\ _ _ _ _ _ /\\  /\\  / /  \\/  \\/___"<< endl;
            cout <<"                    _/_/_//\\::/\\:\\///_/ /_//\\:\\:\\:\\              \\_________/  \\/  \\/+/\\  /\\  /   /"<< endl;
            cout <<"                    /_/_/:\\/::\\ \\:/__  __ /\\:\\:\\:\\:\\______________\\       /\\  /\\  / /  \\/  \\/___/_"<< endl;
            cout <<"                    _/_//\\::/\\:\\///_/ /_//::\\:\\:\\:\\/______________/      /  \\/  \\/+/\\  /\\  /   /"<< endl;
            cout <<"                    /_/:\\/::\\ \\:/__  __ /::::\\:\\:\\/______________/\\     /\\  /\\  / /  \\/  \\/___/___"<< endl;
            cout <<"                    _//\\::/\\:\\///_/ /_//:\\::::\\:\\/______________/  \\   /  \\/  \\/+/\\  /\\  /   /   /"<< endl;
            cout <<"                    /:\\/::\\ \\:/__  __ /:\\:\\::::\\/______________/    \\ /\\  /\\  / /  \\/  \\/___/___/"<< endl;
            cout <<"                    /\\::/\\:\\///_/ /_//:\\:\\:\\                         \\  \\/\\\\\\/+/\\  /\\  /   /   /+/"<< endl;
            cout <<"                    \\/::\\ \\:/__  __ /:\\:\\:\\:\\_________________________\\ ///\\\\\\/  \\/  \\/___/___/ /_"<< endl;
            cout <<"                    ::/\\:\\///_/ /_//:\\:\\:\\:\\/_________________________////::\\\\\\  /\\  /   /   /+/"<< endl;
            cout <<"                    ::\\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:\\/____\\\\\\/  \\/___/___/ /___"<< endl;
            cout <<"                    /\\:\\///_/ /_//:\\:\\:\\:\\/_________________________/:::\\    /\\/\\  /   /   /+/   /"<< endl;
            cout <<"                    \\ \\:/__  __ /:\\:\\:\\:\\/_________________________/:::::\\  ///  \\/___/___/ /___/_"<< endl;
            cout <<"                    :\\///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::::\\///\\  /   /  __________"<< endl;
            cout <<"                    \\:/__  __ /:\\:\\:\\:\\/_________________________/:::\\:::::\\/  \\/___/__/\\"<< endl;
            cout <<"                    ///_/ /_//:\\:\\:\\:\\/_________________________/:\\:::\\:::::\\  /   /  /::\\"<< endl;
            cout <<"                    /__  __ /\\::\\:\\:\\/_________________________/_____::\\:::::\\/___/__/:/\\:\\"<< endl;
            cout <<"                   /_/ /_//::\\::\\:\\/_____________________/\\/_/_/_/_/\\  \\           /::\\ \\:\\"<< endl;
            cout <<"                    _  __ /:\\::\\:8\\/_____________________/\\/\\   /\\_\\\\/\\  \\ 8       /:/\\:\\ \\:\\"<< endl;
            cout <<"                    / /_//\\     \\|______________________//\\\\/\\::\\/__\\\\/\\  \\|______/::\\ \\:\\ \\:\\"<< endl;
            cout <<"                    __ /  \\  \\                        /:\\/:\\/\\_______\\/\\        /:/\\:\\ \\:\\/::\\"<< endl;
            cout <<"                    /_//    8      -8  --  --  --  -- //\\::/\\\\/_/_/_/_/_/ --  --/::\\ \\:\\ \\::/\\:\\"<< endl;
            cout <<"                    _ /     |\\  \\   |________________/:\\/::\\///__/ /__//_______/:/\\:\\ \\:\\/::\\ \\:\\"<< endl;
            cout <<"                    __________\\     \\               //\\::/\\:/___  ___ /       /::\\ \\:\\ \\::/\\:\\ \\:\\"<< endl;
            cout <<"                    ::::::::::\\\\  \\  \\             /:\\/::\\///__/ /__//       /:/\\:\\ \\:\\/::\\ \\:\\ \\:"<< endl;

            cout <<"\n\n\n                                                    FIM DE JOGO" << endl << endl << endl;


            break;
        default:
            cout << "Opcao invalida" << endl;

    }
        break;
    default:
        cout << "Opcao invalida" << endl;
    }

    return 0;
}



