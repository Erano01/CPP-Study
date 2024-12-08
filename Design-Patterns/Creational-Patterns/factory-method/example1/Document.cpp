#include <iostream>

// Product Interface
class Document {
public:
    virtual ~Document() = default;
    virtual void open() = 0;
    virtual void close() = 0;
    virtual void save() = 0;
    virtual void revert() = 0;
};