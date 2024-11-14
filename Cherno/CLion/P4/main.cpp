#include <iostream>
#define LOG(x) std::cout << x << std::endl;

// local static variables

void Function()
{
    static int counter;
    int i = 0;
    counter++;
    LOG(counter << " " << i);
}

int main() {
    Function();
    Function();
    Function();
    Function();
    Function();
// counter variable is initialised only at the first function call and then it is just there present locally

    std::cin.get();
    return 0;
}
