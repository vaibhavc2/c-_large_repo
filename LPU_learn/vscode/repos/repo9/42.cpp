#include <iostream>

class Data
{
protected:
    int num, _num;

public:
    void getData()
    {
        std::cin >> num;
    }
};

class Reverse : protected Data
{
protected:
    int rem, rev;

public:
    int GetReverse()
    {
        while (num != 0)
        {
            rem = num % 10;
            rev = rev * 10 + rem;
            num /= 10;
        }
        return rev;
    }
};

class Palindrome : protected Reverse
{
public:
    void check()
    {
        if (_num == rev)
        {
            std::cout << "it is palindrome" << std::endl;
        }
        else
        {
            std::cout << "it is not palindrome" << std::endl;
        }
    }
};

int main()
{
    Data* dataObj = new Data();
    dataObj->getData();

    Reverse revObj;
    std::cout << "Reversed Number: " << revObj.GetReverse() << std::endl;

    Palindrome palindromeObj;
    palindromeObj.check();

    std::cin.get();
    return 0;
}