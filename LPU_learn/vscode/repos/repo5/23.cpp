#include <iostream>

int main()
{
    // pointer concepts are same as C
    // wild pointer, dangling pointer, generic or void pointer, constant pointer, & NULL pointer
    // float *p; this is Wild pointer
    int *ptr = NULL; // OR int *ptr = 0;
    int num = 56;
    int *const constantPointer = &num;
    {
        int a = 10;
        ptr = &a;
        std::cout << *ptr << std::endl;
    }
    std::cout << *ptr << std::endl; // here this is a dangling pointer since the variable it is pointing is not available outside the block
    std::cout << *constantPointer;
    return 0;
}