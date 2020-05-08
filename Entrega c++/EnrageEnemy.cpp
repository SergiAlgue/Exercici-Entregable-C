#include "EnrageEnemy.h"

EnrageEnemy::~EnrageEnemy() {
	BaseEnemy::~BaseEnemy();
}



float EnrageEnemy::getLife() {
	return BaseEnemy::getLife();

}



void EnrageEnemy::TakeDamage(float damage) {
	BaseEnemy::TakeDamage(damage);

	if (life < 50.0f) {
		attack *= 2.0f;
	}
}
