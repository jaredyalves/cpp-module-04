#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>

class ICharacter;

class AMateria
{
public:
    virtual AMateria* clone() const = 0;
    virtual void      use(ICharacter& target) = 0;

    const std::string& getType() const;

    AMateria();
    explicit AMateria(const std::string& type);
    AMateria(const AMateria& other);
    virtual ~AMateria();

    AMateria& operator=(const AMateria& other);

protected:
    std::string _type;
};

#endif
