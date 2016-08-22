#include <iostream>
using namespace std;

// Defining a struct called studentType with members firstName, lastName, age;
struct studentType
{
  string firstName;
  string lastName;
  string age;
};

const int size = 100;

// Defining a struct called listType with an array as a member;
struct listType
{
  int list[size]; // array;
  int length;
};

// Function Prototypes;

// Function returning a struct;
studentType test(studentType& student);

// Function to initialize and print array of type listType;
void printArray(listType& array, int size, int& length);

// Function to search array & return index if found;
int seqSearch(const listType& array, int searchItem);


int main()
{
  int search = 3;
  int length;
  // Declare a variable called student of type studentType;
  studentType student;

  // Assigning values to the members of student;
  student.firstName = "tim";
  student.lastName = "bob";
  student.age = "23";

  // Call to Function returning a struct;
  test(student);

  // Declare a variable called array of type listType;
  listType array;

  // Call to Function to initialize and print array of type listType;
  printArray(array, size, length);
  array.length = length;
  cout << array.length << endl;

  // Call to Function to search array & return index if found;
  int index = seqSearch(array, search);
  cout << "index: " << index << endl;

}

// Function returning a struct;
studentType test(studentType& student)
{
  cout << student.firstName << " "
       << student.lastName << " "
       << student.age << endl;

  return student;
}

// Function to initialize and print array of type listType;
void printArray(listType& array, int size, int& length)
{
  length = 0;
  for (int i = 0; i < size; i++)
  {
    array.list[i] = i;
    length++;
  }

  for (int i = 0; i < length; i++)
  {
    cout << array.list[i] << " ";
  }
  cout << endl << endl;
}

// Function to search array & return index if found;
int seqSearch(const listType& array, int searchItem)
{
  bool found = false;
  int i;

  // cout << "length: " << list.length << endl;
  for (i = 0; i < array.length; i++)
  {
    if (array.list[i] == searchItem)
    {
      found = true;
      break;
    }
  }

  if (found == true)
  {
    return i;
  }
}
