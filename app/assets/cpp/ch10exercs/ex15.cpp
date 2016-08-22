#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void inputData(ifstream& infile, vector<int>& itemId,
               vector<string>& itemName,
               vector<int>& numItemsOrdered, vector<double>& manufPrice,
               vector<double>& sellPrice);

void sort(vector<int>& itemId, vector<string>& itemName,
           vector<int>& numItemsOrdered, vector<double>& manufPrice,
           vector<double>& sellPrice, int length);

void initializeItemsInStock(vector<int> numItemsOrdered,
                            vector<int>& numItemsInStock, int length);

void initializeItemsSold(vector<int>& numItemsSold, int length);

void menu(ofstream& outfile, vector<int> itemId, vector<string> itemName,
          vector<int> numItemsOrdered, vector<int>& numItemsInStock,
          vector<int>& numItemsSold, vector<double> manufPrice,
          vector<double> sellPrice, int totalItems,
          int totalInventoryPrice, int length);

void isInstock(vector<int> itemId, vector<string> itemName,
                vector<int> numItemsInStock, int& index, string str);


void binarySearch(vector<int> itemId, int itemNum, int& index, bool& found,
                    int length);

void selectionSearch(vector<string> itemName, string str,
                      int& index, bool& found, int length);

void updateNumItemsInStock(vector<int>& numItemsInStock,
                            vector<int> numItemsSold, int length);

void totalNumItems(vector<int>& numItemsInStock, int& totalItems, int length);

void totalPrice(vector<double> sellPrice, int& totalInventoryPrice,
                vector<int> numItemsInStock, int length);

void printResults(ofstream& outfile, vector<int> itemId,
                  vector<string> itemName, vector<int> numItemsOrdered,
                  vector<int> numItemsInStock, vector<int> numItemsSold,
                  vector<double> manufPrice, vector<double> sellPrice,
                  int totalItems, int totalInventoryPrice, int length);





int main()
{
  int length;
  vector<string> itemName;
  vector<int> itemId;
  vector<int> numItemsOrdered;
  vector<int> numItemsSold;
  vector<int> numItemsInStock;
  vector<double> manufPrice;
  vector<double> sellPrice;
  int totalItems;             // In stock;
  int totalInventoryPrice;    // Total price of all inventory;

  ifstream infile;
  infile.open("/home/tim/Desktop/cpp/ch10exercs/store.txt");
  if (!infile)
  {
    cout << "Input Failure" << endl;
    return 1;
  }

  ofstream outfile;
  outfile.open("/home/tim/Desktop/cpp/ch10exercs/report.txt");
  if (!outfile)
  {
    cout << "Output Failure" << endl;
    return 1;
  }

  outfile << fixed << showpoint << setprecision(2);


  inputData(infile, itemId, itemName, numItemsOrdered, manufPrice, sellPrice);


  length = itemId.size();


  sort(itemId, itemName, numItemsOrdered, manufPrice, sellPrice, length);


  initializeItemsSold(numItemsSold, length);
  initializeItemsInStock(numItemsOrdered, numItemsInStock, length);


  updateNumItemsInStock(numItemsInStock, numItemsSold, length);

  menu(outfile, itemId, itemName, numItemsOrdered, numItemsInStock,
        numItemsSold, manufPrice, sellPrice, totalItems,
        totalInventoryPrice, length);

  infile.close();
  outfile.close();

  return 0;
}

void inputData(ifstream& infile, vector<int>& itemId,
               vector<string>& itemName,
               vector<int>& numItemsOrdered, vector<double>& manufPrice,
               vector<double>& sellPrice)
{
  char ch;
  string str;
  double a, b;
  int i, j;

  infile >> i;
  while (i != -999)
  {
    itemId.push_back(i);
    infile.get(ch);

    getline(infile, str);
    itemName.push_back(str);

    infile >> j;
    numItemsOrdered.push_back(j);

    infile >> a;
    manufPrice.push_back(a);

    infile >> b;
    sellPrice.push_back(b);

    infile.get(ch);

    infile >> i;
  }
}

