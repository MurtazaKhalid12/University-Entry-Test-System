# University Entry Test System (CFP Project)

A comprehensive C++ console-based examination system designed for university admission testing, developed as a Computing Fundamentals & Programming (CFP) course project.

## 📋 Project Overview

This system is a complete university entry test management platform built in C++ that handles multiple user roles, examination processes, and administrative functions. The system provides a secure environment for conducting standardized entrance tests for BS, MS, and PhD programs.

## 👥 Development Team

- **Murtaza Khalid** - Core system architecture and examination logic
- **Fatima Waseem** - User authentication and administrative functions  
- **Ariba Mumtaz** - Program details and examination interface
- **Huzaifa Khan** - MCQ management and merit list generation
- **Atif Ashraf** - Aggregate calculation and result processing

## 🎯 Key Features

### Multi-User System
- **Student Mode** - Take examinations and check results
- **Teacher Mode** - Manage questions and generate merit lists
- **Admin Mode** - User management and system administration

### Examination System
- **Multiple Programs** - BS, MS, and PhD level examinations
- **MCQ Format** - Standardized multiple choice questions
- **Real-time Scoring** - Instant result calculation and feedback
- **Merit List Generation** - Automatic department allocation based on scores

### Administrative Features
- **User Management** - Add/remove students, teachers, and admins
- **Question Bank** - Create and edit MCQ papers
- **Result Management** - Track and display examination results
- **Program Information** - Detailed course outlines and admission criteria

## 🏗️ System Architecture

### Core Components
```
├── main.cpp              # Main program entry point
├── functions.h           # Function declarations and headers
├── functions.cpp         # Implementation of all system functions
└── Data Files/          # Text-based data storage
    ├── loginstudents.txt    # Student credentials
    ├── loginteachers.txt    # Teacher credentials
    ├── loginadmins.txt      # Admin credentials
    ├── BSPAPER.txt          # BS examination questions
    ├── MSPAPER.txt          # MS examination questions
    ├── PHDPAPER.txt         # PhD examination questions
    ├── BSKEY.txt            # BS answer key
    ├── MSKEY.txt            # MS answer key
    ├── PHDKEY.txt           # PhD answer key
    └── Result files         # Examination results and merit lists
```

### User Interface Flow
1. **Welcome Screen** - System introduction and team credits
2. **Mode Selection** - Choose between Student, Teacher, or Admin mode
3. **Authentication** - Login verification for each user type
4. **Role-specific Menu** - Different options based on user role
5. **Function Execution** - Perform selected operations

## 🛠️ Technical Implementation

### Programming Language & Standards
- **Language:** C++ (Standard C++11/14)
- **Compiler:** g++ (GNU Compiler Collection)
- **Build System:** Makefile for compilation
- **File I/O:** Text-based file handling for data persistence

### Key Programming Concepts Used
- **Object-Oriented Design** - Modular function organization
- **File Handling** - Text file operations for data storage
- **String Manipulation** - Text processing and comparison
- **Control Structures** - Switch-case and loop implementations
- **Function Decomposition** - Separated concerns for maintainability

### Data Management
- **Text File Storage** - Simple file-based data persistence
- **User Credentials** - Secure login system with file validation
- **Question Banks** - Structured MCQ storage and retrieval
- **Result Tracking** - Automated scoring and merit calculation

## 🚀 Getting Started

### Prerequisites
- **C++ Compiler** - g++ or compatible compiler
- **Make Utility** - For building the project
- **Text Editor** - For code development and data file editing

### Installation & Setup

1. **Clone the repository:**
   ```bash
   git clone https://github.com/MurtazaKhalid12/University-Entry-Test-System.git
   cd University-Entry-Test-System
   ```

2. **Compile the project:**
   ```bash
   make run
   ```
   Or manually:
   ```bash
   g++ -o university_test main.cpp functions.cpp
   ```

3. **Run the application:**
   ```bash
   ./university_test
   ```

### Default System Setup
- **Admin Credentials:** Contact system administrator for initial setup
- **Teacher Accounts:** Must be created by admin users
- **Student Registration:** Handled through admin interface

## 📊 System Functionality

### Student Operations
- **Login System** - Secure authentication with roll number and password
- **Examination Taking** - Interactive MCQ testing interface
- **Result Checking** - View examination scores and performance
- **Merit List Viewing** - Check admission status and department allocation
- **Program Information** - Access detailed course information

### Teacher Operations
- **Question Management** - Create and edit MCQ papers
- **Answer Key Editing** - Update correct answers for examinations
- **Merit List Generation** - Manual merit list creation
- **Examination Review** - View and verify examination content

