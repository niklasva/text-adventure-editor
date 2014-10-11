#include "Player.h"
using namespace std;
void decide_direction(const string& input);
void decide_what_to_give(const string& input);
void decide_what_to_pick(const string& input);
void decide_what_to_talk(const string& input);
void decide_what_to_look(const string& input);

void Player::read_input(string& input) //Str
{
    transform(input.begin(), input.end(), input.begin(), std::ptr_fun <int, int> ( std::toupper ) );//Oj vad det blev fulhack

    if(input.find("HELP") || input.find("HJ�LP"))
    {
        ;
    }
    else if((input.find("�VENTYRSKORG") ||  input.find("TITTA P�  �VENTYRSKORG")) || input.find("INVENTORY"))
    {
        for(auto i: inventory_)
	{
	    cout << i.get_name() << i.get_description() << endl; //Arv och get funktioner. mysigt
	}

    }
    else if(input.find("G�")) //fulhackadet har inga gr�nser...
    {
        decide_direction(input);
    }

    else if(input.find("GE"))
    {
	decide_what_to_give(input);

    }

    else if(input.find("PRATA"))
    {
	decide_what_to_talk(input);
    }

    else if(input.find("PLOCKA UPP"))
    {
	decide_what_to_pick(input);

    }
    else if(input.find("TITTA"))
    {
	decide_what_to_look(input);

    }
    else
    {
	cerr << "Nu blev jag f�rvirrad\n";
	cerr << "Det blev bara fel k�nner\n";

    }
}

    void decide_direction(const string& input)
    {
	//H�r skall vi kolla s� att vi f�r rimliga riktningar.
	return;
    }

    void decide_what_to_give(const string& input)
    {


	return;
    }

    void decide_what_to_talk(const string& input)
    {
	//Beroende p� om personen finns eller ej och massa andra paramtetrar..

	return;
    }

    void decide_what_to_pick(const string& input)
    {
	//Det h�r �r f�ljer samma m�nster

	return;
    }

    void decide_what_to_look(const string& input)
    {

	if(input == "TITTA")
	{
	    //D� skall vi skriva ut beskrivningar p� precist allt.

	}


	//Oj vad tokigt det kan bli // john.
	return;
    }