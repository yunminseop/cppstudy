#include <iostream>

int main(){
    int arr1[] = {1, 2, 3, 4};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    std::cout << size1 << std::endl;

    int dynamic_length = 5;
    double *arr2 = new double[dynamic_length];
    std::cout << "--------" << std::endl;

    for (int i = 0; i < dynamic_length; i++)
    {
        arr2[i] = i*3.0;
    }

    for (int i = 0 ; i < dynamic_length; i++)
    {
        std::cout << "arr[" << i << "]의 주소: " << &arr2[i] << std::endl;
    }

    dynamic_length = 6;
    std::cout << "동적할당 메모리: " << dynamic_length <<std::endl;
    arr2[5] = 7;

    for (int i = dynamic_length-1 ; i >= 0; i--)
    {
        std::cout << arr2[i] << '\n' ;
    }
    for (int i = 0 ; i < dynamic_length; i++)
    {
        std::cout << "arr[" << i << "]의 주소: " << &arr2[i] << std::endl;
    }

    dynamic_length = 3;
    std::cout << "--------" << std::endl;
    std::cout << "동적할당 메모리: " << dynamic_length <<std::endl;
    for (int i = dynamic_length-1 ; i >= 0; i--)
    {
        std::cout << arr2[i] << '\n' ;
    }
    std::cout << "--------" << std::endl;
    for (int i = 0 ; i < dynamic_length; i++)
    {
        std::cout << "arr[" << i << "]의 주소: " << &arr2[i] << std::endl;
    }

    
    delete[] arr2;
    return 0;
}