void sort(vector<int>& itemId, vector<string>& itemName,
              vector<int>& numItemsOrdered, vector<double>& manufPrice,
              vector<double>& sellPrice, int length)
{
  int smallestIndex;
  int temp;
  double store;
  string str;

  for (int i = 0; i < length - 1; i++)
  {
    smallestIndex = i;
    for (int j = i + 1; j < length; j++)
    {
      if (itemId[j] < itemId[smallestIndex])
      {
        smallestIndex = j;
      }
    }
    temp = itemId[smallestIndex];
    itemId[smallestIndex] = itemId[i];
    itemId[i] = temp;

    str = itemName[smallestIndex];
    itemName[smallestIndex] = itemName[i];
    itemName[i] = str;

    temp = numItemsOrdered[smallestIndex];
    numItemsOrdered[smallestIndex] = numItemsOrdered[i];
    numItemsOrdered[i] = temp;

    store = manufPrice[smallestIndex];
    manufPrice[smallestIndex] = manufPrice[i];
    manufPrice[i] = store;

    store = sellPrice[smallestIndex];
    sellPrice[smallestIndex] = sellPrice[i];
    sellPrice[i] = store;
  }
}


void menu(ofstream& outfile, vector<int> itemId, vector<string> itemName,
          vector<int> numItemsOrdered, vector<int>& numItemsInStock,
          vector<int>& numItemsSold, vector<double> manufPrice,
          vector<double> sellPrice, int totalItems,
          int totalInventoryPrice, int length)
{
  char ch;
  string str;
  int itemNum;
  int index;
  int numSold;

  cout << "What would you like to do?" << endl;
  cout << "See a list of the items we sell?(y/n): ";
  cin >> ch;
  if (ch == 'y')
  {
    for (int i = 0; i < length; i++)
    {
      cout << left;
      cout << setw(10) << itemId[i] << setw(10) << itemName[i] << endl;
    }
  }
  cout << "Check if an item is in stock?(y/n): ";
  cin >> ch;
  if (ch == 'y')
  {
    isInstock(itemId, itemName, numItemsInStock, index, str);
  }
  cout << "Sell an item?(y/n): ";
  cin >> ch;
  if (ch == 'y')
  {
    isInstock(itemId, itemName, numItemsInStock, index, str);

    if (numItemsInStock[index] > 0)
    {
      cout << "How many is the customer buying?: ";
      cin >> numSold;
      numItemsInStock[index] -= numSold;
      numItemsSold[index] += numSold;
      cout << numSold << " " << itemName[index] << "(s) sold." << endl;
    }
  }

  totalNumItems(numItemsInStock, totalItems, length);
  totalPrice(sellPrice, totalInventoryPrice, numItemsInStock, length);

  cout << "Print the Report?(y/n): ";
  cin >> ch;
  if (ch == 'y')
  {
    printResults(outfile, itemId, itemName, numItemsOrdered, numItemsInStock,
                  numItemsSold, manufPrice, sellPrice, totalItems,
                  totalInventoryPrice, length);
  }
}

void isInstock(vector<int> itemId, vector<string> itemName,
               vector<int> numItemsInStock, int& index, string str)
{
  int itemNum;
  char ch;
  bool found = false;
  bool inStock = false;
  int length = itemId.size();

  cout << "Do you know the item id?(y/n): ";
  cin >> ch;
  while (found == false)
  {
    if (ch == 'y')
    {
      cout << "Enter the item id: ";
      cin >> itemNum;
      binarySearch(itemId, itemNum, index, found, length);
      if (itemId[index] == itemNum)
      {
        found = true;
        if (numItemsInStock[index] > 0)
        {
          inStock = true;
        }
      }
    }
    else
    {
      cout << "Enter the item name: ";
      cin >> str;
      cout << str << endl;
      selectionSearch(itemName, str, index, found, length);
      if (itemName[index] == str)
      {
        found = true;
        if (numItemsInStock[index] > 0)
        {
          inStock = true;
        }
      }
    }
    if (found == false)
    {
      cout << "Item not found. Check the item ID or name" << endl;
    }
  }
  if (inStock == true)
  {
    cout << numItemsInStock[index] << " " << itemName[index]
         << "(s) in stock.";
    cout << endl;
  }
  else
  {
    cout << itemName[index] << " is out of stock." << endl;
  }
}

void binarySearch(vector<int> itemId, int itemNum, int& index, bool& found,
                      int length)
{
  int first = 0;
  int last = length - 1;
  int mid;
  found = false;

  while (first <= last && !found)
  {
    mid = (first + last) / 2;
    if (itemId[mid] == itemNum)
    {
      found = true;
    }
    else if (itemId[mid] > itemNum)
    {
      last = mid - 1;
    }
    else
    {
      first = mid + 1;
    }
  }
  if (found)
  {
    index = mid;
  }

}

