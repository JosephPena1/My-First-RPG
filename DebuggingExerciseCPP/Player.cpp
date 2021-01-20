#include "Player.h"

float Player::takeDamage(float damage)
{
    float totalDamage = damage - m_shield.getStatusBoost();

    //decrease health based on damage
    subtractHealth(totalDamage);

    return totalDamage;
}

float Player::attack(Character* other)
{
    return other->takeDamage(getDamage());
}

float Player::getDamage()
{
    return Character::getDamage() + m_weapon.getStatusBoost();
}

float Player::getDefense()
{
    return Character::getDefense() + m_shield.getStatusBoost();
}
