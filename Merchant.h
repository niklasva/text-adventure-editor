#include <Merchant.h>
#include <item.h>


#ifndef MERCHANT
#define MERCHANT

class Merchant : Public Person
{
public:
Merchant(const std::string& name,
	const std::string& description,
	const std::string& weight,
	const std::string& length, //Kommer ovan.
	const bool& can_carry,
	const std::string& haircolour,
	const std::string& dialog,
	const std::string& wanted_item,
	const std::string& recieved_item_dialog)
   : Person{name,description,weight,length,can_carry,haircolour,dialog,
      wanted_item,recieved_item_dialog}//Skickar upp i hierarkin

  {}

  ~Merchant() = default;

    
  // �vriga konstruktorer �r implicita. Unsure,,,,,,  
  /* std::string get_description() const {return description_;} */
  /* std::string get_name() const {return name_;} */

  //*******
  void barter();
  //*******


 private:
  vector<item> items_for_sale;
}
#endif