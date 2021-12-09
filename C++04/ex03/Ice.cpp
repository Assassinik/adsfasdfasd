#include "Ice.hpp"

Ice :: Ice() : type("ice")
{
	std::cout << this->type << " constructed" << std :: endl;
}

Ice :: ~Ice()
{
	std::cout << this->type << " destroyed" << std :: endl;
}

Ice :: Ice(Ice const& copy) : type(copy.getType())
{
	std :: cout << this->type << " constructed from copy" << std :: endl;
}

Ice & Ice :: operator=(Ice const& src)
{
	std :: cout << "Assigned from " << src.getType() << std :: endl;
	return (*this);
}

std :: string const& Ice :: getType(void) const
{
	return (this->type);
}

Ice* Ice :: clone() const
{
	Ice* ret = new Ice;
	return (ret);
}

void Ice :: use(ICharacter& target)
{
	std :: string target_name = target.getName();

	std :: cout << " shoots an ice bolt at " << target_name << std :: endl;
}