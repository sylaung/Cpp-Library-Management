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
  - `book.h/cpp`: Data model and display logic
  - `library.h/cpp`: File I/O and business logic
  - `main.cpp`: User interface and program flow

## File Structure

- **Core Components**:
  - `book.h` / `book.cpp`: Book data model and methods
  - `library.h` / `library.cpp`: File I/O and logic
  - `main.cpp`: User interface driver
- **Data**:
  - `library.csv`: Persistent book storage (auto-generated)
