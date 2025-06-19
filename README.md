# Library Management System (C++)

A console-based application to manage book records with persistent CSV storage. Built with modern C++ and object-oriented principles.

## Features

- Add books (ISBN, title, author, publication year)
- Browse or search all books in the catalog
- Save/load library data to/from CSV files
- Input validation and clean terminal interface

## Design Overview

- **OOP Architecture**
  - `Book` class with core attributes (ISBN, title, author, year)
  - Value semantics with RAII file handling
  - Stream-based data serialization

- **File I/O**
  - CSV-based persistence with automatic loading/saving
  - Unified `toCSV()` method for consistent formatting
  - Atomic file updates to prevent corruption

## File Structure

- `Book.h/cpp`: Book entity definition and display logic
- `Library.h/cpp`: Core operations (CRUD, file management)
- `main.cpp`: User interface with menu system

## Data

- CSV format: `ISBN,Title,Author,Year`
- Compatible with spreadsheet software (Excel, Google Sheets)
- Preserves data integrity during edits
