#include "PokedexEntry.h"


PokedexEntry::PokedexEntry(int pokedexID, const char* name, Element e, int numAttacks, const Attack** attacks)
	: pokedexID(pokedexID), name(name), element(e), numAttacks(numAttacks), attacks(attacks)
{

}

std::string PokedexEntry::getSpriteFightFilename() const
{
	std::string f = name;
	for (char& c : f) c = tolower(c);

	f += "_fight.png";
	return f;
}

std::string PokedexEntry::getSpriteOpponentFilename() const
{
	std::string f = name;
	for (char& c : f) c = tolower(c);

	f += "_opponent.png";
	return f;
}
