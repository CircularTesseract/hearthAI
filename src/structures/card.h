#include<string>
#include<type.h>

struct Card{
	string CardName, int Cost, int Attack, int Health, bool Spell,
	bool UseEffect,bool Buff,bool Damage, bool Healing, bool DeathRattle,
	bool Taunt, bool Charge, CardType Type; 
};