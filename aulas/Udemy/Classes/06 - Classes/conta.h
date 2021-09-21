#pragma once

#include <string>

class Conta {

    private:

        std::string Banco;          // Nome do banco
        int agencia;                // Nº da agência
        int NumConta;               // Nº da conta
        std::string Titular;        // Nome do titular
        int Saldo;                  // Saldo da conta
    

    public:

        // Instânciação do objeto
        Conta();                    // Construtor para nenhum argumeto

        // Construtor para os 5 argumentos
        Conta(std::string Banco, int Agencia, int NumConta, std::string Titular, double Saldo);

        ~Conta();                   // Destrutor

        // Geters
        double ConsultarSaldo();
        std::string GetBanco();
        int GetAgencia();
        int GetNumConta();
        std::string GetTitular();
        void GetEnderecoThis();

        // Setters
        void Depositar(double Valor);
        void Transferir(Conta &Destino, double Valor);
        void SetBanco(std::string Banco);
        void SetAgencia(int Agencia);
        void SetTitular(std::string Titular);
        void SetNumConta(int NumConta);
};
