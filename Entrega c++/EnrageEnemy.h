#pragma once
#include "BaseEnemy.h"
class EnrageEnemy : BaseEnemy
{
public:


	EnrageEnemy();
	~EnrageEnemy();



	void TakeDamage(float damage) override;
	float getLife();
};

