#include "./headers/Employee.h"
#include <regex>
#include <iostream>

namespace {
    bool isValidPortuguesePhoneNumber(const std::string& phone) {
        // Assumindo 9 dígitos, começando com o 9 default português.
        const std::regex phoneRegex(R"(^[9]\d{8}$)");
        return std::regex_match(phone, phoneRegex);
    }

    bool isValidPortugueseCitizenCard(const std::string& cc) {
        const std::regex ccRegex(R"(^\d{8}\s\d[A-Z]{2}\d$)");
        return std::regex_match(cc, ccRegex);
    }

    bool isValidEmail(const std::string& email) {
        const std::regex emailRegex(R"(^[^@\s]+@[^@\s]+\.[^@\s]+$)");
        return std::regex_match(email, emailRegex);
    }
}

Employee::Employee(const std::string& name,
                   const std::string& phoneNumber,
                   const std::string& email,
                   Role role,
                   const std::string& citizenCardNumber)
        : m_name(name),
          m_phoneNumber(phoneNumber),
          m_email(email),
          m_role(role),
          m_citizenCardNumber(citizenCardNumber) {

    // Validar todos os critérios no momento da criação
    validateMandatoryFields();
    validateFormats();
}

void Employee::validateMandatoryFields() const {
    if (m_name.empty() || m_phoneNumber.empty() || m_email.empty()) {
        throw std::invalid_argument("Erro: Nome, Telefone e E-mail sao obrigatorios.");
    }
}

void Employee::validateFormats() const {
    if (!isValidPortuguesePhoneNumber(m_phoneNumber)) {
        throw std::invalid_argument("Erro: Formato de Telemovel invalido (ex: 912345678).");
    }

    if (isValidPortugueseCitizenCard(m_citizenCardNumber)) {
        throw std::invalid_argument("Erro: Formato de Cartao de Cidadao invalido (ex: 12345678 9 ZY1).");
    }

    if (!isValidEmail(m_email)) {
        throw std::invalid_argument("Erro: Formato de E-mail invalido.");
    }
}

// Implementação dos Getters
const std::string& Employee::getName() const { return m_name; }
const std::string& Employee::getPhoneNumber() const { return m_phoneNumber; }
const std::string& Employee::getEmail() const { return m_email; }
Role Employee::getRole() const { return m_role; }
const std::string& Employee::getCitizenCardNumber() const { return m_citizenCardNumber; }
