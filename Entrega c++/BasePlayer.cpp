#include "BasePlayer.h"


BasePlayer::BasePlayer(float custom_life) {
	life = custom_life;
}
BasePlayer::BasePlayer() {
	life = 100.0f;
}
BasePlayer::~BasePlayer() {

}






void BasePlayer::ReciveDamage(float damage)
{
	life -= damage;
}

void BasePlayer::ApplyDamage(BasePlayer*, float damage)
{
	ReciveDamage(damage);
}

float BasePlayer::getLife()
{
	return life;
}