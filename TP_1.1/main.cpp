#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main()
{

    TUCodigo testeCod;

    switch(testeCod.run()){
        case TUCodigo::SUCESSO: cout << "SUCESSO - CODIGO" << endl;
                                break;
        case TUCodigo::FALHA  : cout << "FALHA   - CODIGO" << endl;
                                break;
    }

    TUClasse testeClasse;

    switch(testeClasse.run()){
        case TUClasse::SUCESSO: cout << "SUCESSO - CLASSE" << endl;
                                break;
        case TUClasse::FALHA  : cout << "FALHA   - CLASSE" << endl;
                                break;
    }

    TUData testeData;

    switch(testeData.run()){
        case TUData::SUCESSO: cout << "SUCESSO - DATA" << endl;
                                break;
        case TUData::FALHA  : cout << "FALHA   - DATA" << endl;
                                break;
    }

    TUMatricula testeMat;

    switch(testeMat.run()){
        case TUMatricula:SUCESSO: cout << "SUCESSO - MATRICULA" << endl;
                                break;
        case TUMatricula:FALHA  : cout << "FALHA   - MATRICULA" << endl;
                                break;
    }

    TUResultado testeRes;

    switch(testeRes.run()){
        case TUResultado::SUCESSO: cout << "SUCESSO - RESULTADO" << endl;
                                break;
        case TUResultado::FALHA  : cout << "FALHA   - RESULTADO" << endl;
                                break;
    }

    TUSenha testeSenha;

    switch(testeSenha.run()){
        case TUSenha::SUCESSO: cout << "SUCESSO - SENHA" << endl;
                                break;
        case TUSenha:FALHA  : cout << "FALHA   - SENHA" << endl;
                                break;
    }

    TUTexto testeTexto;

    switch(testeTexto.run()){
        case TUTexto:SUCESSO: cout << "SUCESSO - TEXTO" << endl;
                                break;
        case TUTexto::FALHA  : cout << "FALHA   - TEXTO" << endl;
                                break;
    }

    TUTelefone testeTel;

    switch(testeTel.run()){
        case TUTelefone::SUCESSO: cout << "SUCESSO - TELEFONE" << endl;
                                break;
        case TUTelefone::FALHA  : cout << "FALHA   - TELEFONE" << endl;
                                break;
    }

    TUDesenvolvedor testeDes;

    switch(testeDes.run()){
        case TUDesenvolvedor::SUCESSO: cout << "SUCESSO - DESENVOLVEDOR" << endl;
                                break;
        case TUDesenvolvedor:FALHA  : cout << "FALHA   - DESENVOLVEDOR" << endl;
                                break;
    }

    TUTeste testeTeste;

    switch(testeTeste.run()){
        case TUTeste::SUCESSO: cout << "SUCESSO - TESTE" << endl;
                                break;
        case TUTeste:FALHA  : cout << "FALHA   - TESTE" << endl;
                                break;
    }

    TUCasoDeTeste testeCaso;

    switch(testeCaso.run()){
        case TUCasoDeTeste::SUCESSO: cout << "SUCESSO - CASODETESTE" << endl;
                                break;
        case TUCasoDeTeste:FALHA  : cout << "FALHA   - CASODETESTE" << endl;
                                break;
    }

    return 0;
}