### Admin Operations
- **User Management** - Add/remove students, teachers, and administrators
- **Password Management** - Reset user passwords and credentials
- **System Administration** - Overall system control and maintenance

## 📚 Program Information

### BS Programs
- **Computer Engineering (BSCE)** - Hardware and software engineering
- **Electrical Engineering (BSEE)** - Electrical systems and circuits
- **Computer Science (BSCS)** - Programming and software development

### MS Programs  
- **Computer Engineering (MSCE)** - Advanced computer systems
- **Electrical Engineering (MSEE)** - Advanced electrical engineering
- **Computer Science (MSCS)** - Advanced software and data science

### PhD Programs
- **Computer Engineering (PhD CE)** - Research in computer systems
- **Electrical Engineering (PhD EE)** - Advanced electrical research
- **Computer Science (PhD CS)** - Computer science research

## 🎯 Examination Format

### Question Distribution
- **Analytical Reasoning** - Logical thinking and problem solving
- **Mathematics** - Quantitative aptitude and calculations
- **English** - Language comprehension and grammar
- **Subject-specific** - Program-related technical questions

### Scoring System
- **Automatic Grading** - Real-time answer checking
- **Merit Calculation** - Percentage-based scoring
- **Department Allocation** - Score-based program assignment
- **Result Generation** - Immediate feedback and status

## 🔧 Development Guidelines

### Code Structure
- **Modular Design** - Separated functions for different features
- **Header Files** - Clean function declarations and includes
- **Error Handling** - Input validation and error messages
- **User Experience** - Clear menus and navigation

### File Organization
- **Source Files** - main.cpp and functions.cpp
- **Header Files** - functions.h for declarations
- **Data Files** - Text files for persistent storage
- **Documentation** - README and code comments

## 📝 Usage Instructions

### For Students
1. Run the program and select "Student mode"
2. Enter your roll number and password
3. Choose from available options (exam, results, merit list)
4. Follow on-screen instructions for each operation

### For Teachers
1. Select "Teacher mode" and login with credentials
2. Access question management or merit list generation
3. Create/edit MCQ papers or generate merit lists
4. Review examination content and student performance

### For Administrators
1. Access "Admin mode" with admin credentials
2. Manage user accounts and system settings
3. Add/remove users and reset passwords
4. Monitor system usage and performance

## 🚧 Future Enhancements

### Planned Improvements
- [ ] **Database Integration** - Replace text files with proper database
- [ ] **GUI Implementation** - Modern graphical user interface
- [ ] **Web Interface** - Browser-based examination system
- [ ] **Advanced Security** - Enhanced authentication and encryption
- [ ] **Analytics Dashboard** - Comprehensive reporting and statistics
- [ ] **Mobile Support** - Cross-platform compatibility

### Technical Upgrades
- [ ] **Object-Oriented Redesign** - Proper class-based architecture
- [ ] **Error Handling** - Comprehensive exception management
- [ ] **Code Optimization** - Performance improvements and refactoring
- [ ] **Testing Framework** - Unit tests and integration testing
- [ ] **Documentation** - Detailed API and user documentation

## 📄 Academic Context

### Course Information
- **Course:** Computing Fundamentals & Programming (CFP)
- **Institution:** Information Technology University (ITU)
- **Academic Level:** Undergraduate
- **Project Type:** Group assignment demonstrating programming fundamentals

### Learning Outcomes
- **Programming Skills** - C++ language proficiency
- **System Design** - Software architecture and planning
- **File Management** - Data persistence and retrieval
- **User Interface** - Console-based application development
- **Team Collaboration** - Group project management

## 🤝 Contributing

This is an academic project, but suggestions and improvements are welcome:

1. **Fork the repository**
2. **Create a feature branch** (`git checkout -b feature/improvement`)
3. **Commit changes** (`git commit -am 'Add improvement'`)
4. **Push to branch** (`git push origin feature/improvement`)
5. **Submit Pull Request**

## 📞 Support & Contact

### Team Members
- **Murtaza Khalid** - [GitHub: @MurtazaKhalid12](https://github.com/MurtazaKhalid12)
- **Fatima Waseem** - Project collaborator
- **Ariba Mumtaz** - Project collaborator  
- **Huzaifa Khan** - Project collaborator
- **Atif Ashraf** - Project collaborator

### Academic Support
- **Course:** Computing Fundamentals & Programming
- **Institution:** Information Technology University
- **Project Repository:** [University Entry Test System](https://github.com/MurtazaKhalid12/University-Entry-Test-System)

## 📄 License

This project is developed as part of academic coursework. Please respect the educational context and use appropriately.

---

**University Entry Test System** - A comprehensive C++ console application for managing university admission examinations, developed as a collaborative academic project demonstrating programming fundamentals and system design principles.