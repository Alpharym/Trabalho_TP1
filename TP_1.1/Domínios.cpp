#include "Dominios.h"
#include <iostream>

using namespace std;


void Dominio::setValor(const string& valor){

    validar(valor);
    this->valor = valor;
}

Dominio::Dominio(const string& valor){
    this->valor = valor;
}

Classe::Classe(const string& valor) : Dominio(valor){validar(valor);};

Codigo::Codigo(const string& valor) : Dominio(valor){validar(valor);};

Data::Data(const string& valor) : Dominio(valor){validar(valor);};

Matricula::Data(const string& valor) : Dominio(valor){validar(valor);};

Resultado::Resultado(const string& valor) : Dominio(valor){validar(valor);};

Senha::Senha(const string& valor) : Dominio(valor){validar(valor);};

Telefone::Telefone(const string& valor) : Dominio(valor){validar(valor);};

Texto::Texto(const string& valor) : Dominio(valor){validar(valor);};

void Classe::validar(string valor){

    if (POSSIVEIS_VALORES.find(valor) == POSSIVEIS_VALORES.end()){
        throw invalid_argument("Classe inv�lida");
    }

}

void Codigo::validar(string valor){

    if ( !regex_match(valor, PADRAO_ACEITO) ) {
        throw invalid_argument("C�digo inv�lido");
    }
}

void Data::validar(string valor){

    if ((!regex_match(valor, PADRAO_ACEITO))) {
        throw invalid_argument("Data inv�lida");
    }

}

void Resultado::validar(string valor){

    if (POSSIVEIS_VALORES.find(valor) == POSSIVEIS_VALORES.end()){
        throw invalid_argument("Resultado inv�lido");
    }

}

void Matricula::validar(string valor) {

    if (valor.size() != 7){
        throw invalid_argument("Tamanho da Matr�cula inv�lida")
    }
    int soma = 0;

    for (int i = 0; i < 6; i++) {
        int digito = valor[i] - '0';
        if (i % 2 == 0) {
            digito *= 2;
            if (digito > 9)
                digito = (digito % 10) + 1;
        }
        soma += digito;
    }

    digitoVerificador = (10 - (soma % 10)) % 10;
    if (valor[6] - '0' != digitoVerificador) {
        throw invalid_argument("�ltimo d�gito incorreto");
    }
}

void Senha::validar(string valor){

    if ((!regex_match(valor, PADRAO_ACEITO))) {
        throw invalid_argument("Senha inv�lida");
    }
}

void Telefone::validar(string valor){

    if ((!regex_match(valor, PADRAO_ACEITO))) {
        throw invalid_argument("Telefone inv�lido");
    }
}

void Texto::validar(string valor){

    if ((!regex_match(valor, PADRAO_ACEITO))) {
        throw invalid_argument("Texto inv�lido");
    }
}
