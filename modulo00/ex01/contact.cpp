#include "contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::setindex(int index)
{
	this->_index = index;
}

int	Contact::getindex(void)
{
	return (this->_index);
}

void	Contact::Contact::setfname(std::string fname)
{
	this->_fname = fname;
}

std::string	Contact::getfname(void)
{
	return (this->_fname);
}

void	Contact::setlname(std::string lname)
{
	this->_lname = lname;
}

std::string	Contact::getlname(void)
{
	return (this->_lname);
}

void	Contact::setnname(std::string nname)
{
	this->_nname = nname;
}

std::string	Contact::getnname(void)
{
	return (this->_nname);
}

void	Contact::setphone(std::string phone)
{
	this->_phone = phone;
}

std::string	Contact::getphone(void)
{
	return (this->_phone);
}

void	Contact::setdsecret(std::string dsecret)
{
	this->_dsecret = dsecret;
}

std::string	Contact::getdsecret(void)
{
	return (this->_dsecret);
}
