#pragma once
#include <iostream>
#include <string>
#include <memory>

class JoshuaDocument {
protected:
    std::string name;

    // Protected constructor
    JoshuaDocument(const std::string& name) : name(name) {}

public:
    // Getter for name
    std::string getName() const {
        return name;
    }

    // Virtual function to override in derived classes
    virtual std::string toString() const {
        return "Document{name='" + name + "'}";
    }

    // Static factory methods
    static std::unique_ptr<JoshuaDocument> createWordDocument(const std::string& name);
    static std::unique_ptr<JoshuaDocument> createPdfDocument(const std::string& name);
    static std::unique_ptr<JoshuaDocument> createExcelDocument(const std::string& name);
};

class JoshuaWordDocument : public JoshuaDocument {
public:
    JoshuaWordDocument(const std::string& name) : JoshuaDocument(name) {}

    std::string toString() const override {
        return "WordDocument{name='" + getName() + "'}";
    }
};

class JoshuaPDFDocument : public JoshuaDocument {
public:
    JoshuaPDFDocument(const std::string& name) : JoshuaDocument(name) {}

    std::string toString() const override {
        return "PDFDocument{name='" + getName() + "'}";
    }
};

class JoshuaExcelDocument : public JoshuaDocument {
public:
    JoshuaExcelDocument(const std::string& name) : JoshuaDocument(name) {}

    std::string toString() const override {
        return "ExcelDocument{name='" + getName() + "'}";
    }
};
