#ifndef DOMíNIOS_H_INCLUDED
#define DOMíNIOS_H_INCLUDED

#include <stdexcept>
#include <ctype.h>
#include <string>
#include <regex>
#include <unordered_set>

using namespace std;

/// \ Domínio Pai, que sera base para os demais
///
class Dominio {

    protected:
        string valor;
/// Método para verifica se a string inserida está de acordo as especificações de cada domínio
        virtual void validar(string) = 0;
    public:
/// @param valor uma string qualquer
///
/// Inicializa o Domínio com o valor passado
        Dominio(const string&);
        virtual ~Dominio(){};

/// @param valor uma string qualquer
///
/// Invoca a função de validação e, caso a entrada seja válida, o valor é armazenado
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

/// @throw invalid_argument se não for valido
        void validar(string);

    public:
/// **Contem no array de POSSIVEIS_VALORES as strings de Classes validos**
        static const unordered_set<string> POSSIVEIS_VALORES
/// Constroi o Domínio Classe, usando a validar para verificar o dado obtido
        Classe(const string&);

};

/// \brief Dominio Codigo
///
/// **Formato aceito de Codigo**:
/// (LLLDDD)
/// 1. L é uma letra de A - Z, a - z
/// 2. D é um digito de 0 - 9

class Codigo : public Dominio {

    protected:
        static const regex PADRAO_ACEITO;
/// @throw invalid_argument se não for valido
        void validar(string);

    public:
/// Constroi o Domínio Código, usando a validar para verificar o dado obtido
        Codigo(const string&);

};

/// \brief Dominio Data
///
/// Possui uma função validar. Se a data (tipo string) passada para a função for válida,
/// a data é armazenada. Caso contrário, ocorre o lançamento de uma exceção.
///
/// **Formato de data aceita**:
/// (DD/MES/ANO)
///
/// **Formato dos dias aceito**:
/// 1- Números entre 01 - 31. Número menor que 10 deve ser acompanhado por um zero.
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
/// 1- Números de 2000 - 2999
///
/// **Observações**:
/// A funçao leva em consideração se o ano é bissexto ou não
/// - O mês de Fev vai até o dia 28 ou 29(caso seja ano bissexto)
/// - Os meses: Abr, Jun, Set, Nov vão até o dia 30
/// - Os meses: Jan, Mar, Mai, Jul, Ago, Out, Dez vão até o dia 31

class Data : public Dominio {

    protected:
        static const regex PADRAO_ACEITO;
/// @throw invalid_argument se não for valido
        void validar(string);
    public:
/// Constroi o Domínio Data, usando a validar para verificar o dado obtido
        Data(const string&);
};


/// \brief Domínio Matrícula
///
/// Possui uma função validar. Se a matrícula (tipo string) passada para a função for válida, a matricula é
/// armazenada. Caso contrário, ocorre o lançamento de uma exceção.
///
/// **Formato aceito de Matrícula**:
/// -(DDDDDDDX)
/// 1. D é um digito de 0 a 9
/// 2. X é um digito verificador calculado com módulo 10

class Matrícula : public Dominio {

    protected:
/// @throw invalid_argument se não for valido
        void validar(string);
    public:
/// Constroi o Domínio Matricula, usando a validar para verificar o dado obtido
        Matrícula(const string&);

};

/// \brief Domínio Resultado
///
/// **Formato aceito de Resultado**:
/// 1. Palavras abaixo:
/// 1- APROVADO
/// 2- REPROVADO

class Resultado : public Dominio {

    protected:
/// @throw invalid_argument se não for valido
        void validar(string);

    public:
/// **Contem no array de POSSIVEIS_VALORES os tipos de Resultados validos**
        static const unordered_set<string> POSSIVEIS_VALORES
/// Constroi o Domínio Resultado, usando a validar para verificar o dado obtido
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
/// @throw invalid_argument se não for valido
        void validar(string);
    public:
/// Constroi o Domínio Senha, usando a validar para verificar o dado obtido
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
/// @throw invalid_argument se não for valido
        void validar(string);
    public:
/// Constroi o Domínio Telefone, usando a validar para verificar o dado obtido
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
/// **Observações**:
/// Não ha espacos em branco na sequencia
/// Nao ha acentuação

class Texto : public Dominio {

    protected:
        static const regex PADRAO_ACEITO;
/// @throw invalid_argument se não for valido
        void validar(string);
    public:
/// Constroi o Domínio Texto, usando a validar para verificar o dado obtido
        Texto(const string&)

};

#endif // DOMíNIOS_H_INCLUDED
