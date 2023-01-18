#include <iostream>

class Name
{
public:
	/// <summary>
	/// Interface/ pure virtual function for getting name from other classes
	/// </summary>
	/// <returns></returns>
	virtual std::string getClassName() = 0;
private:

};