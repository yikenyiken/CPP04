#ifndef Brain_HPP
# define Brain_HPP
# define IDEAS_N 100
# include <string>

class Brain
{
	private:
		std::string	ideas[IDEAS_N];
	public:
		Brain();
		Brain(const Brain& other);
		~Brain();

		Brain	&operator = (const Brain& other);
};

#endif