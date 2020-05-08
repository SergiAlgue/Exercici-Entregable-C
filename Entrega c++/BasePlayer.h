#pragma once

class BasePlayer
{
protected:

	float life;

public:
	BasePlayer();
	BasePlayer(float custom_life);
	~BasePlayer();




	virtual void ReciveDamage(float damage);


	virtual void ApplyDamage(BasePlayer*, float damage);
	float getLife();


};