#include <iostream>
#include <memory>

// Abstract Product A
class Button {
public:
    virtual void render() = 0;
};

// Abstract Product B
class Textbox {
public:
    virtual void show() = 0;
};

// Concrete Product A1
class WinButton : public Button {
public:
    void render() override {
        std::cout << "Windows Button\n";
    }
};

// Concrete Product B1
class WinTextbox : public Textbox {
public:
    void show() override {
        std::cout << "Windows Textbox\n";
    }
};

// Abstract Factory
class GUIFactory {
public:
    virtual std::unique_ptr<Button> createButton() = 0;
    virtual std::unique_ptr<Textbox> createTextbox() = 0;
};

// Concrete Factory
class WinFactory : public GUIFactory {
public:
    std::unique_ptr<Button> createButton() override {
        return std::make_unique<WinButton>();
    }

    std::unique_ptr<Textbox> createTextbox() override {
        return std::make_unique<WinTextbox>();
    }
};

// Sử dụng
int main() {
    std::unique_ptr<GUIFactory> factory = std::make_unique<WinFactory>();
    auto button = factory->createButton();
    auto textbox = factory->createTextbox();
    button->render();
    textbox->show();
}
