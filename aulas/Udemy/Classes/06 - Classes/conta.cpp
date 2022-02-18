#include "conta.h"

// Instânciação do objeto
// Construtor para nenhum argumeto
// Conta::Conta() {
//     this->Banco    = "";
//     this->agencia  = 0;
//     this->NumConta = 0;
//     this->Titular  = "";
//     this->Saldo    = 0;
// }
Conta::Conta() : Banco(""), agencia(0), NumConta(0), Titular(""), Saldo(0) {};

// Construtor para os 5 argumentos
Conta::Conta(std::string Banco, int Agencia, int NumConta, std::string Titular, double Saldo) {
    this->Banco    = Banco;
    this->agencia  = Agencia;
    this->NumConta = NumConta;
    this->Titular  = Titular;
    this->Saldo    = Saldo;
}


// Destrutor
Conta::~Conta() {
    
}

// Geters
double Conta::ConsultarSaldo() {
    return this->Saldo;
}

std::string Conta::GetBanco() {
    return this->Banco;
}

int Conta::GetAgencia() {
    return this->agencia;
}

int Conta::GetNumConta() {
    return this->NumConta;
}

std::string Conta::GetTitular() {
    return this->Titular;
}


// Setters
void Conta::Depositar(double Valor) {
    this->Saldo += Valor;
}

void Conta::Transferir(Conta &Destino, double Valor) {
    if (this->Saldo < Valor) 
        return;
    
    Destino.Depositar(Valor);
    this->Saldo -= Valor;
}

void Conta::SetBanco(std::string Banco) {
    this->Banco = Banco;
}

void Conta::SetAgencia(int Agencia) {
    this->agencia = Agencia;
}

void Conta::SetTitular(std::string Titular) {
    this->Titular = Titular;
}

void Conta::SetNumConta(int NumConta) {
    this->NumConta;
}
