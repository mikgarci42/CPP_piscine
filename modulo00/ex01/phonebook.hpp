#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "contact.hpp"
# include <stdbool.h>

class PhoneBook
{
	public:

		Contact	contact[8];
		bool	full;

		PhoneBook(void);
		~PhoneBook(void);
};

#endif
