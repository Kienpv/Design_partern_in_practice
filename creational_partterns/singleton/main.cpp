#include <iostream>
#include <mutex>

class Singleton {
private:
    static Singleton* instance;
    static std::mutex mutex;
    Singleton() {} // private constructor

public:
    static Singleton* getInstance() {
        std::lock_guard<std::mutex> lock(mutex);
        if (!instance)
            instance = new Singleton();
        return instance;
    }

    void sayHello() {
        std::cout << "Hello from Singleton\n";
    }
};

Singleton* Singleton::instance = nullptr;
std::mutex Singleton::mutex;

int main() {
    Singleton::getInstance()->sayHello();
    return 0;
}
