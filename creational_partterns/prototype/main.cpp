#include <iostream>

class Prototype {
public:
    virtual Prototype* clone() = 0;
    virtual void show() = 0;
};

class ConcretePrototype : public Prototype {
    int data;
public:
    ConcretePrototype(int val) : data(val) {}
    Prototype* clone() override {
        return new ConcretePrototype(data);
    }
    void show() override {
        std::cout << "ConcretePrototype with data = " << data << "\n";
    }
};

int main() {
    Prototype* original = new ConcretePrototype(42);
    Prototype* copy = original->clone();
    copy->show();
    delete original;
    delete copy;
}