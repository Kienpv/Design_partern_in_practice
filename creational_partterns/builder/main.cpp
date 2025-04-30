#include <iostream>
#include <string>

class Product {
public:
    std::string partA, partB;
    void show() {
        std::cout << "Product with: " << partA << " and " << partB << std::endl;
    }
};

class Builder {
public:
    virtual void buildPartA() = 0;
    virtual void buildPartB() = 0;
    virtual Product* getResult() = 0;
};

class ConcreteBuilder : public Builder {
    Product* product = new Product();
public:
    void buildPartA() override { product->partA = "Engine"; }
    void buildPartB() override { product->partB = "Wheels"; }
    Product* getResult() override { return product; }
};

class Director {
public:
    void construct(Builder* builder) {
        builder->buildPartA();
        builder->buildPartB();
    }
};

int main() {
    ConcreteBuilder* builder = new ConcreteBuilder();
    Director director;
    director.construct(builder);
    Product* product = builder->getResult();
    product->show();
    delete builder;
    delete product;
}