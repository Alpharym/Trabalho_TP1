#ifndef DOM�NIOS_H_INCLUDED
#define DOM�NIOS_H_INCLUDED

#include <stdexcept>
#include <ctype.h>
#include <string>
#include <regex>
#include <unordered_set>

using namespace std;

/// \ Dom�nio Pai, que sera base para os demais
///
class Dominio {

    protected:
        string valor;
/// M�todo para verifica se a string inserida est� de acordo as especifica��es de cada dom�nio
        virtual void validar(string) = 0;
    public:
/// @param valor uma string qualquer
///
/// Inicializa o Dom�nio com o valor passado
        Dominio(const string&);
        virtual ~Dominio(){};

/// @param valor uma string qualquer
///
/// Invoca a fun��o de valida��o e, caso a entrada seja v�lida, o valor � armazenado
        void setValor(const string&);

/// @return valor
        string getValor() const;
};


inline string Dominio::getValor() const {

    return valor;
};

/// \brief Dominio Classe
///
/// **Formato aceito de Classe**:
/// 1. Palavras abaixo:
/// 1- UNIDADE
/// 2- INTEGRACAO
/// 3- FUMACA
/// 4- SISTEMA
/// 5- REGRESSAO
/// 6- ACEITACAO

class Classe : public Dominio {

    protected:

/// @throw invalid_argument se n�o for valido
        void validar(string);

    public:
/// **Contem no array de POSSIVEIS_VALORES as strings de Classes validos**
        static const unordered_set<string> POSSIVEIS_VALORES
/// Constroi o Dom�nio Classe, usando a validar para verificar o dado obtido
        Classe(const string&);

};

/// \brief Dominio Codigo
///
/// **Formato aceito de Codigo**:
/// (LLLDDD)
/// 1. L � uma letra de A - Z, a - z
/// 2. D � um digito de 0 - 9

class Codigo : public Dominio {

    protected:
        static const regex PADRAO_ACEITO;
/// @throw invalid_argument se n�o for valido
        void validar(string);

    public:
/// Constroi o Dom�nio C�digo, usando a validar para verificar o dado obtido
        Codigo(const string&);

};

/// \brief Dominio Data
///
/// Possui uma fun��o validar. Se a data (tipo string) passada para a fun��o for v�lida,
/// a data � armazenada. Caso contr�rio, ocorre o lan�amento de uma exce��o.
///
/// **Formato de data aceita**:
/// (DD/MES/ANO)
///
/// **Formato dos dias aceito**:
/// 1- N�meros entre 01 - 31. N�mero menor que 10 deve ser acompanhado por um zero.
///
/// **Formato dos meses aceitos**:
/// - Jan
/// - Fev
/// - Mar
/// - Abr
/// - Mai
/// - Jun
/// - Jul
/// - Ago
/// - Set
/// - Out
/// - Nov
/// - Dez
///
/// **Formato de ano aceito*:
/// 1- N�meros de 2000 - 2999
///
/// **Observa��es**:
/// A fun�ao leva em considera��o se o ano � bissexto ou n�o
/// - O m�s de Fev vai at� o dia 28 ou 29(caso seja ano bissexto)
/// - Os meses: Abr, Jun, Set, Nov v�o at� o dia 30
/// - Os meses: Jan, Mar, Mai, Jul, Ago, Out, Dez v�o at� o dia 31

class Data : public Dominio {

    protected:
        static const regex PADRAO_ACEITO;
/// @throw invalid_argument se n�o for valido
        void validar(string);
    public:
/// Constroi o Dom�nio Data, usando a validar para verificar o dado obtido
        Data(const string&);
};


/// \brief Dom�nio Matr�cula
///
/// Possui uma fun��o validar. Se a matr�cula (tipo string) passada para a fun��o for v�lida, a matricula �
/// armazenada. Caso contr�rio, ocorre o lan�amento de uma exce��o.
///
/// **Formato aceito de Matr�cula**:
/// -(DDDDDDDX)
/// 1. D � um digito de 0 a 9
/// 2. X � um digito verificador calculado com m�dulo 10

class Matr�cula : public Dominio {

    protected:
/// @throw invalid_argument se n�o for valido
        void validar(string);
    public:
/// Constroi o Dom�nio Matricula, usando a validar para verificar o dado obtido
        Matr�cula(const string&);

};

/// \brief Dom�nio Resultado
///
/// **Formato aceito de Resultado**:
/// 1. Palavras abaixo:
/// 1- APROVADO
/// 2- REPROVADO

class Resultado : public Dominio {

    protected:
/// @throw invalid_argument se n�o for valido
        void validar(string);

    public:
/// **Contem no array de POSSIVEIS_VALORES os tipos de Resultados validos**
        static const unordered_set<string> POSSIVEIS_VALORES
/// Constroi o Dom�nio Resultado, usando a validar para verificar o dado obtido
        Resultado(const string&);

};

/// \brief Dominio Senha
///
/// **Formato aceito de Senha**:
/// (XXXXXX)
/// 1. X podendo ser:
/// 1- caracter de A - Z
/// 2- digito   de 0 - 9
/// 3- caracter especial '@', #, $, % e &
/// Nao sera aceito caracteres duplicados
///

class Senha : public Dominio {

    protected:
        static const regex PADRAO_ACEITO;
/// @throw invalid_argument se n�o for valido
        void validar(string);
    public:
/// Constroi o Dom�nio Senha, usando a validar para verificar o dado obtido
        Senha(const string&);

};

/// \brief Dominio Telefone
///
/// **Formato aceito de Telefone**:
/// (+XXXXXXX) ou (+XXXXXXXXXXXXXXX)
///  7 digitos        15 digitos
/// 1. X podendo ser:
/// 1- digito   de 0 - 9

class Telefone : public Dominio {

    protected:
        static const regex PADRAO_ACEITO;
/// @throw invalid_argument se n�o for valido
        void validar(string);
    public:
/// Constroi o Dom�nio Telefone, usando a validar para verificar o dado obtido
        Telefone(const string&);

};

/// \brief Dominio Texto
///
/// **Formato aceito de Texto**:
/// Pode ter de 10 a 20 caracteres
/// 1. X podendo ser:
/// 1- Letra de A - Z, a - z
/// 2- Digito de 0 - 9
/// 3- Sinal de pontuacao . , ; ? ! : -
/// 4- Caracter especial '@', #, $, % ou &
///
/// **Observa��es**:
/// N�o ha espacos em branco na sequencia
/// Nao ha acentua��o

class Texto : public Dominio {

    protected:
        static const regex PADRAO_ACEITO;
/// @throw invalid_argument se n�o for valido
        void validar(string);
    public:
/// Constroi o Dom�nio Texto, usando a validar para verificar o dado obtido
        Texto(const string&)

};

#endif // DOM�NIOS_H_INCLUDED
