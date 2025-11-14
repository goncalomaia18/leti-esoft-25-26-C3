#ifndef LETI_ESOFT_25_26_C3_EMPLOYEE_H
#define LETI_ESOFT_25_26_C3_EMPLOYEE_H

#include <string>

enum class Role {
    NURSE,
    RECEPTIONIST,
};

class Employee {
private:
    std::string m_name;
    std::string m_phoneNumber;
    std::string m_email;
    Role m_role;
    std::string m_citizenCardNumber;

    // Funções de validação privadas
    void validateMandatoryFields() const; // AC14-2
    void validateFormats() const;         // AC14-3

    public:
        Employee(const std::string& name,
                 const std::string& phoneNumber,
                 const std::string& email,
                 Role role,
                 const std::string& citizenCardNumber);

        // Getters para aceder aos dados
        const std::string& getName() const;
        const std::string& getPhoneNumber() const;
        const std::string& getEmail() const;
        Role getRole() const;
        const std::string& getCitizenCardNumber() const;
};

#endif //LETI_ESOFT_25_26_C3_EMPLOYEE_H
