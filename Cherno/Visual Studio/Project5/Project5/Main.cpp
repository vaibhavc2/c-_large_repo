#include <iostream>
#define LOG(x) std::cout << x << std::endl;

// Singleton Class is a class which has only one instance of itself, i.e. only 1 object that is common for everytime the class is used!!

//class Singleton
//{
//private:
//    static Singleton* Single_Instance;
//public:
//    static Singleton& GetInstance() {
//        return *Single_Instance;
//    }
//
//    void AnotherMethod()
//    { 
//
//    }
//};

class Singleton
{
public:
    static Singleton& GetInstance() {
        static Singleton SingleInstance;
        return SingleInstance;
    }

    void AnotherMethod()
    {

    }
};

//Singleton* Singleton::Single_Instance = nullptr;


int main() {

    Singleton::GetInstance().AnotherMethod();
    std::cin.get();
    return 0;
}
