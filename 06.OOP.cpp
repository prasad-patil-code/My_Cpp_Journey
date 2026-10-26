//main.cpp

#include "Random.h"
#include <iostream>

class Monster
{
public:

	enum Type
	{
		dragon = 0,
		goblin = 1,
		ogre = 2,
		orc = 3,
		skeleton = 4,
		troll = 5,
		vampire = 6,
		zombie = 7,
		maxMonsterTypes,
	};

private:

	Type m_monster{};
	std::string m_name{"???"};
	std::string m_roar{"???"};
	int m_hitPoints{};

	constexpr std::string_view getTypeString(const Type& monster) const
	{
		switch(monster)
		{
		case dragon :
			return "dragon";
		case goblin :
			return "goblin";
		case ogre :
			return "ogre";
		case orc :
			return "orc";
		case skeleton :
			return "skeleton";
		case troll :
			return "troll";
		case vampire :
			return "vampire";
		case zombie :
			return "zombie";
		default :
			return "???";
		}
	}

public:

	Monster(Type monster, std::string_view name, std::string_view roar, int hitPoints)
		:m_monster{monster}
		,m_name{name}
		,m_roar{roar}
		,m_hitPoints{hitPoints}
	{

	}

	void print() const
	{
		if(m_hitPoints != 0 )
			std::cout << m_name << " the " << getTypeString(m_monster) << " has " << m_hitPoints << " hit points says " << m_roar << '\n';
		else
			std::cout << m_name << " the " <<  getTypeString(m_monster) << " is dead \n";
	}


};

namespace MonsterGenerator
{
std::string getname(int x)
{
	switch(x)
	{
	case 0 :
		return "Kans";
	case 1 :
		return "Ravan";
	case 2 :
		return "Bakasur";
	case 3 :
		return "Mani";
	case 4 :
		return "Malla";
	case 5 :
		return "Mahish";
	default :
		return "???";
	}
}

std::string getroar(int x)
{
	switch(x)
	{
	case 0 :
		return "beep";
	case 1 :
		return "rattle";
	case 2 :
		return "horn";
	case 3 :
		return "trumpet";
	case 4 :
		return "tuntun";
	case 5 :
		return "gunj";
	default :
		return "???";
	}
}

Monster generate()
{
	Monster::Type t{static_cast<Monster::Type>(Random::get(0, Monster::maxMonsterTypes - 1))};
	Monster m{t, getname(Random::get(0, 5)), getroar(Random::get(0, 5)), Random::get(0, 100)};

	return m;
}

}


int main()
{
	Monster skeleton{ MonsterGenerator::generate() };
	skeleton.print();

	return 0;
}

//Random.h

#ifndef RANDOM_H
#define RANDOM_H

#include <chrono>
#include <random>

namespace Random
{
    // Returns a seeded Mersenne Twister
    inline std::mt19937 generate()
    {
        std::random_device rd{};

        // Create seed_seq with clock and 7 random numbers from std::random_device
        std::seed_seq ss{
            static_cast<std::seed_seq::result_type>(std::chrono::steady_clock::now().time_since_epoch().count()),
            rd(), rd(), rd(), rd(), rd(), rd(), rd()
        };

        return std::mt19937{ ss };
    }

    // The inline keyword ensures we only have one global instance for our whole program
    inline std::mt19937 mt{ generate() };

    // Generate a random int between min and max (inclusive)
    inline int get(int min, int max)
    {
        std::uniform_int_distribution distribution{ min, max };
        return distribution(mt);
    }
}

#endif
