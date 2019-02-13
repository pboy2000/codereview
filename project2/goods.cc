#include "./goods.h"

void Goods::SetGoodsInfo() {  
}

void Goods::Goods(int index, int price) {  
  SetGoodsInfo(index, price);
}

// Set member variable of goods with given index and price values
void Goods::SetGoodsInfo(int index, int price) {
  goods_index_ = index;
  goods_price_ = price;
}

// Return index information
int Goods::GetIndex() {
  return goods_index_;
}

// Return price informaiton
int Goods::GetPrice() {
  return goods_price_;
}
