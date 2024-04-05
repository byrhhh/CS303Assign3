#ifndef FUNCTIONDEC_H
#define FUNCTIONDEC_H
#include "functiondec.h"




namespace CQ{
template<typename Item_Type>


void CQ::queue<Item_Type>:: push(const Item_Type& data){
  if(num_items == capacity) {
    size_t new_capacity = capacity * 2;
    Item_Type* new_data = new Item_Type[new_capacity];
    size_t j = front_index;

    for(size_t i = 0; i < capacity; ++i){
      new_data[i] = data[j];
      j = (j + 1) % capacity;
    }

    front_index = 0;
    rear_index = num_items -1;
    capacity = new_capacity;
    std::swap(data,new_data);
    delete[] new_data;
  }
  
  num_items++;
  rear_index = (rear_index + 1) % capacity;
  data[rear_index] = data;


}
  
template<typename Item_Type>
void CQ::queue<Item_Type>::pop(){
  front_index = (front_index + 1) % capacity;
  num_items--;
}
  
template<typename Item_Type>
Item_Type& CQ::queue<Item_Type>::front(){
  return data[front_index];
}

template<typename Item_Type>
size_t CQ::queue<Item_Type>::size() {
  return num_items;
}

template<typename Item_Type>
bool CQ::queue<Item_Type>::empty(){
  return num_items == 0;
}  
template<typename Item_Type>
int CQ::queue<Item_Type>::linear_search(vector<Item_Type>& items , Item_Type& target, size_t pos_first){
  if (pos_first >= items.size()) 
    return -1;
  if (target == items[pos_first])
    return pos_first;
  else 
    return linear_search(items, target, pos_first + 1);
  
}


}




  

#endif

