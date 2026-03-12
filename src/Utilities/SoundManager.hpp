#pragma once
#include "raylib-cpp/raylib-cpp.hpp"

class SoundManager {
    public:
    static inline Sound attack;
    static inline Sound dead;
    static inline Sound gameOver;
    static inline Sound hit;
    static inline Sound shoot;
    static inline Music musicbg;

    static void Load() {
        attack = LoadSound("audio/attack.mp3");
        dead = LoadSound("audio/dead.mp3");
        gameOver = LoadSound("audio/gameOver.mp3");
        hit = LoadSound("audio/hit.mp3");
        shoot = LoadSound("audio/shoot.mp3");
        musicbg = LoadMusicStream("audio/OutThere.ogg");
    }

    static void Unload() {
        UnloadSound(attack);
        UnloadSound(dead);
        UnloadSound(gameOver);
        UnloadSound(hit);
        UnloadSound(shoot);
        UnloadMusicStream(musicbg);
    }
};
