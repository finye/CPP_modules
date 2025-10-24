#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>

Base*	generate(void)
{
	int random = std::rand() % 3;

	if (random == 0)
		return new A();
	else if (random == 1)
		return new B();
	else if (random == 2)
		return new C();
	return nullptr;
}

void	identify(Base* p)
{
	if (!p)
	{
		std::cout << "Nullptr" << std::endl;
		return;
	}
	if(dynamic_cast<A*>(p))
		std::cout << "Type A obj" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type B obj" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type C obj" << std::endl;
	else
		std::cout << "obj Type is not A, B, or C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Type A obj" << std::endl;
		return ;
	}
	catch(const std::exception& e){}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Type B obj" << std::endl;
		return ;
	}
	catch(const std::exception& e){}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Type C obj" << std::endl;
		return ;
	}
	catch(const std::exception& e){}
	std::cout << "obj Type is not A, B, or C" << std::endl;
}

int	main()
{
	try
	{
		std::srand(std::time(nullptr));

		Base* aPtr = new A();
		identify(aPtr);
		identify(*aPtr);

		Base* bPtr = new B();
		identify(bPtr);
		identify(*bPtr);

		Base* cPtr = new C();
		identify(cPtr);
		identify(*cPtr);

		//When you assign a derived object to a base object by value, only the base part is copied
		std::cout << "\nsliced obj" << std::endl;
		Base slicedObj = *bPtr;
		identify(&slicedObj);
		identify(slicedObj);

		Base *goodPtr = bPtr;
		identify(goodPtr);
		identify(*goodPtr);

		std::cout << "\nattempt dynamic_cast from B to A" << std::endl;
		A *attemptA = dynamic_cast<A*>(bPtr);
		identify(attemptA);
		if (attemptA)
			identify(*attemptA);
		std::cout << std::endl;

		Base *rand1 = generate();
		identify(rand1);
		identify(*rand1);

		Base *rand2 = generate();
		identify(rand2);
		identify(*rand2);

		delete aPtr;
		delete bPtr;
		delete cPtr;
		delete rand1;
		delete rand2;

	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}
