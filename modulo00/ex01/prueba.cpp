// setiosflags example
#include <iostream>     // std::cout, std::hex, std::endl
#include <iomanip>      // std::setiosflags
#include <string>
#include <stdlib.h>
#include "phonebook.hpp"



void ft_putdata(std::string text)
{
	unsigned int sz;

	sz = text.size();
	if (sz > 10)
	{
		std::cout << text.substr(0, 9);
		std::cout << ".";
	}
	else
	{

		std::cout << std::setw(10);
		std::cout << text;
	}
}

void	ft_add_contact(unsigned int *index, PhoneBook *book)
{
	std::string		text;
	const char*	input[5]
		= { "Nombre: ", "Apellido: ", "Apodo: ", "Telefono: ", "Secreto: "};
	int				len;

	book->contact[*index].setindex(1 + *index);
	len = 0;
	while (len < 5)
	{
		std::cout << input[len];
		getline (std::cin, text);
		if (len == 0)
			book->contact[*index].setfname(text);
		if (len == 1)
			book->contact[*index].setlname(text);
		if (len == 2)
			book->contact[*index].setnname(text);
		if (len == 3)
			book->contact[*index].setphone(text);
		if (len == 4)
			book->contact[*index].setdsecret(text);
		len += 1;	
		text.clear();
	}
	*index += 1;
}

void	ft_show_book(PhoneBook book, unsigned int len)
{
	unsigned int	i;

	i = 0;
	while (i < len || (i < 8 && book.full))
	{
		std::cout << "         " << book.contact[i].getindex();
		std::cout << "|";
		ft_putdata(book.contact[i].getfname());
		std::cout << "|";
		ft_putdata(book.contact[i].getlname());
		std::cout << "|";
		ft_putdata(book.contact[i].getnname());
		std::cout << "|\n";
		i += 1;
	}
}

void	ft_show_contact(PhoneBook book, int i)
{
	std::cout << "Nombre: " << book.contact[i - 1].getfname() << std::endl;
	std::cout << "Apellido: " << book.contact[i - 1].getlname() << std::endl;
	std::cout << "Apodo: " << book.contact[i - 1].getnname() << std::endl;
	std::cout << "Telefono: " << book.contact[i - 1].getphone() << std::endl;
	std::cout << "Secreto oscuro: " << book.contact[i - 1].getdsecret() << std::endl;
}

void	ft_stop(void)
{
	if (std::cin.eof()==1) 
	{
		std::cin.clear();
		std::cin.ignore();
		exit (1);
	}
}

void	ft_search_contact(PhoneBook book, int i)
{
	int		a;
	std::string	txt;

	ft_show_book(book, i);
	std::cout << "De que contacto quieres ampliar la informacion? ";
	getline (std::cin, txt);
	ft_stop();
	const char* str = txt.c_str();
	a = atoi(str);
	while (true)
	{
		if (str && std::strlen(str) == 1 && ((a > 0 && a < 9 && book.full) || (a > 0 && a <= i)))
			break ;
		std::cout << "Introduce un numero valido\nDe que contacto quieres ampliar la informacion? ";
		getline (std::cin, txt);
		ft_stop();
		str = txt.c_str();
		a = atoi(str);
	}
	ft_show_contact(book, a);
}

int main (void)
{
	std::string 	text;
	PhoneBook		book;
	unsigned int	index;

	index = 0;
	book.full = false;
	std::cout << "Que quieres hacer? ";
	getline (std::cin, text);
	while (text.compare("EXIT") != 0)
	{
		if (!text.compare("ADD"))
			ft_add_contact(&index, &book);
		if (!text.compare("SEARCH") && (index > 0 || book.full))
			ft_search_contact(book, (int) index);
		std::cout << "Que quieres hacer? ";
		getline (std::cin, text);
		ft_stop();
		if (index == 8)
		{
			book.full = true;
			index = 0;
		}
	}
	std::cout << text;
}
