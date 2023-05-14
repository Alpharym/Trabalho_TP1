#include "Dominios.h"


const unordered_set<string> Classe::POSSIVEIS_VALORES = {
    "UNIDADE", "INTEGRACAO", "FUMACA",
    "REGRESSAO", "ACEITACAO"
};

const unordered_set<string> Resultado::POSSIVEIS_VALORES = {
    "APROVADO", "REPROVADO"
};

const regex Data::PADRAO_ACEITO = regex(
    "^(0[1-9]|[12]\d|3[01])/(jan|fev|mar|abr|mai|jun|jul|ago|set|out|nov|dez)/(((20([02468][048]|[13579][26])|19([02468][048]|[13579][26]))-02-29)|((20\d{2}|29[0-9][0-9])-(0[469]|11)-(0[1-9]|[12]\d|30))|((20\d{2}|29[0-9][0-9])-02-(0[1-9]|1\d|2[0-8]))|((20\d{2}|29[0-9][0-9])-(0[13578]|10)-(0[1-9]|[12]\d|3[01])))$"
);

const regex Senha::PADRAO_ACEITO = regex(
    "^(?!.*(.).*\\1)[A-Za-z0-9@#$%&]{6}$"
);

const regex Telefone::PADRAO_ACEITO = regex(
    "^\\+\\d{7}$|^\\+\\d{1,15}$"
);

const regex Codigo::PADRAO_ACEITO = regex(
    "^[A-Za-z]{3}\\d{3}$"
);

const regex Texto::PADRAO_ACEITO = regex(
    "^[A-Za-z0-9.,:;?!$@%&\\-]{10,20}$"
);