void selectionSearch(vector<string> itemName, string str,
                      int& index, bool& found, int length)
{
  int loc;
  found = false;
  for (loc = 0; loc < length; loc++)
  {
    if (itemName[loc] == str)
    {
      found = true;
      break;
    }
  }
  if (found)
  {
    if (itemName[loc] == str)
    {
      index = loc;
    }
    else
    {
      found = false;
    }
  }
}


void printResults(ofstream& outfile, vector<int> itemId,
               vector<string> itemName, vector<int> numItemsOrdered,
               vector<int> numItemsInStock, vector<int> numItemsSold,
               vector<double> manufPrice, vector<double> sellPrice,
               int totalItems, int totalInventoryPrice, int length)
{
  cout << endl;
  cout << right << setw(21) << setfill(' ') << " ";
  cout << left << "Friendly Hardware Store" << endl << endl;
  cout << left;
  cout << setw(8) << "Item ID" << setw(15) << "Item Name"
       << setw(9) << "pOrdered" << setw(9) << "pInStore"
       << setw(6) << "pSold" << setw(11) << "manufPrice"
       << setw(12) << "sellingPrice" << endl;



  for (int i = 0; i < length; i++)
  {
    cout << left << setw(8);
    cout << itemId[i];
    cout << setw(14);
    cout << itemName[i];
    cout << right << setw(9);
    cout << numItemsOrdered[i];
    cout << setw(9);
    cout << numItemsInStock[i];
    cout << setw(6);
    cout << numItemsSold[i];
    cout << setw(11);
    cout << manufPrice[i];
    cout << setw(12);
    cout << sellPrice[i];
    cout << endl;
  }
  cout << endl;

  cout << "Total Inventory: $" << totalInventoryPrice << endl;
  cout << "Total number of items in the store: " << totalItems << endl;

  cout << endl;

  outfile << endl;
  outfile << right << setw(21) << setfill(' ') << " ";
  outfile << left << "Friendly Hardware Store" << endl << endl;
  outfile << left;
  outfile << setw(8) << "Item ID" << setw(15) << "Item Name"
       << setw(9) << "pOrdered" << setw(9) << "pInStore"
       << setw(6) << "pSold" << setw(11) << "manufPrice"
       << setw(12) << "sellingPrice" << endl;



  for (int i = 0; i < length; i++)
  {
    outfile << left << setw(8);
    outfile << itemId[i];
    outfile << setw(14);
    outfile << itemName[i];
    outfile << right << setw(9);
    outfile << numItemsOrdered[i];
    outfile << setw(9);
    outfile << numItemsInStock[i];
    outfile << setw(6);
    outfile << numItemsSold[i];
    outfile << setw(11);
    outfile << manufPrice[i];
    outfile << setw(12);
    outfile << sellPrice[i];
    outfile << endl;
  }
  outfile << endl;

  outfile << "Total Inventory: $" << totalInventoryPrice << endl;
  outfile << "Total number of items in the store: " << totalItems << endl;

  outfile << endl;

}

void initializeItemsInStock(vector<int> numItemsOrdered,
                            vector<int>& numItemsInStock, int length)
{
  for (int i = 0; i < length; i++)
  {
    int num;
    num = numItemsOrdered[i];
    numItemsInStock.push_back(num);
  }
}

void initializeItemsSold(vector<int>& numItemsSold, int length)
{
  for (int i = 0; i < length; i++)
  {
    numItemsSold.push_back(0);
  }
}


void updateNumItemsInStock(vector<int>& numItemsInStock,
                            vector<int> numItemsSold, int length)
{
  for (int i = 0; i < length; i++)
  {
    int num;
    num = numItemsSold[i];
    numItemsInStock[i] -= num;
  }
}

void totalNumItems(vector<int>& numItemsInStock, int& totalItems, int length)
{
  totalItems = 0;
  for (int i = 0; i < length; i++)
  {
    totalItems += numItemsInStock[i];
  }
}

void totalPrice(vector<double> sellPrice, int& totalInventoryPrice,
                vector<int> numItemsInStock, int length)
{
  totalInventoryPrice = 0;
  int num;
  int price;

  for (int i = 0; i < length; i++)
  {
    price = sellPrice[i];
    num = numItemsInStock[i];
    totalInventoryPrice += (num * price);
  }
}
