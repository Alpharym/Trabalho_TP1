#include "TestesUnidade.h"

void TUCodigo::setUp(){
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso(){
    try{
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha(){
    try{
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (codigo->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUCodigo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/// Teste unidade da classe Matricula

void TUMatricula::setUp(){
    matricula = new Matricula();
    estado = SUCESSO;
}

void TUMatricula::tearDown(){
    delete matricula;
}

void TUMatricula::testarCenarioSucesso(){
    try{
        matricula->setValor(VALOR_VALIDO);
        if (matricula>getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUMatricula::testarCenarioFalha(){
    try{
        matricula->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (matricula->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUMatricula::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/// Teste de Unidade da classe Senha


void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setValor(VALOR_VALIDO);
        if (senha->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (senha->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/// Teste de Unidade da classe Texto

void TUTexto::setUp(){
    texto = new Texto();
    estado = SUCESSO;
}

void TUTexto::tearDown(){
    delete texto;
}

void TUTexto::testarCenarioSucesso(){
    try{
        texto->setValor(VALOR_VALIDO);
        if (texto->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTexto::testarCenarioFalha(){
    try{
        texto->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (texto->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUTexto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/// Teste de Unidade da classe Telefone

void TUTelefone::setUp(){
    telefone = new Telefone();
    estado = SUCESSO;
}

void TUTelefone::tearDown(){
    delete telefone;
}

void TUTelefone::testarCenarioSucesso(){
    try{
        telefone->setValor(VALOR_VALIDO);
        if (telefone->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha(){
    try{
        telefone->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (telefone->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUTelefone::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/// Teste de unidade da classe Data

void TUData::setUp(){
    data= new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->setValor(VALOR_VALIDO);
        if (data->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (data->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/// Teste de unidade para a classe Classe

void TUClasse::setUp(){
    classe = new Classe();
    estado = SUCESSO;
}

void TUClasse::tearDown(){
    delete classe;
}

void TUClasse::testarCenarioSucesso(){
    try{
        classe->setValor(VALOR_VALIDO);
        if (classe->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUClasse::testarCenarioFalha(){
    try{
        classe->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (classe->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUClasse::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/// Teste de unidade para a classe Resultado

void TUResultado::setUp(){
    resultado = new Resultado();
    estado = SUCESSO;
}

void TUResultado::tearDown(){
    delete resultado;
}

void TUResultado::testarCenarioSucesso(){
    try{
        resultado->setValor(VALOR_VALIDO);
        if (resultado->getValor() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument &excecao){
        estado = FALHA;
    }
}

void TUResultado::testarCenarioFalha(){
    try{
        resultado->setValor(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument &excecao){
        if (resultado->getValor() == VALOR_INVALIDO)
            estado = FALHA;
    }
}

int TUResultado::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/// Teste de unidade da entidade Desenvolvedor

void TUDesenvolvedor::setUp(){
    desenvolvedor = new Desenvolvedor();
    estado = SUCESSO;
}

void TUDesenvolvedor::tearDown(){
    delete desenvolvedor;
}

void TUDesenvolvedor::testarCenarioSucesso(){
    Matricula matricula;
    matricula.setValor(MATRICULA_VALIDA);
    desenvolvedor->setMatricula(matricula);
    if(desenvolvedor->getMatricula().getValor() != MATRICULA_VALIDA)
        estado = FALHA;

    Texto nome;
    nome.setValor(NOME_VALIDO);
    desenvolvedor->setTexto(nome);
    if(desenvolvedor->getTexto().getValor() != NOME_VALIDO)
        estado = FALHA;

    Senha senha;
    senha.setValor(SENHA_VALIDA);
    desenvolvedor->setSenha(senha);
    if(desenvolvedor->getSenha().getValor() != SENHA_VALIDA)
        estado = FALHA;

    Telefone telefone;
    telefone.setValor(TELEFONE_VALIDO);
    desenvolvedor->setTelefone(telefone);
    if(desenvolvedor->getTelefone().getValor() != TELEFONE_VALIDO)
        estado = FALHA;
}

int TUDesenvolvedor::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

/// Teste de unidade da entidade Teste

void TUTeste::setUp(){
    teste = new Teste();
    estado = SUCESSO;
}

void TUTeste::tearDown(){
    delete teste;
}

void TUTeste::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setValor(CODIGO_VALIDO);
    teste->setCodigo(codigo);
    if(teste->getCodigo().getValor() != CODIGO_VALIDO)
        estado = FALHA;

    Texto nome;
    nome.setValor(NOME_VALIDO);
    teste->setTexto(nome);
    if(teste->getTexto().getValor() != NOME_VALIDO)
        estado = FALHA;

    Classe classe;
    classe.setValor(CLASSE_VALIDA);
    teste->setClasse(classe);
    if(teste->getClasse().getValor() != CLASSE_VALIDA)
        estado = FALHA;
}

int TUTeste::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

/// Teste de unidade da entidade Caso de Teste

void TUCasoDeTeste::setUp(){
    casodeteste = new CasoDeTeste();
    estado = SUCESSO;
}

void TUCasoDeTeste::tearDown(){
    delete casodeteste;
}

void TUCasoDeTeste::testarCenarioSucesso(){
    Codigo codigo;
    codigo.setValor(CODIGO_VALIDO);
    casodeteste->setCodigo(codigo);
    if(casodeteste->getCodigo().getValor() != CODIGO_VALIDO)
        estado = FALHA;

    Texto nome;
    nome.setValor(NOME_VALIDO);
    casodeteste->setTexto(nome);
    if(casodeteste->getTexto().getValor() != NOME_VALIDO)
        estado = FALHA;

    Data data;
    data.setValor(DATA_VALIDA);
    casodeteste->setData(data);
    if(casodeteste->getData().getValor() != DATA_VALIDA)
        estado = FALHA;

    Texto acao;
    acao.setValor(ACAO_VALIDA);
    casodeteste->setTexto(acao);
    if(casodeteste->getTexto().getValor() != ACAO_VALIDA)
        estado = FALHA;

    Texto resposta;
    resposta.setValor(RESPOSTA_VALIDA);
    casodeteste->setTexto(resposta);
    if(casodeteste->getTexto().getValor() != RESPOSTA_VALIDA)
        estado = FALHA;

    Resultado resultado;
    resultado.setValor(RESULTADO_VALIDO);
    casodeteste->setResultado(classe);
    if(casodeteste->getResultado().getValor() != RESULTADO_VALIDO)
        estado = FALHA;


}

int TUCasoDeTeste::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
