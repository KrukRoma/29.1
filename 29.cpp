#include <iostream>
using namespace std;

////2
//class NegativeNumberException : public exception
//{
//public:
//    const char* what() const throw()
//    {
//        return "Error!";
//    }
//};
//
//void checkPositive(int num)
//{
//    if (num < 0)
//    {
//        throw NegativeNumberException();
//    }
//}
//
////3
//class IndexOutOfBoundsException 
//{
//public:
//    const char* what() const 
//    {
//        return "Index out of bounds";
//    }
//};
//
//void checkIndex(int index, int size) 
//{
//    if (index < 0 || index >= size) 
//    {
//        throw IndexOutOfBoundsException();
//    }
//}

////4
//class DivisionByZeroException 
//{
//public:
//    const char* what() const 
//    {
//        return "Division by zero is not allowed.";
//    }
//};
//
//class IndexOutOfBoundsException 
//{
//public:
//    const char* what() const 
//    {
//        return "Index out of bounds.";
//    }
//};
//
//double divide(int a, int b) 
//{
//    if (b == 0) 
//    {
//        throw DivisionByZeroException();
//    }
//    return static_cast<double>(a) / b;
//}
//
//int accessArrayElement(int arr[], int size, int index) 
//{
//    if (index < 0 || index >= size) 
//    {
//        throw IndexOutOfBoundsException();
//    }
//    return arr[index];
//}

int main()
{
    ////1
    //int a, b;
    //cout << "Enter a and b: " << endl;
    //try
    //{
    //    cin >> a >> b;
    //    if (b == 0)
    //    {
    //        throw b;
    //    }
    //    cout << "Result: " << a << " / " << b << " = " << a / b << endl;
    //}
    //catch (int c)
    //{
    //    cout << "Error! Cannot divide by zero." << endl;
    //}

    ////2
    //int number;
    //cout << "Enter a number: ";
    //cin >> number;

    //try
    //{
    //    checkPositive(number);
    //    cout << "The number is positive" << endl;
    //}
    //catch (NegativeNumberException& e)
    //{
    //    cout << e.what() << endl;
    //}

    ////3
    //const int size = 5;
    //int arr[size] = { 10, 20, 30, 40, 50 };

    //int index;
    //cout << "Enter index to access: ";
    //cin >> index;

    //try 
    //{
    //    checkIndex(index, size);
    //    cout << "Element at index " << index << ": " << arr[index] << endl;
    //}
    //catch (const IndexOutOfBoundsException& e) 
    //{
    //    cout << "Error: " << e.what() << endl;
    //}

    ////4
    //const int size = 5;
    //int arr[size] = { 10, 20, 30, 40, 50 };

    //try 
    //{
    //    try 
    //    {
    //        int a = 10;
    //        int b = 0;
    //        double result = divide(a, b);
    //        cout << "Result of division: " << result << endl;
    //    }
    //    catch (const DivisionByZeroException& e) 
    //    {
    //        cout << "Error: " << e.what() << endl;

    //        try 
    //        {
    //            int index = 10;
    //            int value = accessArrayElement(arr, size, index);
    //            cout << "Element at index " << index << ": " << value << endl;
    //        }
    //        catch (const IndexOutOfBoundsException& e) 
    //        {
    //            cout << "Error: " << e.what() << endl;
    //        }
    //    }
    //}
    //catch (...) 
    //{
    //    cout << "An unexpected error occurred." << endl;
    //}

    //5
    const long long int size = 1e9; 

    try 
    {
        int* arr = new (nothrow) int[size]; 

        if (arr == nullptr) 
        {
            throw "Memory allocation failed.";
        }


        delete[] arr;

        cout << "Memory allocation successful." << endl;
    }
    catch (const char* msg) 
    {
        cout << "Error: " << msg << endl;
    }

}