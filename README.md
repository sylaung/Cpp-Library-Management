# Library Management System (C++)

A console-based application for managing book records with persistent CSV storage, built with modern C++.

## Features

- **Complete Book Management**
  - Add new books with ISBN, title, author, and publication year
  - Browse all books in the catalog
  - Instant search by ISBN
  - Edit existing book details
  - Remove books from the system

- **Reliable Data Storage**
  - Automatic saving to `library.csv`
  - Data preserved between sessions
  - CSV format compatible with spreadsheet software

- **User-Friendly Interface**
  - Intuitive menu navigation
  - Clear data presentation
  - Input validation for data integrity

## System Design

- **Object-Oriented Architecture**
  - `Book` class encapsulates all book properties
  - Separate header/implementation files for clean organization

- **File Operations**
  - CSV parsing using string streams
  - Memory-efficient loading with `vector<Book>`
  - Atomic save operations prevent data corruption

- **Core Components**
  - `Book.h/cpp`: Data model and display logic
  - `Library.h/cpp`: File I/O and business logic
  - `main.cpp`: User interface and program flow

## 📂 File Structure

lib-management-system/
├── book.h # Book class interface
├── book.cpp # Book method implementations
├── library.h # Library function prototypes
├── library.cpp # File operations and logic
├── main.cpp # User interface driver
└── library.csv # Auto-generated data storage
