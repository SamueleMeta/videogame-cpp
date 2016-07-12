#ifndef PROJECTVIDEOGAME_MOB_H
#define PROJECTVIDEOGAME_MOB_H

#include "Character.h"
#include "Hero.h"

class Mob : public Character {
public:
    enum EnemyType {Ogre, Orc, Willowisp, Succubus, Soldier, Skeleton, Undead, Samurai, Demon, Spirit, Abomination, Dragon};

    Mob(int lPoints, int strgth, int energy, Mob::EnemyType t, float drop, int lvl, bool boss) :
            Character(lPoints, strgth, energy), enemyType(t), dropRate(drop), level(lvl), isBoss(boss) {}

    ~Mob() {}

    void drop(Hero& hero);

    virtual void useWeapon(Character& tmpEnemy);

    virtual void useSpecial(Character& tmpEnemy);

    virtual void useScroll(Character& tmpEnemy);


    EnemyType getEnemyType() const {
        return enemyType;
    }

    void setEnemyType(EnemyType enemyType) {
        Mob::enemyType = enemyType;
    }

    float getDropRate() const {
        return dropRate;
    }

    void setDropRate(float dropRate) {
        Mob::dropRate = dropRate;
    }

    int getLevel() const {
        return level;
    }

    void setLevel(int level) {
        Mob::level = level;
    }

    bool isIsBoss() const {
        return isBoss;
    }

    void setIsBoss(bool isBoss) {
        Mob::isBoss = isBoss;
    }

private:
    Mob::EnemyType enemyType;
    float dropRate;
    int level;
    bool isBoss;
};

#endif //PROJECTVIDEOGAME_MOB_H
