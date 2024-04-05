#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
#pragma once


namespace CQ{
  template<typename Item_Type>
  class queue {
    private:
      static const size_t DEAFAULT_CAPACITY = 10;
      size_t capacity;
      size_t num_items;
      size_t front_index;
      size_t rear_index;
      Item_Type *data;

    public:
      //queue();
      void push(const Item_Type & data);
      void pop();
      Item_Type& front();
      size_t size();
      bool empty();
      int linear_search(vector<Item_Type>& items, Item_Type& target, size_t pos_first);

      
  };
  
// void insertion_sort(queue <typename Item_Type>& qu);
  
}
