#include <iostream>
#include <string>

using namespace std;

int main()
{
    double x,y;
    int option;
    bool okSenha = false;
    bool okContinuar = true;
    int qtdTentativas = 3;
    string senha = "123456";
    string senhaDigitada;

    while (qtdTentativas > 0)
    {
        cout << "Digite a sua senha para continuar: ";
        cin >> senhaDigitada;

        if (senha == senhaDigitada)
        {
            okSenha = true;
            break;
        }else
        {
            qtdTentativas--;
            cout << "Senha Incorreta!" << endl;
            system("pause");
        }
        
        system("cls");
    }
    
    if (!okSenha)
    {
        cout << "Quantidade de tentativas excedidas..." << endl;
        system("pause");
        return 1;
    }
    
    system("cls");
    cout << "Calculadora ADS" << endl;
    system("pause");
    do
    {
        cout << "Digite o primeiro numero: ";
        cin >> x;
        cout << "Digite o segundo numero: ";
        cin >> y;
        
        cout << "Operacoes disponiveis:" << endl;
        cout << "1. Soma" << endl;
        cout << "2. Subtracao" << endl;
        cout << "3. Multiplicacao" << endl;
        cout << "4. Divisao" << endl;
        cout << "Informe a operacao desejada: ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "A soma e: " << x + y << endl;
            break;
        
        case 2:
            cout << "A subtracao e: " << x - y << endl;
            break;
        
        case 3:
            cout << "A multiplicacao e: " << x * y << endl;
            break;
        
        case 4:
            cout << "A divisao e: " << x / y << endl;
            break;
        
        default:
            cout << "Operacao escolhida indisponivel" << endl;
            break;
        }

        cout << "Deseja Continuar? 1. Sim outro valor sair app" << endl;
        cout << "Digite a sua escolha: ";
        cin >> option;

        if (option != 1)
        {
            okContinuar = false;
        }
        system("cls");
    } while (okContinuar);
    
    

    cout << "Obrigado por usar nossa calculadora!" << endl;
    system("pause");
    return 0;
}
