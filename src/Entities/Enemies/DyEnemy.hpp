#pragma once
#include "Enemy.hpp"

class DyEnemy : public Enemy {
    private: 
        float angle = 135;
        float aimAngle = 225;
        bool loop = false;
        Rectangle random_rectangle;
    public:
        DyEnemy(float x, float y) : Enemy(x, y) { 
            this->cooldown = GetRandomValue(90, 300);
            this->health = 1; 
            this->points = 400;

            if(GetRandomValue(0, 1) == 0){
                random_rectangle = {2, 128, 13, 14};
            }
            else{
                random_rectangle = {2, 147, 13, 13};
            }
        }

        void draw() override;
        void update(std::pair<float, float> pos, HitBox target) override;
        void attack(HitBox target) override;
};
// Finished Phase 3, Bullet 1 (Adrián E. Quiñones Pérez)