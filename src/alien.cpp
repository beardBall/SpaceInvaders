#include "alien.hpp"
#include "raylib.h"
#include "z.hpp"
int ll;

Alien::Alien(Vector2 position, int type) {
  this->type = type;
  this->position = position;
  active = true;
  laserSound = LoadSound(ASSETS_PATH "Sounds/alienLaser.ogg");

  std::string textureFile = TextFormat("Graphics/Alien_%d.png", type);
  if (type == 4) {
    std::string textureFile = "Graphics/daddy.png";
  }
  textureFile = ASSETS_PATH + textureFile;
  std::cout << textureFile << std::endl;
  bool lastMoveLeft = false;
  if ((bool)GetRandomValue(0, 1)) {
    lastMoveLeft = true;
  }

  alienImage = LoadTexture(textureFile.c_str());

  position.x = GetScreenWidth() / 2 - alienImage.width / 2;
  position.y = GetScreenHeight() - alienImage.height;
  lastFireTime = 0;
  level = 2;
  name = "name10mmmn";
  lastMoveTime = GetTime();
	direction = 1;
  alienDieSound = LoadSound(ASSETS_PATH "Sounds/explosion.ogg");
  // std::cout << "alienDirection: " << &g->alienDirection << std::endl;
}

Alien::~Alien() {
  // UnloadTexture(alienImage);
  std::cout << "object Alien destructed!";
}

void Alien::draw() {

  // std::cout<<"drawing alien..."<< std::endl;
  DrawTextureV(alienImage, position, WHITE);
  DrawRectangleLines(position.x, position.y, alienImage.width,
                     alienImage.height, RED);
}

void Alien::update() {
  // position.x += 1;
  // alienDirection * level;

  // LOG(alienDirection);
  // LOG(level);
  // position.x += alienDirection * level;

  /*std::cout << "Time: " << GetTime() << ", lastMoveTime: " << lastMoveTime
            << ", diff: " << (GetTime() - lastMoveTime) << "\n";
*/
	
  if ((GetTime() - lastMoveTime) >= 1.0) {

    //	LOG(GetTime());

    position.x += 3 * direction * level;

    if (position.x + alienImage.width > GetScreenWidth() - 25) {
      direction = -1;
      position.y += 5;
    }

    if (position.x < 25) {
      direction = 1;
      position.y += 5; // MoveDownAliens(24 * alien.level);
    }
    // lastMoveTime = GetTime();
    /*if(lastMoveLeft){
        MoveRight();
        lastMoveLeft = false;
        lastMoveTime = GetTime();
    }else{
        MoveLeft();
        lastMoveLeft = true;
        lastMoveTime = GetTime();
    }
*/

    if (position.y > GetScreenHeight() - 10) {
      position.y = 10;
    }
		lastMoveTime = GetTime();
  }

  //lastMoveTime = GetTime();

}

void Alien::FireLaser() {
  int maxAlienLasers = 5;
  if (GetTime() - lastFireTime >= 6.75 / level) {
    if (maxAlienLasers < 10) {

      lasers.push_back(
          Laser({position.x + alienImage.width / 2, position.y - 1}, -2, 12));
      lastFireTime = GetTime();
      PlaySound(laserSound);
    }
  }
}

Texture2D Alien::getImage() { return alienImage; }

int Alien::getType() { return type; }

Rectangle Alien::getRect() {

  return {position.x, position.y, (float)alienImage.width,
          (float)alienImage.height};
}

void Alien::die() {
  active = false;
  PlaySound(alienDieSound);
}
