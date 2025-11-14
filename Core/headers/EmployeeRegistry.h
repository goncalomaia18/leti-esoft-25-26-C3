#ifndef LETI_ESOFT_25_26_C3_EMPLOYEEREGISTRY_H
#define LETI_ESOFT_25_26_C3_EMPLOYEEREGISTRY_H

#include "Employee.h"
#include <vector>
#include <set>
#include <string>
#include <memory>
#include <optional>

class EmployeeRegistry {
    private:
        void checkUniqueness(const std::string& phoneNumber, const std::string& email) const;

        std::set<std::string> m_existingPhoneNumbers;
        std::set<std::string> m_existingEmails;

    public:
        EmployeeRegistry() = default;
        void registerEmployee(const std::string& name,
                              const std::string& phoneNumber,
                              const std::string& email,
                              Role role,
                              const std::string& citizenCardNumber);

};

#endif //LETI_ESOFT_25_26_C3_EMPLOYEEREGISTRY_H
