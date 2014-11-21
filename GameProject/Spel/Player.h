#include "Entity.h"
#include "Item.h"
#include "Room.h"
#include "Person.h"
#include "Merchant.h"
#include "Game.h"
//Inkluderar massa skit
#ifndef PLAYER
#define PLAYER
class Game;
class Player
{
 public:
  Player() = default;
  ~Player() = default;
  //Instansen skall skapas först
  //Sedan tilldelas spelaren sina föremål & pengar.
  void  put_inventory(const Item& item){inventory_.push_back(item);}
  void remove_from_inventory(const int& index);
  void print_inventory();
  void read_input(QString& input,Game& G);
  void print_specific_item(const int& index);
  void print_money();
  void set_location(const std::string&,Game& G,Room&);
  Item get_item_from_inventory(const int& index);
  int get_money();
 private:
  int money_{0};
  int location_{1}; //The player starts in the first room.
  std::vector <Item> inventory_;

  void decide_direction(Game&);
  void decide_what_to_give(const std::string&,const std::string&,Game&);
  void decide_what_to_talk(const std::string& input,Game&);
  void decide_what_to_pick(const std::string& input,Game&);
  void decide_what_to_look(const std::string& input, Game &G);

};

#endif
