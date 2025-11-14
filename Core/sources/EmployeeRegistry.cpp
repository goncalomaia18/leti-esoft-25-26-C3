#include "./headers/EmployeeRegistry.h"
#include <iostream>

void EmployeeRegistry::registerEmployee(const std::string& name,
                                        const std::string& phoneNumber,
                                        const std::string& email,
                                        Role role,
                                        const std::string& citizenCardNumber) {
    try {
        checkUniqueness(phoneNumber, email);

        auto newEmployee = std::make_unique<Employee>(name, phoneNumber, email, role, citizenCardNumber);

        std::cout << "SUCESSO: Novo Funcionário no Sistema '" << newEmployee->getName() << "' registado." << std::endl;
        m_existingPhoneNumbers.insert(newEmployee->getPhoneNumber());
        m_existingEmails.insert(newEmployee->getEmail());
        m_employees.push_back(std::move(newEmployee));

    } catch (const std::exception& e) {
        std::cerr << "FALHA NO REGISTO: " << e.what() << std::endl;
    }
}

void EmployeeRegistry::checkUniqueness(const std::string& phoneNumber, const std::string& email) const {
    if (m_existingPhoneNumbers.count(phoneNumber)) {
        throw std::runtime_error("Erro: O numero de telefone ja existe.");
    }
    if (m_existingEmails.count(email)) {
        throw std::runtime_error("Erro: O endereco de e-mail ja existe.");
    }
}