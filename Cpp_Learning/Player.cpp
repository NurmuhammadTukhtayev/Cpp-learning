#include "Entity.cpp"

class Player : Entity {
public:
	/// <summary>
	/// Override function getScore()
	/// </summary>
	/// <returns></returns>
	int getScore() override { return 12; }
};