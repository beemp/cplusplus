// Copyright (c) 2016 Copyright Holder All Rights Reserved.
#include <iostream>
#include <string>

/* need to learn vectors, the elders of the internet recommend this,
Until then it is hardcoded. */
#define ARRAY_LEN 5

using std::string;
using std::cout;
using std::cin;
using std::endl;

void setFruitCount(int* favNumber, int* count, std::string* list);
void printFruit(int* favNumber, int* count, string* list);

void init(string* list) {
  list[0].assign("apple");
  list[1].assign("pear");
  list[2].assign("banana");
  list[3].assign("grape");
  list[4].assign("orange");
}

int main() {
  int favNumber;
  int amount[ARRAY_LEN];
  string list[ARRAY_LEN];
  init(list);
  setFruitCount(&favNumber, amount, list);
  printFruit(&favNumber, amount, list);

  return 0;
}

void readInt(string text, int* x) {
  cout << '\n' << text << "s>";
  cin >> *x;
}

void setFruitCount(int* favNumber, int* count, string* list) {
  readInt("Enter fav num", favNumber);

  for (int i=0; i < ARRAY_LEN; ++i) {
    readInt(("Enter amount of "+list[i]), count+i);
  }
}

void printFruit(int* favNumber, int* count, string* list) {
  cout << "favourite number: "<< *favNumber << endl;
  for (int i=0; i < ARRAY_LEN; ++i) {
    cout << "Amount: " << count[i] << ", Fruit: " << list[i] << endl;
  }
}
