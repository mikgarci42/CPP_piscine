#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <string>

class Contact
{
	public:

		Contact(void);
		~Contact(void);
		
		void		setindex(int index);
		int			getindex(void);
		void		setfname(std::string fname);
		std::string	getfname(void);
		void		setlname(std::string lname);
		std::string	getlname(void);
		void		setnname(std::string nname);
		std::string	getnname(void);
		void		setphone(std::string phone);
		std::string	getphone(void);
		void		setdsecret(std::string dsecret);
		std::string	getdsecret(void);
		
	private:

		int			_index;
		std::string	_fname;
		std::string	_lname;
		std::string	_nname;
		std::string	_phone;
		std::string	_dsecret;
};

#endif
