# Supplementary Specification (FURPS+)

## Functionality

* Authentication: All system users must be authenticated beforehand.
* Access Control: Only nurses are authorized to access users' full health data.
* Data Management: DGS administrators are responsible for managing the application, including the registration of vaccination centers and personnel (receptionists and nurses).
* System Configuration: DGS administrators configure the core data required for the system's daily operation, such as vaccines and related information.
* Data Persistence: The core server-side application is responsible for maintaining and persisting all data required by the system (e.g., vaccination centers, vaccines, employees)
* Business Logic: The core server-side application is responsible for enforcing the applicable business logic

## Usability 

* Demonstration UI: For demonstration purposes, a basic console-based UI is considered sufficient.
* Language: All project artifacts, including source code, must be developed in English.

## Reliability

* Data Loss: In the event of failure, no data loss should occur.
* Product Quality: The development process must ensure high product quality.

## Performance

* Start-up Time: The system must start up in less than 10 seconds.
* System Load: At peak times, the system is expected to experience high loads.
* Response Time: The system must be designed to ensure a maximum response time of 5 seconds, regardless of load conditions.

## Supportability

* Adaptability: The application should be designed to easily accommodate future pandemic scenarios.

## +

### Design Constraints

* Development Process: Prototype development is organized into 4 sprints. Teams must make partial deliveries.
* Methodologies: Best practices must be adopted in areas such as requirements management and traceability, business analysis, software design, testing, and version control.
* Tools (IDE): The core application is required to be developed in C++, using the CLion IDE, preferably.
* Tools (VCS): Teams must use GitHub as their version control system.
* Tools (Testing): The adoption of the Google Testing Framework is preferable.
* Repository Structure: It is strongly recommended that the repository structure adopt one similar to the one presented in the Demo Project.
* Repository Name: The GitHub repository name must follow the format leti-esoft-25-26-C3.
* Artifact Storage: All project artifacts (diagrams, documents, source code, etc.) must be stored in the version control repository.
* Task Documentation: All team tasks must be properly planned and documented using the "TeamMembersAndTasks.md" template file.

### Implementation Constraints

* Implementation Language: The core application is required to be developed in C++. 
* Language: All source code must be developed in English.

### Interface Constraints

_Specifies or constraints the features inherent to the interaction of the
system being developed with other external systems._

(fill in here)

### Physical Constraints

_Specifies a limitation or physical requirement regarding the hardware used to house the system, as for example: material, shape, size or weight._

(fill in here)