#ifndef TESTESUNIDADE_H_INCLUDED
#define TESTESUNIDADE_H_INCLUDED

#include "Domínios.h"
#include "Entidades.h"

using namespace std;

///Testes de unidade de domínios

class TUCodigo {
private:
    const static string VALOR_VALIDO   = ALP777;
    const static string VALOR_INVALIDO = B92Q$3;
    Codigo *codigo;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static bool SUCESSO =  true;
    const static bool FALHA   = false;
    int run();
};

class TUClasse {
private:
    const static string VALOR_VALIDO   = UNIDADE;
    const static string VALOR_INVALIDO = FINANCEIRO;
    Classe *classe;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static bool SUCESSO =  true;
    const static bool FALHA   = false;
    int run();
};

class TUData {
private:
    const static string VALOR_VALIDO   = 06/MAR/2003;
    const static string VALOR_INVALIDO = 57/ZED/1998;
    Data *data;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static bool SUCESSO =  true;
    const static bool FALHA   = false;
    int run();
};

class TUMatricula {
private:
    const static string VALOR_VALIDO   = 7268495;
    const static string VALOR_INVALIDO = 6847626;
    Matricula *matricula;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static bool SUCESSO =  true;
    const static bool FALHA   = false;
    int run();
};

class TUResultado {
private:
    const static string VALOR_VALIDO   = APROVADO;
    const static string VALOR_INVALIDO = ABDUZIDO;
    Resultado *resultado;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static bool SUCESSO =  true;
    const static bool FALHA   = false;
    int run();
};

class TUSenha {
private:
    const static string VALOR_VALIDO   = T0p@t7;
    const static string VALOR_INVALIDO = UNBN77;
    Senha *senha;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static bool SUCESSO =  true;
    const static bool FALHA   = false;
    int run();
};

class TUTelefone {
private:
    const static string VALOR_VALIDO   = +999565614;
    const static string VALOR_INVALIDO = +98711245683219956;
    Telefone *telefone;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static bool SUCESSO =  true;
    const static bool FALHA   = false;
    int run();
};

class TUTexto {
private:
    const static string VALOR_VALIDO   = Mandou bem!;
    const static string VALOR_INVALIDO = B0A            NOITE;
    Texto *texto;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static bool SUCESSO =  true;
    const static bool FALHA   = false;
    int run();
};

///Testes de unidade de entidades


class TUDesenvolvedor {
private:
    const static string MATRICULA_VALIDA   = 1234569;
    const static string NOME_VALIDO   = Joao Visconti;
    const static string SENHA_VALIDA   = P@t0Do;
    const static string TELEFONE_VALIDO   = +999565604;
    Desenvolvedor *desenvolvedor;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static bool SUCESSO = true;
    const static bool FALHA   = false;
    int run();
};

class TUTeste {
private:
    const static string CODIGO_VALIDO   = MAX999;
    const static string NOME_VALIDO   = Laura Marques;
    const static string CLASSE_VALIDA   = FUMACA;
    Teste *teste;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static bool SUCESSO = true;
    const static bool FALHA   = false;
    int run();
};

class TUCasoDeTeste {
private:
    const static string CODIGO_VALIDO   = 1234569;
    const static string NOME_VALIDO   = Gabriel Teixeira;
    const static string DATA_VALIDA   = 23/01/2003;
    const static string ACAO_VALIDA   = documentacao;
    const static string RESPOSTA_VALIDA   = Otimo Trabalho;
    const static string RESULTADO_VALIDO   = REPROVADO;
    CasoDeTeste *casodeteste;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static bool SUCESSO = true;
    const static bool FALHA   = false;
    int run();
};

#endif // TESTESUNIDADE_H_INCLUDED
