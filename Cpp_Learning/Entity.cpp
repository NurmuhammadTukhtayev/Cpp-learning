#include "GetName.cpp"

class Entity : Name
{
public:
	Entity() {
		x = 20.0f;
		y = 10.0f;
	};

	~Entity() {	};

	void Move(float ax, float ay) {
		x += ax;
		y += ay;
	}

	/// <summary>
	/// Virtual getScore function which can override another subclass
	/// </summary>
	/// <returns></returns>
	virtual int getScore() {
		return 15;
	}

	std::string getClassName() override { return "Classname of Entity"; }

private:
	float x, y;
};