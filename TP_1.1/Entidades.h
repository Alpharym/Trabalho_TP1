#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "Dominios.h"

/// \brief Entidade Desenvolvedor
///
/// Entidade que vai usar a aplicação. Interage com teste e casos de teste.

class Desenvolvedor {

    private:
        Matricula matricula /// Dominio Matricula, que é primary key da classe
        Texto nome /// Dominio Texto, que guarda um nome
        Senha senha /// Dominio Senha, que guarda uma senha do desenvolvedor
        Telefone telefone /// Dominio Telefone, que guarda um telefone

    public:

        void setMatricula(const string&);
        string geMatricula() const;

        void setTexto(const string&);
        string getTexto() const;

        void setSenha(const string&);
        string getSenha() const;

        void setTelefone(const string&);
        string getTelefone() const;


    /// Construtor da entidade Desenvolvedor que usa os testes para validação dos atributos a serem inseridos
    /// @param matricula, nome, senha, telefone
        Desenvolvedor(const string&, const string&, const string&, const string&);

};

inline void Desenvolvedor::setMatricula(const string& Matricula{
    this->Matricula.setValor(Matricula);

}

inline string Desenvolvedor::getMatricula() const {
    return Matricula.getValor();
}

inline void Desenvolvedor::setTexto(const string& nome{
    this->Texto.setValor(Texto);

}

inline string Desenvolvedor::getTexto() const {
    return Texto.getValor();
}

inline void Desenvolvedor::setSenha(const string& Senha{
    this->Senha.setValor(Senha);

}

inline string Desenvolvedor::getSenha() const {
    return Senha.getValor();
}

inline void Desenvolvedor::setTelefone(const string& Telefone{
    this->Telefone.setValor(Telefone);

}

inline string Desenvolvedor::getTelefone() const {
    return Telefone.getValor();
}


/// \brief Entidade Teste
/// Campo que define o objeto Teste e seus atributos

class Teste {
    private:
        Codigo codigo; /// Dominio Codigo, serve como primary key da classe
        Texto nome; /// Dominio Texto, que guarda um nome
        Classe classe; /// Dominio Classe, que guarda as strings aceitas

    public:
        void setCodigo(const string&);
        string getCodigo() const;

        void setTexto(const string&);
        string getTexto() const;

        void setClasse(const string&);
        string getClasse() const;

    /// Todo atributo da entidade tem um set/get<b>NomeDoAtributo</b>
    /// @param (codigo, nome, classe)
        Teste(const string&, const string&, const string&);
};

inline void Teste::setCodigo(const string& codigo){
    this->codigo.setValor(codigo);
}

inline string Teste::getCodigo() const {
    return codigo.getValor();
}

inline void Teste::setTexto(const string& Texto){
    this->Texto.setValor(Texto);
}

inline string Teste::getTexto() const {
    return Texto.getValor();
}

inline void Teste::setClasse(const string& Classe{
    this->Classe.setValor(Classe);
}

inline string Teste::getClasse() const {
    return Classe.getValor();
}

/// \brief Entidade Caso de Teste
/// Caso de Teste, que é derivado de um teste, vindo do desenvolvedor.
class CasoDeTeste {
    private:
        Codigo codigo;  /// Dominio Codigo, serve como primary key da classe
        Texto nome;  /// Dominio Texto. que guarda um nome
        Data data;  /// Dominio data, que guarda a data dada
        Texto acao;  /// Dominio Texto, que guarda uma ação
        Texto resposta;  /// Dominio Texto, que guarda uma resposta
        Resultado resultado;  /// Dominio Resultado, que guarda um resultado

    public:

        void setCodigo(const string&);
        string getCodigo() const;

        void setNome(const string&);
        string getNome() const;

        void setData(const string&);
        string getData() const;

         void setAcao(const string&);
        string getAcao() const;

        void setResposta(const string&);
        string getResposta() const;

        void setResultado(const string&);
        string getResultado() const;

    /// Construtor da entidade CasoDeTeste, por meio da validação de cada uma das strings introduzidas
    /// Todo atributo da entidade tem um set/get<b>NomeDoAtributo</b>
    /// @param codigo, nome, data, ação, resposta, Resultado
        CasoDeTeste(const string&, const string&, const string&, const string&, const string&, const string&);

};

inline void CasoDeTeste::setCodigo(const string& Codigo){
    this->codigo.setValor(codigo);
}

inline string CasoDeTeste::getCodigo() const {
    return codigo.getValor();
}

inline void CasoDeTeste::setNome(const string& Nome){
    this->nome.setValor(nome);
}

inline string CasoDeTeste::getNome() const {
    return nome.getValor();
}

inline void CasoDeTeste::setData(const string& Data){
    this->data.setValor(data);
}

inline string CasoDeTeste::getData() const {
    return data.getValor();
}

inline void CasoDeTeste::setAcao(const string& Acao){
    this->acao.setValor(acao);
}

inline string CasoDeTeste::getAcao() const {
    return acao.getValor();
}

inline void CasoDeTeste::setResposta(const string& Resposta){
    this->resposta.setValor(resposta);
}

inline string CasoDeTeste::getResposta() const {
    return resposta.getValor();
}

inline void CasoDeTeste::setResultado(const string& Resultado){
    this->resultado.setValor(resultado);
}

inline string CasoDeTeste::getResultado() const {
    return resultado.getValor();
}

#endif // ENTIDADES_H_INCLUDED
